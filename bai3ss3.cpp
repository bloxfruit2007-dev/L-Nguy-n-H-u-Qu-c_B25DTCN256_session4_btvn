#include <stdio.h>
int main(){
	int number;
	printf("moi ban nhap so vao day:");
	scanf("%d",&number);
	if(number % 5==0 && number % 3==0){
		printf("so vua nhap chia het cho 3 va 5");
	} else if (number % 5==0){
	    printf("so vua nhap chia het cho 5");
    } else if (number % 3==0){
    	printf("so vua nhap chia het cho 3");
	} else{
		printf("khong chia het cho 3 va 5");
	}
	
		
	return 0;
}
