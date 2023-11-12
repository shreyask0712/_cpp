import java.util.concurrent.Semaphore;
public class SemaphoreDemo {
    Semaphore bonarySema= new Semaphore(1);

    public static void main( String args[]){
        final SemaphoreDemo semaDemoObj= new SemaphoreDemo();
        Thread tdl =new Thread(){
            public void run(){
                semaDemoObj.testMutualExclusion();
            }
        };
        Thread td2 = new Thread(){
            @Override
            public void run(){
                semaDemoObj.testMutualExclusion();
            }
        };
        td1.start();
        td2.start();
    }
    private void testMutualExclusion(){
        try{
            binarySema.acquire();
            System.out.println(Thread.currentThread().getName()+" inside the region of mutual exclusive.");
            Thread.sleep(1000);
        }catch (InterruptedException ie){
            ie.printStackTrace();
        }finally {
            System.out.println(Thread.currentThread().getName()+"outside the region of mutual exclusive");
        }
    }
}