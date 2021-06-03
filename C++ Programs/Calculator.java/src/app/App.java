package app;


public class App {
    public static void main(final String[] args) throws Exception {
       String[] words = {"funk", "chunk", "furry","trunk"};
       for(String wor: words)
       {
           if(wor.startsWith("fu"))
           {
         System.out.println(wor + "start with fu");
           }
           if(wor.endsWith("unk"))
           {
               System.out.println(wor + " end with unk");
           }
       }

    }
}