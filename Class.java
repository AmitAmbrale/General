class Class
{
    public static void main(String Arg[])
    {
        Arithmetic aobj;
        
        Arithmetic aobj1=new Arithmetic(40,20);
        int Ans=0;
        Ans=aobj.Add();
        System.out.println("Addition is : " + Ans);
        Ans=aobj1.Add();
        System.out.println("Addition1 is : " + Ans);

        Ans=aobj.Sub();
        System.out.println("Subtraction is : " + Ans);
        Ans=aobj1.Sub();
        System.out.println("Subtraction1 is : " + Ans);

        Ans=aobj.Mul();
        System.out.println("Multiplication is : " + Ans);
        Ans=aobj1.Mul();
        System.out.println("Multiplication1 is : " + Ans);

        Ans=aobj.Div();
        System.out.println("Division is : " + Ans);
        Ans=aobj1.Div();
        System.out.println("Division1 is : " + Ans);

    }
}
class Arithmetic 
{
    public int A,B;

    public Arithmetic()
    {
        this.A=20;
        this.B=10;
    }
    public Arithmetic(int i,int j)
    {
        this.A=i;
        this.B=j;
    }
    public int Add()
    {
        return A+B;
    }
    public int Sub()
    {
        return A-B;
    }
    public int Mul()
    {
        return A*B;
    }
    public int Div()
    {
        return A/B;
    }
}