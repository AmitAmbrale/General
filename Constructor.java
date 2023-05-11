class Constructor
{
    public static void main(String Agr[])

    {
        Demo dobj=new Demo();
        Demo obj;
        obj=new Demo(30,40);
        int iRet=0;
        iRet=dobj.Addition();
        System.out.println(iRet);
        iRet=obj.Addition();
        System.out.println(iRet);


    }
}
class Demo
{
    public int A;
    public int B;
    public Demo()
    {
        this.A=10;
        this.B=20;

    }
    public Demo(int x,int j)
    {
        this.A=x;
        this.B=j;
    }

    public int Addition()
    {
        return A+B;
    }

}