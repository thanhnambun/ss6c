#include <stdio.h>
int main(){
	int n;
	1<=n<=9;
	printf("nhap n = ");
	scanf("%d",&n); 
	printf("bang cuu chuong %d \n ",n);
	for(int a=1 ; a<11 ;a++){
	printf("\t %d*%d=%d\n",a,n,a*n); 
	}
} 
