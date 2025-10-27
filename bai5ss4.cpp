#include <stdio.h>
int main(){
	int number,so_dien;
	printf("moi ban nhap so dien vao day:");
	scanf("%d",&number);
	if(0 <= number && number < 50 ){
		so_dien= number * 10000;
		printf("gia tien dien la:%d",so_dien);
	} else if (50 <= number && number < 100 ){
		so_dien= number * 15000;
		printf("gia tien dien la: %d",so_dien);
	}else if (100 <= number && number < 150 ){
		so_dien= number * 	20000;
		printf("gia tien dien la: %d",so_dien);
	}else if (150 <= number && number < 200 ){
		so_dien= number * 	25000;
		printf("gia tien dien la: %d",so_dien);
	}else if (200 <= number){
			so_dien= number * 	30000;
		printf("gia tien dien la: %d",so_dien);
	}
	
		
	return 0;
}
