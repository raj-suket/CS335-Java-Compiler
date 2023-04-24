public class test_8 {
    int expo(int a, int b)
    {
        long res = 1;
        while(b>0)
        {
            if(b&1)
            {
                res = res*a;
            }
            a = a*a;
            b=b/2;
        }
        return res;
    }
    int main()    
    {
        long xp = expo(2,3);
        return 0;
    }
}
