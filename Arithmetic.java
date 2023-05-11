package Amit;

public class Arithmetic
{
    public int i,j;
    public Arithmetic(int A,int B)
    {
        this.i=A;
        this.j=B;
    }
    public int Add()
    {
        return i+j;
    }
    public int Sub()
    {
        return i-j;
    }
    public int Mul()
    {
        return i*j;
    }
    public int Div()
    {
        return i/j;
    }
}