class Clone
{
    public static void main(String Arg[])
    {
        try
        {
            Student mobj1=new Student("Amit",19,90);
            Student mobj2=(Student)/*Type casting*/mobj1.clone();

            System.out.println("Name is : "+ mobj2.str);
            System.out.println("Age is : "+ mobj2.age);
            System.out.println("Marks is : "+ mobj2.marks);
        }
        catch(CloneNotSupportedException obj)
        {

        }
    }
}
class Student implements Cloneable
{
    public String str;
    public int age;
    public int marks;

    public Student(String A,int B,int C)
    {
        str=A;
        age=B;
        marks=C;
    }
    public Object clone() throws CloneNotSupportedException //clone() is overrided from the Object class
    {
        return super.clone();
    }
}