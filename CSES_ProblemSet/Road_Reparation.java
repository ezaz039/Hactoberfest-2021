import java.io.*;
import java.util.*;
import java.lang.*;

public class Main{
    public static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
    static long MOD = (long) (1e9 + 7);
    //    static long MOD = 998244353;
    static long MOD2 = MOD * MOD;
    static FastReader sc = new FastReader();
    static int pInf = Integer.MAX_VALUE;
    static int nInf = Integer.MIN_VALUE;
    static long ded = (long)(1e17)+9;
    public static void main(String[] args) throws Exception {
        int test = 1;
//        test = sc.nextInt();

        for (int i = 1; i <= test; i++){
//            out.print("Case #"+i+": ");
            solve();
        }
        out.flush();
        out.close();
    }
    static void solve(){
        int n = sc.nextInt();
        int m = sc.nextInt();
        makeSet(n);
        int[][] a = new int[m][3];
        for(int i = 0; i < m; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            int w = sc.nextInt();
            a[i][0] = u;
            a[i][1] = v;
            a[i][2] = w;
        }
        Arrays.sort(a,(p,q)->Integer.compare(p[2],q[2]));
        int edges = 0;
        long ans = 0L;
        for(int i=  0; i < m; i++){
            if(union(a[i][0],a[i][1])){
                ans += a[i][2];
                edges++;
            }
        }
        if(edges!=(n-1)){
            out.println("IMPOSSIBLE");
            return;
        }
        out.println(ans);
    }
    static int[] par;
    static int[] size;
    static void makeSet(int n){
        par = new int[n+1];
        size = new int[n+1];
        for(int i= 0; i <= n; i++){
            par[i] = i;
            size[i] = 1;
        }
    }
    static int find(int u){
        return par[u]=(par[u]==u)?u:find(par[u]);
    }
    static boolean union(int u,int v){
        int x = find(u);
        int y = find(v);
        if(x==y)return false;
        //we want x to be small
        if(size[x]>size[y]){
            int t = x;
            x = y;
            y = t;
        }
        //now x is small y is big
        size[y] += size[x];
        par[x] = y;
        return true;
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