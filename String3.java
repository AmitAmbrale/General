class String3
{
    public static void main(String Arg[])
    {
        String str1="Amit";
        String str2=new String("Amit");

        if(str1.equals(str2))
        {
            System.out.println("Strings are same");
        }
        else
        {
            System.out.println("Strings are not same");
        }
    }
}