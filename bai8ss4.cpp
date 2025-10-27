#include <stdio.h>
int main(){
	int a,b,c;
	printf("moi ban nhap canh tam giac:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && c+b>a){
		printf("la ba canh tam giac");
	}else{
		printf("khong phai canh tam giac");
	}
	
	return 0;
}
