#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool validatedata(int a, int b) {
    if (a <= 0 || b <= 0) {
        printf("do dai mot canh tam giac phai lon 0!");
        return false;
    }
    return true;
}

//tinh canh huyen cua tam giac vuong
float canhhuyen(int a, int b) {
    return (float) sqrt(pow(a, 2) * pow(b, 2));
}

int main() {
    int a, b;
    printf("nhap do dai canh thu nhat:\n ");
    scanf("%d", &a);
    printf("nhap do dai canh thu hai:\n");
    scanf("%d", &b);
    bool isValidatedata = validatedata(a, b);
    if (isValidatedata) {
        printf("do dai canh huyen cua tam giac vuong la: %.2f", canhhuyen(a, b));
    }
    return 0;
}