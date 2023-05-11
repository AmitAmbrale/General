import java.util.*;
class Array
{
    public static void main(String arg[])
    {
        int Arr[][]=new int[2][];

        Arr[0]=new int[2];
        Arr[1]=new int[3];

        Arr[0][0]=10;
        Arr[0][1]=20;

        Arr[1][0]=30;
        Arr[1][1]=40;
        Arr[1][2]=50;

        System.out.println(Arr[1][2]);
    }
}