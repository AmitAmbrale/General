import java.util.*;
import java.awt.*;
import java.awt.event.*;
class GUI2
{
    public static void main(String Arg[])
    {
        //We are going to take input from the user  
        //by Non-Buffered input mechanism i.e. Scanner class
        Scanner sobj=new Scanner(System.in);

        //Taking header/title for the graphical window
        String Head=new String();
        System.out.println("Enter the name of the Frame : ");
        Head=sobj.nextLine();

        //Taking width and height of the frame (boundarys)
        int Width=0,Height=0;
        System.out.println("Enter the width of the frame : ");
        Width=sobj.nextInt();
        System.out.println("Enter the height of the frame : ");
        Height=sobj.nextInt();

        //Logic for creating the graphical is in the marvellous class
        //which inherits the Window adapter class and implements the 
        //ActionListener interface 
        //parametrised constructor will get called automatically 
        //from the marvellous class
        Marvellous mobj=new Marvellous(Head,Width,Height);
        
    }
}
class Marvellous extends WindowAdapter implements ActionListener
{
    //Craeting the reference of the Frame class from awt pacakge
    public Frame fobj;

    // Creating the references of the Button class from awt pacakge
    // Buttons will come on the window
    public Button b1,b2,b3,b4,b5;

    //TextField is used to give input from the window
    public TextField t1,t2;

    // Label is used to display o/p or string on the window
    public Label lobj;

    //local variables
    public Integer No1,No2;
    //Parametrised constructor 
    public Marvellous(String Head,int Width,int Height)
    {
        //Creating object of the Frame class
        fobj=new Frame(Head);

        //Setting the size of the Frame using setSize method 
        fobj.setSize(Width,Height);

        //The addWindowListener will get automatically called if there is any 
        //event performed on the frame
        //this is a keyword which tells its own object[sotache object]
        fobj.addWindowListener(this);

        // Creating the objects of the Button class
        // Parametrised constructor from the Button class will get called automatically 
        b1=new Button("Add");
        b2=new Button("Sub");
        b3=new Button("Mul");
        b4=new Button("Div");
        b5=new Button("hii");
        t1=new TextField();
        t2=new TextField();
        lobj=new Label();


        //The setBounds method is used to give the positioning to the 
        // interactive components
        //Where the format is setBounds(X axis,Y axis,width,height);
        b1.setBounds(10,280,80,40);
        b2.setBounds(100,280,80,40);
        b3.setBounds(190,280,80,40);
        b4.setBounds(290,280,80,40);
        t1.setBounds(70,100,100,40);
        t2.setBounds(220,100,100,40);
        lobj.setBounds(70,25,300,100);

        //By using the add() method we add the components on the Frame
        // the components to be added on the frame should be positioned
        //first and then added 
        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(t1);
        fobj.add(t2);
        fobj.add(lobj);

        // If we click on the Butttons the addActionListener will get called
        //automatically and by using this keyword the control will be 
        //transferred towards the actionPerformed method from the ActionListener
        //interface which is implemented by the Marvellous class
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        //Dont set any layout on the window
        fobj.setLayout(null);

        //When the frame is craeted it is on the RAM to show it on the 
        //screen we have to tell explicitly by usibg the setVisible() method
        //which passes a true or false i.e. a boolean value
        fobj.setVisible(true);
    }
    //If the user will perform action on the window then addWindoeListener
    //method will get called and the control will be passed to the windowClosing
    //method from the WindowAdapter class and the message sent by the JVM will 
    //stored in the Reference(eobj) of the WindowEvent class
    //the window will be closed by using this method 
    public void windowClosing(WindowEvent eobj)
    {
        //the System.exit(0) tells that terminate the program successfully
        //here 0 indicates the success 
        System.exit(0);

        //Without using above method we can close the window by using the 
        //command Ctrl+C [the window will get abnormally terminated]
    }

    //actionPerformed method is abstract method from the ActionListener
    //interface this method gets called if there is any event occurred
    //on the buttons and the details of the event are stored in the reference(aobj) 
    //of ActionEvent class 
    public void actionPerformed(ActionEvent aobj)
    {
        //When using textfield we will take input from the user it will be
        //in String form so to convert it into integer we use 
        //Integer.parseInt 
        //By using the getText() method we fetch input from TextFiled and
        //store it in thr variable No1 
        No1=Integer.parseInt(t1.getText());
        No2=Integer.parseInt(t2.getText());

        //Here we call the getSource() method by using the aobj [contains
        // the information about the event] the compiler will dectect automatically which 
        //which button is called and will check the condition and if true enter in the if statement 
        try//For division
        {
        if(aobj.getSource() == b1)
        {
            //setText( ) method will set the given parameter in the label positioned on the frame
            lobj.setText("Addition is : " + (No1+No2));
        }
        else if(aobj.getSource() == b2)
        {
            lobj.setText("Subtraction is : " + (No1-No2));
        }
        else if(aobj.getSource() == b3)
        {
            lobj.setText("Multiplication is : " + (No1*No2));
        }
        else if(aobj.getSource() == b4)
        {
            lobj.setText("Division is : " + (No1/No2));
        }
        }
        catch(Throwable cobj)//Used MSD catch block (Generic catch block)
        {
            lobj.setText("Exception occurred : " + cobj);
        }
    }
}