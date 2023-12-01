#include<stdio.h>
#include<stdlib.h>
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
void swapArrays(int *a, int *a1, int n) {
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = a1[i];
        a1[i] = temp;
    }
}
void printArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void reverse(int *a,int n){
	for (int i=0;i<n/2;i++){
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	} 
}
void showArr(int a[],int length){
	for(short i=0;i<length;i++){
		printf("%d",a[i]);

	}
	printf("\n");
}

int main(){
	int a[100]; 
	int a1[]={6,7,8,9,10};
	int n; 
	int *pointerArr = a;
	char *ptr = a;
	char searchChar;
	do{
		printf("1.Nhap vao mang\n");
		printf("2.In ra mang\n");
		printf("3.Sao chep mang vao mang khac\n");
		printf("4.Nhap vao mang khac,doi cho 2 mang voi nhau\n");
		printf("5.Dao nguoc mang\n");
		printf("6.Nhap vao mot ky tu , tim kiem ky tu do trong mang\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong phan tu n = ");
				do{
					scanf("%d",&n);
					if(n<=0){
						printf("Nhap lai n =");
					}
				}while(n<=0);
				nhapMang(a,n);
				break;
			case 2:
				printf("\nMang vua nhap la:");
				xuatMang(a,n);
				printf("\n"); 
				break;
			case 3:
				for(int i=0;i<n;i++){
					printf(" a[%d] = %d   ,  a[%d] = %d\n",i,a[i],i,*(pointerArr+i));
				}
				break;
			case 4:

			    printf("Mang 1 truoc khi dao nguoc: ");
			    printArray(a, n);
			
			    printf("Mang 2 truoc khi dao nguoc: ");
			    printArray(a1, n);
			
			    swapArrays(a, a1, n);
			
			    printf("Mang 1 sau khi doi cho: ");
			    printArray(a, n);
			
			    printf("Mang 2 sau khi doi cho: ");
			    printArray(a1, n);
			
				break;
			case 5:
				printf("Mang truoc khi dao nguoc la:");
				showArr(a,n);
				reverse(a,n);
				printf("Mang sau khi dao nguoc la:");
				showArr(a,n);
			
				break;
			case 6:
			
			    printf("Nhap vao phan tu can tim kiem: ");
			    scanf(" %s", &searchChar);
			    while (*ptr != '\0') {
			        if (*ptr == searchChar) {
			            printf("Phan tu '%s' duoc tim thay.\n", searchChar);
			            break;
			        }
		
			        ptr++;
			    }
			    if (*ptr == '\0') {
			        printf("Phan tu '%s' khong duoc tim thay trong mang.\n", searchChar);
			    }

			case 7:
				exit(0);
			default:
				printf("Vui long nhap tu 1-7");
		
				
			 
		} 
	}while(1==1);
	
} 
