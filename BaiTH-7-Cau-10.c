#include<stdio.h>
#include<string.h>

int main(){
	typedef struct Hoso{
		char ho[10], ten[30], quequan[100];
		int ngay, thang, nam;
	} HS;
	
	int i, j, n;
	char h[10], t[30];
	
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
	
	for (i=1; i<n; i++){
		for(j=1; j<n; j++){
			if(strcmp(sinhvien[j-i].ten, sinhvien[j].ten)>0){
				strcpy(t, sinhvien[j-i].ten);
				strcpy(h, sinhvien[i-j].ho);
				strcpy(sinhvien[j-1].ten, sinhvien[j].ten);
				strcpy(sinhvien[j-1].ho, sinhvien[j].ho);
				strcpy(sinhvien[j].ten, t);
				strcpy(sinhvien[j].ho,h);
			}
		}
	}
	printf("\nDanh sach sinh vien sau khi duoc sap xep: ");
	for (i=0; i<n; i++){
		printf("%s %s\n", sinhvien[i].ho, sinhvien[i].ten);
	}
	return 0;
}

