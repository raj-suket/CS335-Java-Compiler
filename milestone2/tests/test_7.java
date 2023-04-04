public class test_7 {
    static int linear_search(int n)
    {
        for(int i=0;i<n;i++)
        {
            if(i == n-1)
            {
                return 1;
                break;
            }
        }
        return 0;
    }
    public static void main()
    {
        int ans = linear_search(5);
    }
}   
