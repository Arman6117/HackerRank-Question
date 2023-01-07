#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,i,sum = 0;
  scanf("%d", &n);

  int num[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d",&num[i]);
  }
  for (int i = 0; i < n; i++)
  {
    sum = sum + num[i];
  }

  printf("%d", sum);
  
  
     
    return 0;
}