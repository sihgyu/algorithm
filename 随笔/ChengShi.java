import java.util.*;
public class ChengShi{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Long x1 = 0L,x2 = 0L,y1=0L,y2=0L; // 最大横坐标 最小横坐标 最大纵坐标 最小纵坐标
        Long x,y;
        for(int i = 0;i < n;i++){
            x = sc.nextLong();
            y = sc.nextLong();
            if(x > x1){
                x1 = x;
            }else if(x < x2){
                x2 = x;
            }else if(y > y1){
                y1 = y;
            }else if(y < y2){
                y2 = y;
            }

        }
        x = x1+Math.abs(x2);
        y = y1+Math.abs(y2);
        if(y > x){
            System.out.println(y*y);
        }else{
            System.out.println(x*x);
        }
    }
}