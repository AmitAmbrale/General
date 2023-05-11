class Cl 
{
    public static void main(String Arg[]) throws CloneNotSupportedException
    {
        Marvellous mobj1=new Marvellous("Amit",100,19);
        Marvellous mobj2=(Marvellous)mobj1.clone();
        System.out.println(mobj2.Arr);
        System.out.println(mobj2.age);
        System.out.println(mobj2.marks);
    }
}
class Marvellous implements Cloneable
{
    public String Arr;
    public int marks;
    public int age;
    public Marvellous(String str,int A,int B)
    {
        Arr=str;
        marks=A;
        age=B;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
} 