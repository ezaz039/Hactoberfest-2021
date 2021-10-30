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
    static ArrayList<Integer>[] G,IG;
    static void solve(){
        int n = sc.nextInt();
        int m = sc.nextInt();
        G = new ArrayList[n+1];
        IG = new ArrayList[n+1];
        for(int i = 1; i <= n; i++){
            G[i] = new ArrayList<>();
            IG[i] = new ArrayList<>();
        }
        for(int i = 0; i < m; i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            G[u].add(v);
            IG[v].add(u);
        }
        boolean[] visited1 = new boolean[n+1];
        boolean[] visited2 = new boolean[n+1];
        dfs(G,1,0,visited1);
        dfs(IG,1,0,visited2);
        for(int i = 1; i <= n; i++){
            if(!visited1[i]||!visited2[i]){
                out.println("NO");
                if(!visited1[i]){
                    out.println(1+" "+i);
                }
                else if(!visited2[i]){
                    out.println(i+" "+1);
                }
                return;
            }
        }
        out.println("YES");
    }
    static void dfs(ArrayList<Integer>[] A,int u,int pu,boolean[] visited){
        visited[u] = true;
        for(int v: A[u]){
            if(v==pu){
                continue;
            }
            if(!visited[v]){
                dfs(A,v,u,visited);
            }
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