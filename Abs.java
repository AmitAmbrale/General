class Abs
{
    public static void main(String Arg[])
    {
        Hello obj=new Hello();

        int iRet=0;
        iRet=obj.Addition(10,20);//30
        System.out.println("Addition is : " + iRet);

        iRet=obj.Subtraction(20,10);//10
        System.out.println("Subtraction is : " + iRet);

        iRet=obj.Multiplication(10,20);//200
        System.out.println("Multiplication is : " + iRet);
        
        iRet=obj.Division(100,5);//20
        System.out.println("Division is : " + iRet);
    }
}
abstract class Demo
{
    abstract public int Addition(int i,int j);
    abstract public int Subtraction(int i,int j);
    abstract public int Multiplication(int i,int j);
    abstract public int Division(int i,int j);

}
class Hello extends Demo
{
    public int Addition(int i,int j)
    {
        return i+j;
    }
    public int Subtraction(int i,int j)
    {
        return i-j;
    }
    public int Multiplication(int i,int j)
    {
        return i*j;
    }
    public int Division(int i,int j)
    {
        return i/j;
    }
}