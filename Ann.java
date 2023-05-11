import java.awt.*;
import java.awt.event.*;

class Ann 
{
    public static void main(String Arg[])
    {
        Frame fobj=new Frame("Amit");
        fobj.setSize(500,500);
        fobj.setVisible(true);
        Button bobj=new Button("Button");
        fobj.add(bobj);

        bobj.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent aobj)
            {
                System.out.println("Button pressed");
            }
        });

        
    }
}