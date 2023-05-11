package Amit.Arithmetic;

public class Increment
{
    public int i,j;
    public Increment(int A,int B)
    {
        this.i=A;
        this.j=B;
    }
    public void Ince()
    {
        System.out.println("Increment is : " + i++);
        System.out.println("Increment is : " + j++);
    }
}