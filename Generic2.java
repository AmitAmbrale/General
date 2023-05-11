class Generic2
{
    public static void main(String Arg[])
    {
        Demo <Integer> iobj=new Demo <Integer>(10);
        iobj.display();

        Demo <Float> fobj=new Demo <Float>(10.20f);
        fobj.display();

        Demo <Double> dobj=new Demo <Double>(20.52);
        dobj.display();

    }
}
class Demo <T>
{
    public T No1;
    public Demo(T Value)
    {
        No1=Value;
    }
    public void display()
    {
        System.out.println(No1);
    }
}