import java.io.*;

class Buffered
{
    public static void main(String Arg[]) throws IOException
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        int No=Integer.parseInt(bobj.readLine());

        System.out.println(No);
    }
}