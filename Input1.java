import java.io.*;

class Input1
{
    public static void main(String Arg[]) throws IOException
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        int No1=0,No2=0;
        System.out.println("Enter any two numbers : ");
        No1=Integer.parseInt(bobj.readLine());
        No2=Integer.parseInt(bobj.readLine());

        int Ans=0;
        Ans=No1+No2;
        System.out.println("Addition is : " + Ans);

    }
}