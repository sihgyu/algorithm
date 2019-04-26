public class StaticTest2 {
    Person person = new Person("Test");
    static{
        System.out.println("test static");
    }
     
    public StaticTest2() {
        System.out.println("test constructor");
    }
     
    public static void main(String[] args) {
        new MyClass();
    }
}
 
class Person{
    static{
        System.out.println("person static");
    }
    public Person(String str) {
        System.out.println("person "+str);
    }
}
 
 
class MyClass extends StaticTest2 {
    Person person = new Person("MyClass");
    static{
        System.out.println("myclass static");
    }
     
    public MyClass() {
        System.out.println("myclass constructor");
    }
}

out:
test static
myclass static
person static
person Test
test constructor
person MyClass
myclass constructor

分析：
同样的，首先寻找main方法，发现main方法在StaticTest2中，那么就需要加载StaticTest2，
遇到static块就执行，加载之后执行main方法中的new MyClass()，因为MyClass类还没有被加载过因此加载MyClass类，
因为MyClass类继承自StaticTest2，但是因为StaicTest类已经加载过了所以不许要加载，所以就执行MyClass中的static块，
加载完成后则会通过构造器来生成对象，但是在生成对象的时候必须先初始化父类的成员变量，所以会执行StaticTest2中的Person person = new Person("test");
Person类没有被加载过，接着加载Person类执行静态方法，加载后执行构造器生成person方法，接着执行父类的构造方法完成父类的初始化，然后就能初始化自身了