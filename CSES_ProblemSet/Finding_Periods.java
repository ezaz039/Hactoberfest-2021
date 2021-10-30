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
        test = sc.nextInt();

        for (int i = 1; i <= test; i++){
//            out.print("Case #"+i+": ");
            solve();
        }
        out.flush();
        out.close();
    }
    public static void solve() {
        String s = sc.next();
        char[] c = s.toCharArray();
        int[] z = zValues(c);
        //out.println(Arrays.toString(z));
        ArrayList<Integer> A = new ArrayList<>();
        for(int i = 1; i < s.length(); i++){
            if(z[i]+i==s.length()){
                A.add(i);
            }
        }
        A.add(s.length());
        for(int g:A){
            out.print(g+" ");
        }
        out.println();
    }
    private static int[] zValues(char[] s) {
        int n=s.length;
        int[] z=new int[n];
        z[0]=s.length;
        int l=0, r=0;
        for (int i=1; i<n; i++) {
            if (i>r) {
                l=r=i;
                while (r<n&&s[r]==s[r-i])
                    r++;

                z[i]=r-l;
                r--;
            }
            else {
                int k=i-l;
                if (z[k]<r-i+1) {
                    z[i]=z[k];
                }
                else {
                    l=i;
                    while (r<n&&s[r-l]==s[r])
                        r++;
                    z[i]=r-l;
                    r--;
                }
            }
        }
        return z;
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