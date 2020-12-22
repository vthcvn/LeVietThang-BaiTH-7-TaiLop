#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct SinhVien{
    char ho[10], tendem[10], ten[10];
    char quequan[20];
    int ngay, thang, nam;
} SV;
 
void nhap(SV &sv);
void nhapN(SV a[], int n);
void xuat(SV sv);
void xuatN(SV a[], int n);
void sapxep(SV a[], int n);
void timSV(SV a[], int n);
void xoaSV(SV a[], int n);

int main(){
    int key;
    int n;
    bool daNhap = false;
    do{
        printf("\nNhap so luong SV: "); scanf("%d", &n);
    }while(n <= 0);
    SV a[n];
    while(true){
        printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN    **\n");
        printf("**      1. Nhap du lieu                 **\n");
        printf("**      2. In danh sach sinh vien       **\n");
        printf("**      3. Sap xep sinh vien theo ten   **\n");
        printf("**      4. Nhap them sinh vien          **\n");
        printf("**      5. Tim sinh vien theo ten       **\n");
        printf("**      6. Xoa sinh vien                **\n");
        printf("**      0. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap DS sinh vien!");
                nhapN(a, n);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                if(daNhap){
                    printf("\nBan da chon xuat DS sinh vien!");
                    xuatN(a, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                if(daNhap){
                    printf("\nBan da chon sap xep SV theo ten!");
                    sapxep(a, n);
                    xuatN(a, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
                break;
            case 5:
                if(daNhap){
                    printf("\nBan da chon tim SV!");
                    timSV(a, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 6: 
            	if(daNhap){
            		printf("\nBan da chon xoa SV!");
            		xoaSV(a, n);
            	} else {
            		printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }
}
 
 
void nhap(SV &sv){
    char help[10];
    fflush(stdin); gets(help);
	printf("\nNhap ho: "); fflush(stdin); gets(sv.ho);
	printf("\nNhap ten dem: "); fflush(stdin); gets(sv.tendem);
	printf("\nNhap ten: "); fflush(stdin); gets(sv.ten);
	printf("\nNhap que quan: "); fflush(stdin); gets(sv.quequan);
	printf("\nNhap ngay thang nam sinh: "); scanf("%d%d%d", &sv.ngay, &sv.thang, &sv.nam);
}
void nhapN(SV a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nNhap SV thu %d:", i+1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void xuat(SV sv){
    printf("\nHo ten SV: %s %s %s", sv.ho, sv.tendem, sv.ten);
    printf("\nNgay thang nam sinh: %d-%d-%d", sv.ngay, sv.thang, sv.nam);
    printf("\nQue quan  : %s", sv.quequan);
}
 
void xuatN(SV a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0;i < n;++i){
        printf("\nThong tin SV thu %d:", i+1);
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void sapxep(SV a[], int n){
    SV tmp;
    int i, j;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n;j++){
            if(strcmp(a[i].ten,a[j].ten)>0){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void timSV(SV a[], int n){
	char ten[10];
	printf("\nHay nhap ten sinh vien can tim: ");
	scanf("%s", &ten);
	int i, index=0;
	printf("\nDanh sach sinh vien tim duoc: ");
	for(i=0; i<n; i++){
		if(strcmp(ten, a[i].ten)==0){
			printf("\n%s %s %s", a[i].ho, a[i].tendem, a[i].ten);
			index++;
		}
	}
	if(index==0)
	    printf("\nKhong tim duoc sinh vien nao\n");
}

void xoaSV(SV a[], int n){
    
}
 
 

