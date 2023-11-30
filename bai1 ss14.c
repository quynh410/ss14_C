#include <stdio.h>
int main(){
    int variable = 10;
    int *pointer = &variable;
    printf("Cach 1:\n");
    printf("Gia tri cua bien: %d\n", variable);
    printf("Dia chi cua bien: %d\n", (void*)&variable); 
    printf("Cach 2:\n");
    printf("Gia tri cua bien (su dung con tro): %d\n", *pointer);
    printf("Dia chi cua bien (su dung con tro): %d\n", (void*)pointer);
    return 0;
}
 