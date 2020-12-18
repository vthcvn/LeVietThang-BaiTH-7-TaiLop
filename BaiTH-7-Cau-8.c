#include<stdio.h>
#include<string.h>

int main(){
	typedef struct Hoso{
		char hoten[30], diachi[100], sdt[10];
		float diemtb;
	} HS;
	
	int i, n;
	
	do {
		printf("\nNhap so luong sinh vien (0<n<100): ");
		scanf("%d", &n);
	} while (n<0 || n>100);
	
	HS sinhvien[n];
	char hoten[30], diachi[100], sdt[10];
	float diemtb;
	for (i=0; i<n; i++){
		printf("\nNhap thong tin sinh vien thu %d", (i+1));
		printf("\nNhap ho va ten: ");
		fflush(stdin);
		gets(hoten);
		strcpy(sinhvien[i].hoten, hoten);
		
		printf("\nNhap dia chi: ");
		fflush(stdin);
		gets(diachi);
		strcpy(sinhvien[i].diachi, diachi);
		
		printf("\nNhap so dien thoai: ");
		fflush(stdin);
		gets(sdt);
		strcpy(sinhvien[i].sdt, sdt);
		
		do{
			printf("\nNhap diem trung binh tich luy: (0<=diem<=4)");
			scanf("%f", &diemtb);
		} while (diemtb<0 || diemtb>4);
		sinhvien[i].diemtb=diemtb;	
	}
	
	printf("\n*************************************\n");
	printf("\nDanh sach sinh vien co diem tb tich luy tu 3.2 tro len: ");
	for (i=0; i<n; i++){
		if(sinhvien[i].diemtb>=3.2)
			printf("\n%s", sinhvien[i].hoten);
	}

	return 0;
}

