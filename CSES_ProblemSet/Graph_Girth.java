import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
    //static long MOD = (long) (1e9 + 7);
    static int MOD = 998244353;
    static long MOD2 = MOD * MOD;
    static Reader sc = new Reader();
    static int pInf = Integer.MAX_VALUE;
    static int nInf = Integer.MIN_VALUE;
    static long ded = (long)(1e16);
    public static void main(String[] args) throws Exception  {
        int test = 1;
        //test = sc.nextInt();
        while (test-- > 0) solve();
        out.flush();
        out.close();
    }
    static ArrayList<Integer>[] A;
    static int[] dist;
    static void solve() throws Exception{
        int n = sc.nextInt();
        int m = sc.nextInt();
        A = new ArrayList[n+1];
        for(int i = 1; i <= n; i++){
            A[i] = new ArrayList<>();
        }
        for(int i = 0; i < m; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            A[u].add(v);
            A[v].add(u);
        }
        int ans  = pInf;
        for(int i = 1; i <= n; i++){
            dist = new int[n+1];
            for(int j = 1; j <= n; j++){
                dist[j] = pInf;
            }
            dist[i] = 0;
            ArrayDeque<Integer> Q = new ArrayDeque<>();
            Q.add(i);
            while(!Q.isEmpty()){
                int u = Q.poll();
                for(int v: A[u]){
                    if(dist[v]==pInf){
                        dist[v] = dist[u]+1;
                        Q.add(v);
                    }
                    else if(dist[v]>=dist[u]){
                        ans = Math.min(ans,dist[v]+dist[u]+1);
                    }
                }
            }
        }
        out.println(ans==pInf?-1:ans);
    }
    static class Reader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;

        public Reader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }

        private byte read() throws IOException {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }

        public void close() throws IOException {
            if (din == null)
                return;
            din.close();
        }
        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) >= '0' && c <= '9');

            if (neg)
                return -ret;
            return ret;
        }
    }
}