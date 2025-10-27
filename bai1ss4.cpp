#include <stdio.h>
int main(){
	int number;
	printf("moi ban nhap so vao day:");
	scanf("%d",&number);
	if(number>=0){
		printf("so vua nhap la so duong");
	} else{
		printf("so vua nhap la so am" );
	}
	return 0;
}
