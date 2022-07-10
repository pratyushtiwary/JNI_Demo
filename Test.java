class Test{
    
    static { 
        System.setProperty("java.library.path", "./");
        System.loadLibrary("CalcUtils"); 
    }

    public native static int getFactorial(int n);

    public static void main(String[] args) {
        System.out.println(Test.getFactorial(5));
    }

    
}