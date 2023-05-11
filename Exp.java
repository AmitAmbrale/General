class Exp
{
    public static void main(String Arg[])
    {
        int A=10,B=0,Ans=0;
        int Arr[]=new int[2];

        try
        {
            System.out.println(Arr[3]);
        }
        catch(ArrayIndexOutOfBoundsException bobj)
        {
            bobj.printStackTrace();
        }
        finally
        {
        }
    }
}