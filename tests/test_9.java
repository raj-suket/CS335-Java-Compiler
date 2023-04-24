public class append{
    int main()
    {
        int arr[] = new int[5];
        arr[0] = 5;
        arr[1] = 3;
        arr[2] = 1;
        arr[3] = 2;
        arr[4] = 4;
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(arr[j]<arr[i])
                {
                    int temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        int y = arr[4];
        return 0;
    }
}