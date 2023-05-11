class Finalize
{
    public static void main(String Arg[])
    {
        Marvellous mobj1=new Marvellous();
        Marvellous mobj2=new Marvellous(10,20);

        mobj1=null;//We are not intrested in the object
        mobj2=null;//telling to the JVM

        System.gc();//Explicitly calling the Garbage collector but when it will come don't no

    }
}
class Marvellous
{
    public int No1;
    public int No2;
    public Marvellous()
    {
        System.out.println("Inside default constructor");
        this.No1=0;
        this.No2=0;
    }
    public Marvellous(int i,int j)
    {
        System.out.println("Inside Parametrised constructor");
        this.No1=i;
        this.No2=j;
    }
    protected void finalize()
    {
        System.out.println("Inside finalize");
    }
}