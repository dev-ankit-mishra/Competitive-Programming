//Problem Link-https://codeforces.com/problemset/problem/1030/A
import java.util.Scanner;

public class InSearchOfEasyProblem {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        boolean flag=false;
        for(int i=0;i<n;i++){
            int a=sc.nextInt();
            if(a==1){
                flag=true;
            }
        }
        if(flag==false){
            System.out.println("EASY");
        }
        else{
            System.out.println("HARD");
        }


    }
}
