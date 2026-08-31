#include <stdio.h>
#include <string.h>


typedef struct {
    char name[50];
    char mssv[15];
    float point;
} SinhVien;

void menu();
void timKiemTheoMSSV(SinhVien ds[], int n);
void sapXepTheoDiem(SinhVien ds[], int n);

void nhapSinhVien(SinhVien *sv){
    printf("Nhap ho ten: ");
    fgets(sv->name, sizeof(sv->name), stdin);
    sv->name[strcspn(sv->name, "\n")] = 0;
    printf("Nhap MSSV:");
    scanf("%s", sv->mssv);
    printf("Nhap Diem So: ");
    scanf("%f", &sv->point);
    getchar();
}

void inSinhVien(SinhVien sv){
    printf("Ho ten: %s | MSSV: %s | Diem: %.2f\n", sv.name, sv.mssv, sv.point);
}

void nhapDanhSach(SinhVien ds[], int *n){
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    getchar();
    for(int i = 0; i < *n; i ++){
        printf("Nhap thong tin sinh vien thu %d: \n", i + 1);
        nhapSinhVien(&ds[i]);
    }
}

void inDanhSach(SinhVien ds[], int n){
    for (int i= 0; i < n; i++){
        inSinhVien(ds[i]);
    }
}

void menu(){
    printf("\n============== MENU QUAN LY SINH VIEN ==============\n");
    printf("1. Nhap danh sach sinh vien\n");
    printf("2. In danh sach sinh vien\n");
    printf("3. Tim Kiem Sinh Vien\n");
    printf("4. Sap Xep Diem\n");
    printf("0. Thoat chuong trinh\n");
    printf("===================================================\n");
    printf("Lựa chọn của bạn: ");
}

void timKiemTheoMSSV(SinhVien ds[], int n){
    char MSSVCanTim[15];
    printf("Nhap MSSV can tim: ");
    scanf("%s", MSSVCanTim);
    getchar();
    int timThay = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(ds[i].mssv, MSSVCanTim) == 0){
            inSinhVien(ds[i]);
            timThay += 1;
            break;
        }

    }
    if(timThay == 0){
        printf("Khong Tim Thay Sinh Vien");
    }
}

void sapXepTheoDiem(SinhVien ds[], int n){
    SinhVien temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(ds[i].point < ds[j].point){
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;

            }
        }
    }
    printf("\n--> DA SAP XEP DANH SACH THEO DIEM GIAM DAN:\n");
    inDanhSach(ds, n);
}

int main(){

    SinhVien ds[100];
    int n = 0;
    int choice;

    do{
        menu();
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("\n--- NHAP DANH SACH ---\n");
                nhapDanhSach(ds, &n);
                break;
            case 2:
                printf("\n--- IN DANH SACH ---\n");
                inDanhSach(ds, n);
                break;
            case 3:
                printf("\n--- TIM KIEM ---\n");
                timKiemTheoMSSV(ds, n);
                break;
            case 4:
                printf("\n--- SAP XEP DIEM ---\n");
                sapXepTheoDiem(ds, n);
                break;
            case 0:
                printf("Da Thoat Chuong Trinh\n");
                break;
            default:
                printf("Ban Nhap Khong Hop Le, Vui Long Thu Lai\n");
            
        }
    } while(choice != 0);
}
