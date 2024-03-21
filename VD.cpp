#include <stdio.h>

void nhapmang(int a[], int &n) {
    do {
        printf("Nhap so luong phan tu mang: ");
        scanf("%d", &n);
    } while (n < 5 || n > 100);

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuatmang(int a[], int n) {
    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int dem(int a[], int n, int x) {
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            dem++;
    return dem;
}

int kientra(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return 0;
    return 1;
}

int timmin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

void hoanvi(int &x, int &y) {
    int tam = x;
    x = y;
    y = tam;
}

void sapxepgiam(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                hoanvi(a[i], a[j]);
}


int main()
 {
    int a[100]; // Declare the array with a specific size
    int n;
    nhapmang(a, n);
    xuatmang(a, n);
    int x;
    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    printf("So luong phan tu co gia tri x: %d\n", dem(a, n, x));
    if (kientra(a, n) == 1)
        printf("Cac phan tu cua mang giam dan.\n");
    else
        printf("Cac phan tu cua mang khong giam dan.\n");
    
    return 0;
}