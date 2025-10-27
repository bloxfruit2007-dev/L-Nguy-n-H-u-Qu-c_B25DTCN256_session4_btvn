#include <stdio.h>
int main(){
	int a,b,c;
	printf("moi ban nhap vao 3 so nguyen");
	scanf("%d,%d,%d",&a,&b,&c);
	if(c>a && c<b ){
		printf("%d nam giua so 1 va so 2",c);
	}else if(c>b && c<a){
		printf("%d nam giua so 1 va so 2",c);
	}else{
			printf("%d khong nam giua so 1 va so 2",c);
	}
	return 0;
}
