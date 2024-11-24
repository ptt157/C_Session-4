#include <stdio.h>

int main() {
    float oldIndex, newIndex, consumption, totalPrice;

    printf("Nhap chi so cong to dau thang: ");
    scanf("%f", &oldIndex);
    printf("Nhap chi so cong to cuoi thang: ");
    scanf("%f", &newIndex);

    consumption = newIndex - oldIndex;

    if (consumption < 50) totalPrice = consumption * 10000;
    else if (consumption < 100) totalPrice = 50 * 10000 + (consumption - 50) * 15000;
    else if (consumption < 150) totalPrice = 50 * 10000 + 50 * 15000 + (consumption - 100) * 20000;
    else if (consumption < 200) totalPrice = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consumption - 150) * 25000;
    else totalPrice = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consumption - 200) * 30000;

    printf("Tien dien phai tra: %.2f VND\n", totalPrice);
    return 0;
}

