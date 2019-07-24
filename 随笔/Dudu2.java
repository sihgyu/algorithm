/*************************************************************************
	> File Name: Dudu.java
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 24 14:26:15 2019
 ************************************************************************/
import java.util.*;
public class Dudu2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = 0;
        n = sc.nextInt();
        int[] nums = new int[n];
        for(int i = 0;i < n;i++){
            nums[i] = sc.nextInt();
        }
        int[] sortnums = nums.clone();
        Arrays.sort(sortnums);
        int num = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] == sortnums[num]){
                num ++;
            }
        }
        System.out.println(n-num);
        sc.close();
    }
}
