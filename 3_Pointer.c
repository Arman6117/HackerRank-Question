#include <stdio.h>

void update(int *a,int *b) {
   int n, n2;
   n = *a + *b;
   n2 = *a - *b;
   *a = n;
   *b = abs(n2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}