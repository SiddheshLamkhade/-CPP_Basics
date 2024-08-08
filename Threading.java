class One extends Thread
{
    public void run()
    {
        int i=0;
        while(i<100)
        {
        System.out.println("I am in class One ....");
        i++;
        }
    }
}
class Two extends Thread
{
    public void run()
    {   int k=0;
        while(k<100)
        {
        System.out.println("I am in class Two");
        k++;
        }
    }
}


public class Threading 
{
    public static void main(String args[])
    {
        One t1=new One();
        Two t2=new Two();
        t1.start();
        t2.start();
    }
}
