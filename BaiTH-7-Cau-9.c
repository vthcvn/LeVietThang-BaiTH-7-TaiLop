#include<stdio.h>
#include<string.h>

int main(){
	typedef struct Hoso{
		char ho[10], ten[30], quequan[100];
		int ngay, thang, nam;
	} HS;
	
	int i, n;
	
	do {
		printf("\nNhap so luong sinh vien (0<n<100): ");
		scanf("%d", &n);
	} while (n<0 || n>100);
	
	HS sinhvien[n];
	char ho[10], ten[30], quequan[100];
	int ngay, thang, nam;
	for (i=0; i<n; i++){
		printf("\nNhap thong tin sinh vien thu %d", (i+1));
		printf("\nNhap ho: ");
		fflush(stdin);
		gets(ho);
		strcpy(sinhvien[i].ho, ho);
		printf("\nNhap ten: ");
		fflush(stdin);
		gets(ten);
		strcpy(sinhvien[i].ten, ten);
		
		printf("\nNhap que quan: ");
		fflush(stdin);
		gets(quequan);
		strcpy(sinhvien[i].quequan, quequan);
		
		printf("\nNhap ngay sinh: ");
		scanf("%d", &ngay);
		printf("\nNhap thang sinh: ");
		scanf("%d", &thang);
		printf("\nNhap nam sinh: ");
		scanf("%d", &nam);	
	}
	
	printf("\n*************************************\n");
	printf("\nDanh sach sinh vien co que quan la Da Nang: ");
	for (i=0; i<n; i++){
		if(strcmp(sinhvien[i].quequan,"Da Nang")==0)
			printf("\n%s", sinhvien[i].ho, " ", sinhvien[i].ten);
	}

	return 0;
}

