public class best{
    int main(){
        int foundfor = 0;
        for(int i=0;i<100;i++)
        {
            if(i==50)
            {
                foundfor =1;
                break;
            }
        }
        int foundwhile=0;
        int x = 0;
        while(1)
        {
            if(x>=10)
            {
                foundwhile=1;
                break;
            }
            x++;
            if(foundwhile!=1)
            {
                continue;
            }
        }
        return 0;
    }
}