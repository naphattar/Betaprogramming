package codecube;
import java.util.Scanner;
public class AxB{
    public static void main(String[] args){
        Scanner kb = new Scanner(System.in);
        long a,b;
        a = kb.nextInt();
        b = kb.nextInt();
        kb.close();
        System.out.print(a*b);
    }
}