import java.math.BigDecimal;
import java.util.Scanner;
 
public class BigDecimalPow {
    public static void main(String [] args) {
        String r;
        int n;
        String s;
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()) {
            r = sc.next();//用String来存储，因为double和float都是不能准确的表示小数的，都是以概述来表示的
            n = sc.nextInt();
            BigDecimal d = new BigDecimal(r);
            BigDecimal ans = new BigDecimal(r);
            for(int i =1;i<n;i++) {
                ans = ans.multiply(d);
            }
            s = ans.stripTrailingZeros().toPlainString();//去除不必要的零，转换为字符串，防止科学计数法
            System.out.println(s);
            sc.close();
        }
    }
}