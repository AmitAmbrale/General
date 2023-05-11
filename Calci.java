import java.awt.*;
import java.awt.event.*;

class Calci
{
    public static void main(String Arg[])
    {
        MarvellousCalci mobj=new MarvellousCalci("Calculator",500,500);
    }
}

class MarvellousCalci extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button b1,b2,b3,b4,b5,b6;
    public TextField t1,t2;
    public Label lobj;
    public float No1,No2;

    public MarvellousCalci(String heading,int width,int height)
    {
        // Creating object and giving name
        fobj=new Frame(heading);
        b1=new Button("+");
        b2=new Button("-");
        b3=new Button("*");
        b4=new Button("/");
        b5=new Button("Max");
        b6=new Button("Min");
        t1=new TextField();
        t2=new TextField();

        //Setting frame size [window size]
        fobj.setSize(width,height);
        fobj.addWindowListener(this);

        //Setting frame size [window size]
        fobj.setSize(width,height);
        fobj.addWindowListener(this);

        //Giving the size for the buttons
      //b1.setBounds(X cord,Y cord,width,height);
        b1.setBounds(10,280,80,40);
        b2.setBounds(100,280,80,40);
        b3.setBounds(190,280,80,40);
        b4.setBounds(290,280,80,40);
        b5.setBounds(100,230,80,40);
        b6.setBounds(190,230,80,40);

        //Setting the size for the text fields
        t1.setBounds(70,100,100,40);
        t2.setBounds(220,100,100,40);

      //Adding the buttons on the frame
        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(b5);
        fobj.add(b6);
       
        fobj.add(t1);
        fobj.add(t2);

        lobj=new Label();
        lobj.setBounds(150,25,200,100);
        fobj.add(lobj);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);


        fobj.setLayout(null);
        fobj.setVisible(true);
    }
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent aobj)
    {
            No1=Float.parseFloat(t1.getText());
            No2=Float.parseFloat(t2.getText());

            if(aobj.getSource()==b1)
            {
                lobj.setText("Addition is : " + (No1+No2));
            }
            else if(aobj.getSource()==b2)
            {
                lobj.setText("Subtraction is : " + (No1-No2));
            }
            else if(aobj.getSource()==b3)
            {
                lobj.setText("Multiplication is : " + (No1*No2));
            }
            else if(aobj.getSource()==b4)
            {
                lobj.setText("Division is : " + (No1/No2));
            }
            else if(aobj.getSource()==b5)
            {
                if(No1>No2)
                {
                    lobj.setText("Maximum is : " + No1);
                }
                else
                {
                    lobj.setText("Maximum is : "+ No2);
                }
            }
            else if(aobj.getSource()==b6)
            {
                if(No1<No2)
                {
                    lobj.setText("Minimum is : " + No1);
                }
                else
                {
                    lobj.setText("Mininum is : "+ No2);
                }
            }
    }
}