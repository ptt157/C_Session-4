#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Nhap 3 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);

    // Kiem tra xem so thu 3 co nam trong khoang giua so thu 2 va so thu 1 hay khong
    if (num3 > num1 && num3 < num2 || num3 < num1 && num3 > num2) {
        printf("So %d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } else {
        printf("So %d khong nam trong khoang giua %d va %d.\n", num3, num1, num2);
    }

    return 0;
}

