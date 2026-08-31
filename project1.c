#include <stdio.h>

int tinhtong(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}

void inMenu(){
    printf("Menu:\n");
    printf("1. Tinh tong hai so\n");
    printf("2.Thoat\n");
}

int main(){
    int choice;
    int a, b;
    do{
        inMenu();
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Nhap hai so: ");
                scanf("%d %d", &a, &b);
                printf("Tong hai so la: %d\n", tinhtong(a, b));
                break;
            case 2:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    }while(choice != 2);
}
