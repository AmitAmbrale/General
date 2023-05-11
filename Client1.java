import java.io.*;
import java.net.*;

class Client1 
{
    public static void main(String Arg[]) throws Throwable
    {
        System.out.println("Inside Client section");
        System.out.println("Client is started");
        Socket sobj=new Socket("localhost",1000);

        //Input
        PrintStream ps=new PrintStream(sobj.getOutputStream());

        BufferedReader br1=new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        
        BufferedReader br2=new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;
        System.out.println("Enter message for Server :");
        while(!(str1=br2.readLine()).equals("end"));
        {
            ps.println(str1);
        }



    }
}