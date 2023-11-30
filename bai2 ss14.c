#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap gia tri cho bien a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cho bien b: ");
    scanf("%d", &b);
    printf("Gia tri truoc khi doi cho:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int *ptrA, *ptrB, temp;
    ptrA = &a;
    ptrB = &b;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("Gia tri sau khi doi cho:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int diffTrc = a - b;
    int diffSau = *ptrA - *ptrB;
    printf("Hieu truoc khi doi cho: %d\n", diffTrc);
    printf("Hieu sau khi doi cho: %d\n", diffSau);
    return 0;
}