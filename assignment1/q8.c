#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n == 0){
        return o;
    }
    if(n==1){
        printf("%d\n",a);
        return 0;
    }
    printf("%d %d ", a, b);
    for(i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;

}
