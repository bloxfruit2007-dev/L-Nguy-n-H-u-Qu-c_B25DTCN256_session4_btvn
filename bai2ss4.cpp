#include <stdio.h>
int main(){
	int number;
	printf("moi ban nhap so vao day:");
	scanf("%d",&number);
	if(number % 2==0){
		printf("so vua nhap la so chan");
	} else{
		printf("so vua nhap la so le" );
	}
	return 0;
}
