import java.util.Scanner;

public class largest{

public static void main(String[] args) {

    Scanner obj=new Scanner(System.in);
    System.out.println("Enter the number: ");

    int a=obj.nextInt();
    int b=obj.nextInt();
    int c=obj.nextInt();

    if(a>b && a>c){
        System.out.println("A is bigger"+a);
    }

    else if(b>a && b>c){
        System.out.println("B is bigger"+b);
    }

    else{
        System.out.println("C is bigger"+c);
    }
    
}


}