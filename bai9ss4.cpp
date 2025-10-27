#include <stdio.h>
int main(){
	int ngay, thang, nam;
	int dung = 1;
	printf("moi ban nhap ngay thang nam:");
	scanf("%d %d %d",&ngay,&thang,&nam);
	if(thang  <1 || thang >12){
		dung=0;
	}else{
		int songaytrongthang;
	switch(thang){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				songaytrongthang= 31;
			break;
		case 4: case 6: case 9: case 11:
			    songaytrongthang= 30;
			break;
		case 2:
		if((nam % 4 == 0 && nam % 100 != 0)||(nam % 400 == 0))
		    songaytrongthang=29;
       	else
	 	    songaytrongthang=28;
	 	    break;
		default:
			songaytrongthang= 0;
	
	}
	if(ngay <1 || ngay > songaytrongthang )
		dung= 0;
	}
	if(dung)
		printf("ngay thang nam hop le");
	else
		printf("ngay thang nam khong hop le");
	

	return 0;
}
