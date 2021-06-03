package app;

public class App {
    public static void main(final String[] args) throws Exception {
        final Romote obj = new Tevelision();
        final Romote obj1 = new projector();
        obj.volumUp();
        obj.volumDown();
        obj.powerOn();
        obj.powerOff();
        obj1.volumUp();
        obj1.volumDown();
         
        System.out.println(obj + "\n\n\n");
    }
}

