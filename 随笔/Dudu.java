/*************************************************************************
	> File Name: Dudu.java
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 24 14:26:15 2019
 ************************************************************************/
import java.util.*;
public class Dudu{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = 0;
        n = sc.nextInt();
        ArrayList<Integer> nums = new ArrayList<Integer>();
        Map<Integer,Integer> map = new HashMap<>();
        
        for(int i = 0;i < n;i++){
            int temp = sc.nextInt();
            nums.add(temp);
            map.put(temp,i);
        }
        int flag = n;
        int count = 0;
        Collections.sort(nums);
        
        for(int i = 0;i < n - 1;i++){
            if(map.get(nums.get(i)) > map.get(nums.get(i+1))){
                map.put(nums.get(i+1),map.size() + flag);
                count ++;
                flag ++;
            }
        }

        System.out.println(count);


        sc.close();
    }
}
