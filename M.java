class M
{
    public static void main(String Arg[]) throws Throwable
    {   
        Thread t1=Thread.currentThread();
        System.out.println(t1.getName());
        System.out.println(t1.getPriority());

    }
}
