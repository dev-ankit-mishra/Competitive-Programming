//Problem Link-https://codeforces.com/contest/723/problem/A

import java.util.Scanner;

public class MinimumPath {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int max=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;
        int[] arr=new int[3];

        for(int i=0;i<3;i++){
            int a=sc.nextInt();
            arr[i]=a;
            if(i==0){
                max=a;
                min=a;
            }
            if(i==1){
                max=Math.max(max,a);
                min=Math.min(min,a);
            }
            if(i==2){
                max=Math.max(max,a);
                min=Math.min(min,a);
            }
        }
        int mid=0;
        int sum=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=max && arr[i]!=min){
                mid=arr[i];
            }
        }
        for(int i=0;i<arr.length;i++){
            sum+=Math.abs(arr[i]-mid);
        }
        System.out.println(sum);

    }
}
