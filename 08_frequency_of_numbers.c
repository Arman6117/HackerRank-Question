#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

        int arr[10];

       for (int i = 0; i < 10; i++)

        arr[i] = 0;           // Initisiling all the elements of the array "arr" with 0

       char string[1000];  // Taking input from the user
       scanf("%s", string);    =

       for (int i = 0; i < strlen(string); i++)
       {
         if ((string[i]>= '0') && (string[i]<= '9'))   //
         {
            arr[string[i]-'0']++;
         }

       }
       for (int i = 0; i < 10; i++)

        printf("%d ",arr[i]);

   
    return 0;
}
