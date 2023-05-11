class Multi6
{
    public static void main(String Arg[])
    {
        Marvellous mobj1=new Marvellous();
        Marvellous mobj2=new Marvellous();

        Thread t1=new Thread(mobj1);
        Thread t2=new Thread(mobj2);
        t1.start();
        t2.start();
    }
}
class Marvellous extends Thread
{
    synchronized public void run()
    {
        for(int i=1;i<=5;i++)
        {
            System.out.println(i);
        }
    }
}