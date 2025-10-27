#include <stdio.h>
int main(){
	int n;
	printf("moi ban nhap thang vao day:");
	scanf("%d",&n);
	switch(n){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("thang do co 31 ngay\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("thang do co 30 ngay\n");
			break;
		case 2:
			printf("thang do co 28 hoac 29 ngay\n");
			break;
		default:
			printf("thang khong hop le\n");
			
			
	}
	return 0;
}
