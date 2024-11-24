#include <stdio.h>

int main() {
    int number;

    // Nhap mot so nguyen tu nguoi dung
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra so am hay duong
    if (number > 0) {
        printf("So %d la so duong.\n", number);
    } else if (number < 0) {
        printf("So %d la so am.\n", number);
    } else {
        printf("So 0 khong phai la so am cung khong phai la so duong.\n");
    }

    return 0;
}

