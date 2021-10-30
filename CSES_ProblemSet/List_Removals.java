import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
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
    static void solve () throws Exception{
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int[] q = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
            b[i] = 1;
        }
        segmentTree A = new segmentTree(0,n-1,b);
        for(int i = 0; i < n; i++){
            int k = sc.nextInt()-1;
            int idx = A.findk(k);
            out.print(a[idx]+" ");
            A.pointUpdate(idx,0);
        }
    }
    static class Node{
        //1
        int operation;
        public Node(int operation){
            this.operation = operation;
        }
    }
    private static class segmentTree{
        //0 index-based Segment Tree
        Node node;

        int leftMost,rightMost;
        segmentTree leftChild,rightChild;
        public segmentTree(int leftMost,int rightMost,int[] a){
            this.leftMost = leftMost;
            this.rightMost = rightMost;
            //leaf
            if(leftMost==rightMost){
                //2
                node = new Node(a[leftMost]);
            }
            //Two children
            else{
                int mid = (leftMost+rightMost)/2;
                leftChild = new segmentTree(leftMost,mid,a);
                rightChild = new segmentTree(mid+1,rightMost,a);
                precomp();
            }
        }
        public void precomp() {
            //leaf
            if(leftMost==rightMost)return;
            //Two children
            node = new Node((leftChild.node.operation+rightChild.node.operation));
        }
        public Node merge(Node lNode,Node rNode){
            return new Node(lNode.operation+rNode.operation);
        }
        public void pointUpdate(int idx,int val){
            //leaf
            if(leftMost==rightMost){
                node.operation = val;
                return;
            }
            //Two children
            if(idx<= leftChild.rightMost){
                leftChild.pointUpdate(idx,val);
            }
            else {
                rightChild.pointUpdate(idx,val);
            }
            precomp();
        }
        public Node rangeQuery(int l, int r){
            if(l>rightMost||r<leftMost) {
                //Neutral Element
                return new Node(0);
            }
            else if(leftMost>=l&&rightMost<=r){
                return node;
            }
            Node lNode = leftChild.rangeQuery(l,r);
            Node rNode = rightChild.rangeQuery(l,r);
            return merge(lNode,rNode);
        }
        public int findk(int k){
            if(leftMost==rightMost){
                return leftMost;
            }
            int leftSide = leftChild.node.operation;
            if(leftSide>k){
                return leftChild.findk(k);
            }else{
                return rightChild.findk(k-leftSide);
            }
        }
    }
    static class FastReader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;

        public FastReader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }

        public FastReader(String file_name) throws IOException{
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }

        public String nextLine() {
            try{
                byte[] buf = new byte[10000000]; // line length
                int cnt = 0, c;
                while ((c = read()) != -1) {
                    if (c == '\n')
                        break;
                    buf[cnt++] = (byte) c;
                }
                return new String(buf, 0, cnt);
            }catch (Exception e){
                System.out.println(e.getMessage());
                return null;
            }
        }

        public int nextInt()  {
            int ret = 0;
            try {
                byte c = read();
                while (c <= ' ')
                    c = read();
                boolean neg = (c == '-');
                if (neg) c = read();
                do{
                    ret = ret * 10 + c - '0';
                }  while ((c = read()) >= '0' && c <= '9');

                if (neg) return -ret;
                return ret;
            } catch (Exception e) {
                System.out.println(e.getMessage());
                return -1;
            }
        }

        public long nextLong()   {

            try {
                long ret = 0;
                byte c = read();
                while (c <= ' ') c = read();
                boolean neg = (c == '-');
                if (neg)
                    c = read();
                do {
                    ret = ret * 10 + c - '0';
                }
                while ((c = read()) >= '0' && c <= '9');
                if (neg)
                    return -ret;
                return ret;
            } catch (Exception e) {
                System.out.println(e.getMessage());
                return -1;
            }
        }

        public double nextDouble()  {

            try {
                double ret = 0, div = 1;
                byte c = read();
                while (c <= ' ')
                    c = read();
                boolean neg = (c == '-');
                if (neg) c = read();

                do {
                    ret = ret * 10 + c - '0';
                }
                while ((c = read()) >= '0' && c <= '9');
                if (c == '.') {
                    while ((c = read()) >= '0' && c <= '9') {
                        ret += (c - '0') / (div *= 10);
                    }
                }

                if (neg) return -ret;
                return ret;
            } catch (Exception e) {
                System.out.println(e.getMessage());
                return -1;
            }
        }

        private void fillBuffer() throws IOException{
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }

        private byte read() throws IOException  {
            try{
                if (bufferPointer == bytesRead)
                    fillBuffer();
                return buffer[bufferPointer++];
            }catch(Exception e){
                System.out.println(e.getMessage());
                return -1;
            }
        }

        public void close() throws IOException {
            if (din == null)
                return;
            din.close();
        }
    }
}