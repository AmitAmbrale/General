import java.io.*;
import java.net.*;

class Server1 
{
    public static void main(String Arg[]) throws Throwable
    {
        System.out.println("Inside server section");
        System.out.println("Server is started");
        ServerSocket ssobj=new ServerSocket(1000);
        Socket sobj=ssobj.accept();

        PrintStream ps=new PrintStream(sobj.getOutputStream());

        BufferedReader br1=new BufferedReader(new InputStreamReader(sobj.getInputStream()));

        BufferedReader br2=new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;
        while((str1=br1.readLine()) != null)
        {

        }

    }
}