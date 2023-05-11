class Demo
{
    public static void main(String Arg[])
    {
        Child c=new Child();
        c.A=10;
        System.out.println(c.A);
    }
}
class Base
{
    public int A;
}

class Derived extends Base
{
    public int A;
}
class Child extends Derived
{
}