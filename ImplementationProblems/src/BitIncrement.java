import java.util.Scanner;

public class BitIncrement {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int x=0;
    for(int i=0;i<n;i++){
        String str=sc.next();
        if(str.contains("++")){
            x++;
        }else if(str.contains("--")){
            x--;
        }
    }
    System.out.println(x);
}
}