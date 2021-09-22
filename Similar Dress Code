import java.io.*;
import java.util.*;
import java.util.Arrays;

public class Solution {
    public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);     
        int testCases = sc.nextInt();
            String[] array = new String[testCases];
                 sc.nextLine();
        for(int i=0;i<testCases;i++){
            array[i] = sc.nextLine();
        }

        for(int i=0;i<testCases;i++){
            int counti=0;int countj=0;

        char[] ch = array[i].toCharArray();
           for (char c : ch) {
                if(c=='0'){
                    ++counti;
                }else
                    ++countj;
           }
            if(counti<countj){
                System.out.println(counti);
            }else
                System.out.println(countj);
        }
        
    }
}
