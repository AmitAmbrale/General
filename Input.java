import java.util.*;

class Input
{
    public static void main(String Arg[]) throws Throwable
    {
        Scanner sobj=new Scanner(System.in);

        int Age=0;
        try
        {
            System.out.println("Enter your age : ");
            Age=sobj.nextInt();
            if(Age<20)
            {
                throw new Invalid("You are not allowed");
            }
        }
        catch(Invalid obj)
        {
            System.out.println(obj);
        }
        System.out.println("Your Age is : " + Age);  
    }
}
class Invalid extends Throwable
{
    public Invalid(String str)
    {
        super(str);
    }
}