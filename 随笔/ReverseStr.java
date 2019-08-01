public class ReverseStr{
    public static void main(String[] args) {
        String str = "abcd";
        StringBuffer stringBuffer = new StringBuffer(str);
        String strR = stringBuffer.reverse().toString();
        System.out.println(strR);
    }
}