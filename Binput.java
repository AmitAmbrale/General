import java.io.*;

class Binput
{
    public static void main(String Arg[]) throws Throwable
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        try
        {
        int A=Integer.parseInt(bobj.readLine());
        }
        catch(Throwable tobj)
        {
            System.out.println(tobj);
        }
    }
}