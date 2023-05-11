class String2
{
    public static void main(String Arg[])
    {
        String str1="Hello";
        String str2=new String("Hello");

        // if(str1 == str2)
        // {
        //     System.out.println("String are same");
        // }
        // else
        // {
        //     System.out.println("String are not same");
        // }

        if(str1.equals(str2))
        {
            System.out.println("String are same");      
        }
        else
        {
            System.out.println("String are not same");          
        }
    }
}