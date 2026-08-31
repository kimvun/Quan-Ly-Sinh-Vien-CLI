#include <stdio.h>


int trungbinh(int n[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += n[i];
    }
    sum /= size;
    return sum;
}

int main(){
    int size;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &size);
    int n[size];
    for (int i = 0; i < size; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &n[i]);
    }
    printf("Trung binh cong cua mang la: %d", trungbinh(n, size));
}    