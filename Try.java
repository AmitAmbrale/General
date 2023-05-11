import java.io.*;

class Try 
{
    public static void main(String Arg[]) //throws IOException
    {
        try
        {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
        int No1=Integer.parseInt(bobj.readLine());
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }
    }
}