class Ov
{
    public static void main(String Arg[])
    {
        Demo dobj=new Demo();
        int Ans=0;
        Ans=dobj.Addition(10,20);
        System.out.println(Ans);
        Ans=dobj.Addition(10,20,30);
        System.out.println(Ans);
        

        float iRet=0.0f;
        iRet=dobj.Addition(10.5f,20);
        System.out.println(iRet);
        iRet=dobj.Addition(10,20.5f);
        System.out.println(iRet);
        iRet=dobj.Addition(10.5f,20.5f);
        System.out.println(iRet);
        iRet=dobj.Addition(10.5f,20.5f,30.5f);
        System.out.println(iRet);
    }
}
class Demo
{
    public int Addition(int i,int j)
    {
        return i+j;
    }
    public int Addition(int i,int j,int k)
    {
        return i+j+k;
    }
    public float Addition(float i,float j)
    {
        return i+j;
    }
    public float Addition(float i,float j,float k)
    {
        return i+j+k;
    }
    public float Addition(float i,int j)
    {
        return i+j;
    }
    public float Addition(int i,float j)
    {
        return i+j;
    }
}