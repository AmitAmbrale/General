class Super
{
    public static void main(String Arg[])
    {
        Hello hobj=new Hello();
        hobj.gun();
    }
}
class Demo
{
    public int A;
    public Demo()
    {
        this.A=10;
    }
    public Demo(int i)
    {
        this.A=i;
        System.out.println("Inside Demo para");
    }
    public void fun()
    {
        System.out.println("Inside fun");
    }
}
class Hello extends Demo
{
    public int A;
    public Hello()
    {
        super(20);
        this.A=30;
    }
    public void gun()
    {
        System.out.println(A);
        System.out.println(this.A);
        System.out.println(super.A);
        super.fun();
    }
}