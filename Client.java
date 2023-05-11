import java.net.*;//Network chi kame karto
import java.io.*;

class Client
{
    public static void main(String Arg[]) throws Throwable
    {
        System.out.println("Client Application is running...");
        System.out.println("Client is waiting for connection");

        Socket s = new Socket("localhost",2100);//localhost same machine varti ahe mahnun
        //2100 ha port number ahe zo server ni sangitla ahe 

        PrintStream ps = new PrintStream(s.getOutputStream());
        //PrintStream ha class io package madhun ala ahe 
        //ya class cha object madhun apun server la input deyu shakto 

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        //hii line zo server input denar tou accept karnar

        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Chat Messanget started...");
        String str1,str2;
        System.out.println("Enter message for server : ");
        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            str2 = br1.readLine();
            System.out.println("Enter message for server : ");
            System.out.println("Server says : "+str2);
        }
        System.out.println("Thank you for using Chat Messanger...");
    }
}