#include <stdio.h>
int main(){
	int number;
	printf("moi ban nhap nam vao day:");
	scanf("%d",&number);
	if((number % 4 == 0 && number %	 100 != 0)||(number % 400 == 0)){
		printf(" nam %d la nam nhuan\n",number);
	}else{
		printf(" nam %d khong phai nam nhuan\n",number);
	}

	
	
	return 0;
	
}
