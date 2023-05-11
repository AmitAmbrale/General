class Multi7
{
    public static void main(String Arg[])
    {
        Thread t1=Thread.currentThread();

        System.out.println("Name of the current thread is : " + t1.getName());
        System.out.println("Priority of the current thread is : " + t1.getPriority());
    }
}