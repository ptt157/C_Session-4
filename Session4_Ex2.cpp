#include <stdio.h>

int main() {
    int number;

    // Nhap mot so nguyen tu nguoi dung
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra chan hay le
    if (number % 2 == 0) {
        printf("So %d la so chan.\n", number);
    } else {
        printf("So %d la so le.\n", number);
    }

    return 0;
}

