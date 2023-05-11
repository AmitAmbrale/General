class Generic1
{
    public static void main(String Arg[])
    {
        Integer Arr[]={10,20,30};
        Addition(Arr);
    }
    public static <A> void Addition(A Arr[])
    {
        for(A no : Arr)
        {
            System.out.println(no);
        }
    }
}