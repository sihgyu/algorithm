/***
    面试题--> 下面代码会输出什么
 */

public class StaticTest extends Base{
    static{
        System.out.println("StaticTest static");
    }
    public StaticTest(){
        System.out.println("StaticTest constructor");
    }
    public static void main(String[] args){
        new StaticTest();
    }
}

class Base{
    static{
        System.out.println("Base static");
    }

    public Base(){
        System.out.println("base constructor");
    }

}


out:
Base static
StaticTest static
base constructor
StaticTest constructor

分析：
程序开始执行后会首先寻找main方法，但是在执行main方法之前首先需要加载StaticTest类，
在加载StaticTest类的时候会发现这个类继承自Base，所以会先去加载Base类，这个时候发现Base中有static块，
执行staic块，当Base加载完成后会回到StaticTest类加载，发现StaticTest类中也有静态块，执行，在加载所有类后开始执行main方法，
在执行new StaticTest()时，会先调用父类的构造器，然后再调用自身的构造器。

