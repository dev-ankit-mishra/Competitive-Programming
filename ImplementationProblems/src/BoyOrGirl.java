//Problem Link-https://codeforces.com/contest/236/problem/A

import java.util.Scanner;

public class BoyOrGirl {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int count=0;
        boolean flag=false;
        for(int i=0;i<s.length();i++){
            flag=false;
            for(int j=i+1;j<s.length();j++){
                if(s.charAt(i)==s.charAt(j)) {
                    flag = true;
                    break;
                }

            }
            if(flag==false){
                count++;
            }
        }
        if(count%2==0){
            System.out.println("CHAT WITH HER!");
        }else{
            System.out.println("IGNORE HIM!");
        }

    }
}
