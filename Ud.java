import java.util.Scanner;

class AgeInvalid extends Throwable
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}
class Ud
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int Age=0;

        System.out.println("Enetr your age : ");
        Age=sobj.nextInt();

        try
        {
        if(Age<18)
        {
            throw new AgeInvalid("Your age is Invalid");
        }
        }
        catch(Throwable tobj)
        {
            System.out.println(tobj);
        }
    }
}