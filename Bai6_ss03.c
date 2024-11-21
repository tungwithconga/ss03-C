#include <stdio.h>

int main() {
    double base, height, area;

    printf("Nhap vao canh day hinh tam giac: ");
    scanf("%lf", &base);
    printf("Nhap vao chieu cao hinh tam giac: ");
    scanf("%lf", &height);

    area = 0.5 * base * height;

    printf("Dien tich tam giac la: %.2lf\n", area);

    return 0;
}

