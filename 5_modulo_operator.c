#include <stdio.h>
#include <math.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int a=0;  
    while(n!=0){              
        a+=n%10;     
        n/=10;      
    }               
    printf("%d",a);
    return 0;
}