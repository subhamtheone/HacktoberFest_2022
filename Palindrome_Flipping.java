/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        try{
            Scanner sc = new Scanner(System.in);
            int T,N,i,j,m,n;
            T=sc.nextInt();
            for(i=0;i<T;i++){
                N=sc.nextInt();
                String S=sc.next();
                m=0;
                n=0;
                for( j=0;j<N;j++){
                    if(S.charAt(j)=='1')
                        m++;
                    else
                        n++;
                }
                if((N%2==0)&&(m%2==0)&&(n%2==0))
                    System.out.println("YES");
                else if((N%2==0)&&((m%2!=0)||(n%2!=0)))
                    System.out.println("NO");
                else if(N%2!=0)
                    System.out.println("YES");
            }
        }
        catch(Exception e){

        }
    }
}
