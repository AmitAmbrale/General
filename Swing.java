import javax.swing.*;

class Swing
{
    public static void main(String Arg[])
    {
        Marvellous mobj=new Marvellous("Amit",500,500);
    }
}
class Marvellous
{
    public Marvellous(String str,int Width,int Height)
    {
        JFrame fobj=new JFrame(str);

        fobj.setSize(Width,Height);

        fobj.setVisible(true);
    }
}