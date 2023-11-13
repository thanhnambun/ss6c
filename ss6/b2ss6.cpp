#include <stdio.h>
int main(){
	do {
	int a, b, c;
	printf("CACULATOR\n");
	printf("1. Tong 2 so \n");
	printf("2. Hieu 2 so \n");
	printf("3. tich 2 so \n");
	printf("4. Thuong 2 so \n");
	printf("5. So du trong phep chia 2 so \n");
	printf("6. Uoc chung lon nhat \n");
	printf("7. Boi chung nho nhat \n");
	printf("8. Thoat \n");
	switch (c){
		case 1 :
		printf("tong 2 so la %d \n",a+b);
		break;
		case 2 :
		printf("hieu 2 so la %d \n",a-b);
		break;
		case 3 :
		printf("tich 2 so la %d \n",a*b);
		break;
		case 4 :
		printf("thuong 2 so la %d \n",a/b);
		break;
		case 5 :
		printf("So du trong phep chia 2 so la %d \n",a%b);
		break;
		case 6 :
		for (int e=1; e<=a ||e<=b;e++) {
				if(a%e==0 && b%e==0){
		 		printf("Uoc chung lon nhat 2 so la %d \n",e);
				 scanf("%d",e); 
				} 
 			}
		break;
		case 7 :
		printf("Boi chung nho nhat 2 so la %f \n", (a*b)/e);
		break;
		case 8 :
		printf("thoat");
		break;
		default : printf("lua chon khong hop le "); 
		}	
	}while{c!=8);
	return 0; 
	};
}
} 
