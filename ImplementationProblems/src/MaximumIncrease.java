//Problem Link-https://codeforces.com/contest/702/problem/A

import java.util.Scanner;

public class MaximumIncrease {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            int a= sc.nextInt();
            arr[i]=a;
        }
        int max=0;
        int count=0;

        int j=1;
        while(j!=arr.length){
            if(arr[j-1]<arr[j]){
                count++;
            }
            else{
                max=Math.max(max,count);
                count=0;

            }
            j++;
        }
        max=Math.max(max,count);
        System.out.println(max+1);




    }
}
