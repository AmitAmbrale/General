import java.util.Scanner;

class Int 
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        Base bobj=new Base();

        float Rad=0;
        System.out.println("Enter the radius of the circle : ");
        Rad=sobj.nextFloat();

        float iRet=0.0f;
        iRet=bobj.CalculateArea(Rad);
        System.out.println("Area of the circle is : " + iRet);

        iRet=bobj.CalculateCircumference(Rad);
        System.out.println("Circumference of the circle is : " + iRet);

    }
}
interface Demo
{
    public float PI=3.14f;
    public float CalculateArea(float Radius); 
    public float CalculateCircumference(float Radius);
}
class Base implements Demo
{
    public float CalculateArea(float Radius)
    {
        return PI*Radius*Radius;
    } 
    public float CalculateCircumference(float Radius)
    {
        return 2*PI*Radius;
    }
}