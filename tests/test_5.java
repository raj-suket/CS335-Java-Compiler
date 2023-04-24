public class test_5 {
    int binary_search(int n, int key){
        int l = 1, r = n;
        while(l <= r){
            int mid = l + r;
            mid = mid / 2;

            if(mid == key){
                return 1;
            }else if(mid < key){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return 2;
    }
    int main(){
        int z = binary_search(50, 53);
        return 0;
    } 
}
