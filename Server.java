import java.net.*;
import java.io.*;

class Server
{
    public static void main(String Arg[]) throws Throwable
    {
        System.out.println("Server Application is running...");

        ServerSocket ssobj = new ServerSocket(2100);//2100 port number[optional vegla number pun deyu shakto]
        //SreverSocket madhun apun port number sangto jyani karun connction hote
        //Manje ek server jha cha port number ha 2100 tyala client requst karnar

        System.out.println("Server is running at port no : 2100");

        Socket s = ssobj.accept();   //When the client sends the request server will accept the request
        //ssobj.accept() hi line client ni dilya li port number ani loclhost accept karnar

        System.out.println("Server and client connection is suucesful");

        PrintStream ps = new PrintStream(s.getOutputStream());
        //PrintStream ha class io package madhun ala ahe 
        //ya class cha object madhun apun server la input deyu shakto 

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        //Hii line client ni diylala input accept karnar

        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Chat Messanget started...");

        String str1,str2;
        while((str1 = br1.readLine()) != null)
        {
            System.out.println("Client says : "+str1);
            System.out.println("Enter message for client : ");
            str2 = br2.readLine();
            ps.println(str2);
        }
        System.out.println("Thank you for using Chat Messanger...");
    }
}