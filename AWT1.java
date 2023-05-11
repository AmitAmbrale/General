import java.awt.*;
import java.awt.event.*;

class AWT1 extends WindowAdapter
{
    public static void main(String Arg[])
    {
        Marvellous mobj=new Marvellous("Amit");
    }
}
class Marvellous extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button b1,b2,b3,b4;
    public TextField t1,t2;
    public Label lobj;
    public float No1=0,No2=0;

    public Marvellous(String str)
    {

        fobj=new Frame(str);
        b1=new Button("Add");
        b2=new Button("Sub");
        b3=new Button("Mul");
        b4=new Button("Div");
        t1=new TextField();
        t2=new TextField();
        lobj=new Label();

        b1.setBounds(10,280,80,40);
        b2.setBounds(100,280,80,40);
        b3.setBounds(190,280,80,40);
        b4.setBounds(290,280,80,40);
        t1.setBounds(70,100,100,40);
        t2.setBounds(220,100,100,40);
        lobj.setBounds(150,25,200,100);

        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(t1);
        fobj.add(t2);
        fobj.add(lobj);


        fobj.addWindowListener(this);

        // b1.addActionListener(this);
        // b2.addActionListener(this);
        // b3.addActionListener(this);
        // b4.addActionListener(this);

        fobj.setLayout(null);
        fobj.setVisible(true);
    }
    public void windowClosing(WindowEvent eobj)
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent aobj)
    {
        No1=Integer.parseInt(t1.getText());
        No2=Integer.parseInt(t2.getText());

        try
        {
        if(aobj.getSource() == b1)
        {
            lobj.setText("Addition is : " + (No1+No2));
        }
        else if(aobj.getSource() == b1)
        {
            lobj.setText("Subtraction is : " + (No1-No2));
        }
        else if(aobj.getSource() == b1)
        {
            lobj.setText("Multiplication is : " + (No1*No2));
        }
        else if(aobj.getSource() == b1)
        {
            lobj.setText("Division is : " + (No1/No2));
        }
        }
        catch(ArithmeticException a)
        {
        }

    }
}
 