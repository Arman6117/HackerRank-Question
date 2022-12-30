#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    
    int p;
    int a = 1;
    int b;
    int mand=0;
    int mor=0;
    int mxor=0;
    
    for(a=1;a<=n;a++)
    {
        b = 0;
        for (b=a+1; b<= n;b++){
        if ( (mand < (a&b)) && (mand < k))
        {
            if ((a&b) < k)
            mand=a&b;
           // printf("%d -- ", mand);
        }
        if (mor < (a|b) && (mor < k))
        {
            if ((a|b) < k)
            mor = a|b;
        }
        if (mxor < (a^b) && (mxor < k))
        {
            if ((a^b) < k)
            mxor = a^b;
        }
        }
        
       
    }
  
        printf("%d \n", mand);
        printf("%d \n", mor);
        printf("%d \n", mxor);
        
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}