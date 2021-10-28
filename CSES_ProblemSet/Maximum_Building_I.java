import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
    static long MOD = (long) (1e9 + 7);
    //    static int MOD = 998244353;
    static long MOD2 = MOD * MOD;
    static FastReader sc = new FastReader();
    static int pInf = Integer.MAX_VALUE;
    static int nInf = Integer.MIN_VALUE;
    static long ded = (long)(1e17)+9;
    public static void main(String[] args) throws Exception {
        int test = 1;
        //test = sc.nextInt();
        for (int i = 1; i <= test; i++){
//            out.print("Case #"+i+": ");
            solve();
        }
        out.flush();
        out.close();
    }
    static void solve()throws Exception{
        int n = sc.nextInt();
        int m = sc.nextInt();
        char[][] c = new char[n][m];
        for(int i = 0; i < n; i++){
            c[i] = sc.next().toCharArray();
        }
        int[][] pre = new int[n][m];
        for(int i = 0; i < m; i++){
            if(c[0][i]=='.'){
                pre[0][i] = 1;
            }else{
                pre[0][i] = 0;
            }
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(c[i][j]=='.'){
                    pre[i][j] = pre[i-1][j]+1;
                }else{
                    pre[i][j] = 0;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = Math.max(ans,largestRectangleArea(pre[i]));
        }
        out.println(ans);
    }
    static int largestRectangleArea(int[] a) {
        int[] left = nextGreaterOnLeft(a);
        int[] right = nextGreaterOnRight(a);
        int ans = 0;
        for(int i= 0; i < a.length; i++){
            ans = Math.max(ans,((right[i]-left[i]-1)*a[i]));
        }
        return ans;
    }
    static int[] nextGreaterOnLeft(int[] a){
        ArrayDeque<Integer> A = new ArrayDeque<>();
        int[] ans = new int[a.length];
        for(int i = 0; i < a.length; i++){
            while(!A.isEmpty()&&a[A.peek()]>=a[i]){
                A.pop();
            }
            if(A.isEmpty()){
                ans[i] = -1;
            }else{
                ans[i] = A.peek();
            }
            A.push(i);
        }
        return ans;
    }
    static int[] nextGreaterOnRight(int[] a){
        ArrayDeque<Integer> A = new ArrayDeque<>();
        int[] ans = new int[a.length];
        for(int i = a.length-1; i >= 0; i--){
            while(!A.isEmpty()&&a[A.peek()]>=a[i]){
                A.pop();
            }
            if(A.isEmpty()){
                ans[i] = a.length;
            }else{
                ans[i] = A.peek();
            }
            A.push(i);
        }
        return ans;
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