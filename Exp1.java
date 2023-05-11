import java.util.*;

class Exp1
{
    public static void main(String Arg[]) throws Throwable
    {
        Scanner sobj=new Scanner(System.in);

        int No1,No2;
        System.out.println("Enter number 1 : ");
        No1=sobj.nextInt();
        System.out.println("Enter number 2 : ");
        No2=sobj.nextInt();

        int Ans=0;

        try
        {
        Ans=No1/No2;
        }
        catch(Throwable obj)
        {
            System.out.println("Exception occurred : " + obj);
        }
        System.out.println("Division is : " + Ans);

    }
}