import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
    static long MOD = (long) (1e9 + 7);
    //static int MOD = 998244353;
    static long MOD2 = MOD * MOD;
    static FastReader sc = new FastReader();
    static int pInf = Integer.MAX_VALUE;
    static int nInf = Integer.MIN_VALUE;
    public static void main(String[] args) throws Exception {
        int test = 1;
        //test = sc.nextInt();
        for (int i = 1; i <= test; i++){
            //out.print("Case #"+i+": ");
            solve();
        }
        out.flush();
        out.close();
    }
    static void solve(){
        int n = sc.nextInt();
        int m = sc.nextInt();
        ArrayList<Integer>[] A= new ArrayList[n+1];
        for(int i = 1; i <= n; i++){
            A[i] = new ArrayList<>();
        }
        int[] oDegree = new int[n+1];
        for(int i = 0 ; i < m; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            A[v].add(u);
            oDegree[u]++;
        }
        //out.print(Arrays.toString(oDegree));
        PriorityQueue<Integer> Q = new PriorityQueue<>(Collections.reverseOrder());
        for(int i = 1; i <= n; i++){
            if(oDegree[i]==0){
                Q.add(i);
            }
        }
        ArrayList<Integer> ans = new ArrayList<>();
        while(!Q.isEmpty()){
            int u = Q.peek();
            Q.poll();
            ans.add(u);
            for(int v: A[u]){
                if(--oDegree[v]==0){
                    Q.add(v);
                }
            }
        }
        //out.println(ans);
        Collections.reverse(ans);
        for(int x: ans){
            out.print(x+" ");
        }
    }
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}