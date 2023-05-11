import Marvellous.Arithemetic;
import Marvellous.All.Logic;

class Application
{
    public static void main(String Arg[])
    {
        Arithemetic aobj=new Arithemetic();
        Logic lobj=new Logic();

        int iRet=0;
        iRet=aobj.Addition(10,20);
        System.out.println("Addition is : " + iRet);

        iRet=aobj.Subtraction(10,20);
        System.out.println("Subtraction is : " + iRet);

        iRet=aobj.Multiplication(10,20);
        System.out.println("Multiplication is : " + iRet);

        iRet=aobj.Division(10,20);
        System.out.println("Division is : " + iRet);

        lobj.fun();
    }
}