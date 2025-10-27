#include <stdio.h>
int main(){
	int a,b,c, n;
	printf("nhap a,b,c:");
	scanf("%d,%d,%d",&a, &b, &c);
	if (a>b){n = a, a = b, b = n;
	}
	if (a>c){n = a, a = c, c = n;
	}
	if (b>c){n = b, b = c, c = n;
	}
	printf("thu tu tang dan la: %d, %d, %d",a,b,c);
	return 0;
}
