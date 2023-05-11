import java.awt.*;
import java.awt.event.*;

class AWT 
{
    public static void main(String Arg[])
    {
        Demo dobj=new Demo("Amit",400,400);
    }
}
class Demo extends WindowAdapter //implements ActionListener
{
    public Frame fobj;
    public Button b1,b2,b3,b4;
    public TextField t1,t2;
    public Label lobj;

    public Demo(String str,int width,int height)
    {
        fobj=new Frame(str);
        fobj.setSize(width,height);
        fobj.addWindowListener(this);

        b1=new Button("Add");
        b2=new Button("Sub");
        b3=new Button("Mul");
        b4=new Button("Div");
        t1=new TextField();
        t2=new TextField();

        b1.setBounds(100,200,100,50);
        fobj.add(b1);

        t1.setBounds(200,100,100,50);
        fobj.add(t1);

        fobj.setVisible(true);

    }

    public void windowClosing(WindowEvent eobj)
        {
            System.exit(0);
        }
}