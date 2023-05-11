class Generic
{
    public static void main(String Arg[])
    {
        Marvellous mobj=new Marvellous();

        mobj=null;

        System.gc();
    }
}

class Marvellous
{
    public Marvellous()
    {
        System.out.println("Inside constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside destructor");
    }
} 