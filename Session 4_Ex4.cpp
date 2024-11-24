#include <stdio.h>

int main() {
    int month;

    // Nhap so thang
    printf("Nhap so thang (1-12): ");
    scanf("%d", &month);

    // Kiem tra thang va in ket qua
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Thang %d co 31 ngay.\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Thang %d co 30 ngay.\n", month);
    } else if (month == 2) {
        printf("Thang 2 co 28 hoac 29 ngay, tuy thuoc vao nam.\n");
    } else {
        printf("So thang %d khong hop le.\n", month);
    }

    return 0;
}

