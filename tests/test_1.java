public class append{
 
    public static void app(String s1){
        int m = s1.length();
        String ss1 = new String();
       
        for(int i =0; i<=m/2; i++){
         if((s1.charAt(i) != s1.charAt(m-i-1))){
            continue;
        }
        else if(s1.charAt(i) == s1.charAt(m-1-i)){
             ss1 = s1.substring(i, m-i);
             break;
        }
        }
 
        if(ss1.length() !=0){
            System.out.println(ss1.length());
        }else{
            System.out.println("0");
        }
        
                    
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            t--;
        
            int n = sc.nextInt(); 
            String s = sc.next();
            app(s);
        }
    }
}