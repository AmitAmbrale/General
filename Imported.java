import Amit.Arithmetic;
import Amit.MaxMin;
import Amit.Arithmetic.Increment;

class Imported
{   
    public static void main(String Arg[])
    {
        Arithmetic aobj=new Arithmetic(10,5);
        MaxMin mobj=new MaxMin();
        Increment iobj=new Increment(10,20);
        int iRet=0;
        iRet=aobj.Add();
        System.out.println("Addition is : "+iRet);
        iRet=aobj.Sub();
        System.out.println("Subtraction is : "+iRet);
        iRet=aobj.Mul();
        System.out.println("Multiplication is : "+iRet);
        iRet=aobj.Div();
        System.out.println("Division is : "+iRet);

        mobj.Max(10,20);
        mobj.Min(20,2);

        iobj.Increment();

    }
}