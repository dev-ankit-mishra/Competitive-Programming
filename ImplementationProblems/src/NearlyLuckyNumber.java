//Problem Link-https://codeforces.com/contest/110/problem/A
import java.util.Scanner;

public class NearlyLuckyNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long a= sc.nextLong();
        int count=0;
        while(a>0){
            if(a%10==4 || a%10==7){
                count++;
            }
            a=a/10;
        }
        if(count%10==7 || count%10==4){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
