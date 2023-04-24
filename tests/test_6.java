public class test_6 {
    int factorial(int n)
    {
        if(n==0)
        {
            return 1;
        }
        if(n==1)
        {
            return 1;
        }
        int z = n-1;
        int y = n*factorial(z);
        return y;
    }
    int main()
    {
        int fact = factorial(5);
        return 0;
    }
}
