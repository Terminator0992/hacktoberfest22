/*String program 5
 *Swapping two strings without using a 3rd variable */
import java.util.Scanner;
class Swap_String
 {
   public static void abc()
    {
      Scanner sc= new Scanner(System.in);
      System.out.println("Enter the 1st string");
      String a=sc.next();
      int l=a.length();
      System.out.println("Enter the 2nd string");
      String b=sc.next();
      a=a+b;
      b=a.substring(0,l);
      a=a.substring(l);
      System.out.println("1st string: "+a+" & 2nd string: "+b);
    }
 }
