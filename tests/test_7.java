public class test_7 {
    int linear_search(int n)
    {
        for(int i=0;i<n;i++)
        {
            if(i == 4)
            {
                return 1;
            }
        }
        return 0;
    }
    int main()
    {
        int ans = linear_search(5);
        return 0;
    }
}   
