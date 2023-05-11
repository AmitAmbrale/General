import java.util.*;

class ExpCre
{
    public static void main(String Arg[]) throws Throwable
    {
        Scanner sobj=new Scanner(System.in);

        int Age=0;
        System.out.print("Enter your age : ");
        Age=sobj.nextInt();
        
        try
        {
        if(Age<18)
        {
            throw new AgeInvalid("Your Age is Invalid");
        }
        else
        {
            System.out.println("You can vote");
        }
        }
        catch(Throwable obj)
        {
            System.out.println(obj);
        }
    }
}
class AgeInvalid extends Throwable
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}