import java.util.*;

class String1
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter any String : ");
        String str=new String();
        str=sobj.nextLine();

        System.out.println("Length of the string is : "+ str.length());
    }
}