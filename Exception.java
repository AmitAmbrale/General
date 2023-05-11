class Exception
{
    public static void main(String Arg[])
    {
        int A=10,B=0,C=0;

        // Types of printing the exception
        try
        {
            System.out.println("Hello");
            C=A/B;
        }
        catch(ArithmeticException e)
        {
            // System.out.println(e);
            // e.printStackTrace();//All object [deep info. about the exception ]
            System.out.println(e.toString());//No stack trace
            System.out.println(e.getMessage());//Only description
        }  
    }
}