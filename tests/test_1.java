public class append{
    int calculate(int a, int b)
    {
        int mod = 1000000007;
        int y = a*a%mod + b*b%mod + 2*a*b%mod;
        int z = y%mod;
        return z;
    }
    int main()
    {
        int x = calculate(4,50);
        return 0;
    }
}
