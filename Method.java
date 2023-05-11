class Method
{
    public static void main(String Arg[])
    {
        Demo hobj=new Demo();
        hobj.gun();
    }
}
class Hello 
{
    public void gun()
    {
        System.out.println("Inside fun");
    }
}
final class Demo extends Hello
{
    public void fun()
    {
        System.out.println("Inside fun");
    }
}
