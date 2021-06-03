package app;

import java.util.Scanner;

class Calcul
{
    static Scanner input = new Scanner(System.in);
    public static void main(String [] khan)
    {
        char condition = 'y';
    while(condition == 'y')
   { 
     
      
    System.out.println("do you want to continue: ");
    condition = input.next().charAt(0);

    if ( condition == 'y') {
       
    int operator_No = operator();
    System.out.println(operator_No);
    System.out.println("Enter the first number: ");
    int first_number = input.nextInt();
    System.out.println("Enter the second number: ");
    int second_number = input.nextInt();
    double result;
         switch(operator_No)
     {
         case 1:
         {
             result = first_number + second_number;
            System.out.println("the result is: " + result);
            break;
         }
         case 2:
         {
             result = first_number - second_number;
             System.out.println("the result is: " + result);
             break;
         }
         case 3:
         {
             result = first_number * second_number;
             System.out.println("the result is: " + result);
             break;
         }
         case 4:
         {
             result = first_number / second_number;
             System.out.println("the result is: " + result);
             break;
         }
         default:
         {
             System.out.println("You have incorrect operator Number: ");
         }

        }
    }
    else
    {
        System.out.println("you Exit the program: ");
    }
     }    
    }
 public static int operator()
    {

        System.out.println("(1) "+"*********\" + \"**********");
        System.out.println("(2) "+"*********\" - \"**********");
        System.out.println("(3) "+"*********\" x \"**********");
        System.out.println("(4) "+"*********\" / \"**********");
        System.out.println("Enter a number for operator ");
        int opert = input.nextInt();
        return opert;
    }
   
}