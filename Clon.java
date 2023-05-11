class Clon
{
    public static void main(String Arg[])
    {
        try
        {
        Demo dobj1=new Demo();
        Demo dobj2=(Demo)dobj1.clone();

        System.out.println(dobj2.A);
        }
        catch(Throwable obj)
        {

        }
    }
}

class Demo implements Cloneable
{
    public int A,B;
    public Demo()
    {
        A=10;
        B=20;
    }

     public Object clone()   throws CloneNotSupportedException
    {
        return super.clone();
    }
    
}
