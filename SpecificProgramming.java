class SpecificProgramming
{
    public static int Addition(int A,int B)//Specific return value 
    {
        int Result=0;
        Result=A+B;
        return Result;
    }
    public static void main(String Arg[])
    {
        System.out.println("Inside main");

        int iRet=0;
        iRet=Addition(10,20);
        System.out.println("Addition is : " + iRet);
    }
}