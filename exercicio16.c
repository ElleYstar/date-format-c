#include <stdio.h>
int main() {
    int D, M, A;
    scanf("%d/%d/%d", &D, &M, &A);
    
    printf("%d-%d-%d\n", D, M, A);
    printf("%d-%d-%d\n", M, D, A);
    printf("%d/%d/%d\n", A, M, D);
    
}