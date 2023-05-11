class Or 
{
    public static void main(String Arg[])
    {
        Base bobj=new Derived();

        bobj.fun();
        bobj.gun();
        // bobj.sun();
        bobj.run();

    }
}
class Base
{
    public void fun()
    {
        System.out.println("Inside Base fun");
    }
    public void gun()
    {
        System.out.println("Inside Base gun");
    }
    public void run()
    {
        System.out.println("Inside Base run");
    }
}
class Derived extends Base
{
    public void fun()
    {
        System.out.println("Inside Derived fun");
    }
    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
}