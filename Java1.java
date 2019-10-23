class Name
{
    byte a = 100;
    final int b = 10000; // 常量
    boolean c = true;
    char d = '\u0001';
    enum e { A, B, C } // 枚举
    e f;
    String g = "\u0001";
    float h = (float) a; // 强转

    public static double i; // static 只有一份拷贝
    private static final String j = "12345";

    protected void func()
    {
        System.out.println("Hello Func!");
    }
    /* protected 可访问同一包中的任何其他类。不能修饰类、接口成员变量及成员方法 */

    public synchronized void func2()
    {
        //....
    }
    // synchronized 同一时间只能被一个线程访问

    public void func3(String... k)
    {
        this.a++; // java 中有自增自减
        int[] m = {2, 3, 6, 7, 8};

        while(true) { break; }
        for(int n = 0 ; n < 12 ; n++)
        {
            System.out.println("for");
        }
        for(int o, m)
        {
            System.out.print(o); // output: 23678
        }
        for(int p = 0 ; p < k.length ; p++)
        {
            System.out.print(p);
        }

        /*
        if(){}
        else if(){}

        switch(){
        case :
            break;
        case :
            break;
        default:
        }
        */

        Character ch = new Character('a');
        StringBuffer sBuffer = new StringBuffer("12");
    }

    public static void main(String arg[]) // 主函数
    {
        Name q = new Name();
        q.a = 5;
        q.func3({"abc", "def"});
    }
}