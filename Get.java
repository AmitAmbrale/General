class Get 
{

    public static void main(String Arg[])
    {
        Marvellous mobj1=new Marvellous();
        Marvellous mobj2=new Marvellous(10);

        mobj1=null;
        mobj2=null;

        System.gc();   
    }
}
class Marvellous
{
    public Marvellous()
    {
        System.out.println("Inside default constructor");
    }
    public Marvellous(int i)
    {
        System.out.println("Inside parametrised constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside destructor");
    }
}