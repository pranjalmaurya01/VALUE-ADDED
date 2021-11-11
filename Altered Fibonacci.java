import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);  
        int loop= sc.nextInt();  
        for(int i=0;i<loop;i++){
            
            int first = sc.nextInt();
            int second = sc.nextInt();
            int count = 0;
            
            while(second-first!=0){
                int third = Math.abs(second-first);
                ++count;
                first = Math.abs(second);
                second = Math.abs(third);
            }
            System.out.println(count+1);
        }
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}
