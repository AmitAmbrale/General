import java.util.*;

class Throw 
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int Age=0;
        Age=sobj.nextInt();

        try
        {
        if(Age < 18)
        {
            throw new AgeInvalid("Age is invalid");
        }
        }
        catch(Throwable eobj)
        {
            System.out.println(eobj);
        }

        if(Age > 18)
        {
            System.out.println("You can vote");
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