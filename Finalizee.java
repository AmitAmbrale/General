class Finalizee
{
    public static void main(String Arg[])
    {
       
    }
}
class Demo
{
    public Demo()
    {
        System.out.println("Inside constructor");
    }
    
    protected void finalize()
    {
        System.out.println("Insdie finalize method");
    }
}