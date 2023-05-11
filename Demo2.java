import java.io.*;

class Demo2
{
    public static void main(String arg[])  throws IOException
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter two numbers : ");
        int No1=Integer.parseInt(bobj.readLine());
        int No2=Integer.parseInt(bobj.readLine());
        int Ans=0;
        try
        {
        Ans=No1/No2;
        }
        // catch(ArithmeticException obj)
        // {
        //     System.out.println("Exception occurred : " + obj.());
        // }
        finally
        {
            System.out.println("Exception occurred : " + obj.toString());
        }
    }
        System.out.println(Ans);
}

