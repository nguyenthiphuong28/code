#include <stdio.h>

//Ham nhap mang 2 chieu
void nhapMang(int q[][100], int n) {
    printf("Nhap cac phan tu cua mang 2 chieu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("q[%d][%d] = ", i, j);
            scanf("%d", &q[i][j]);
        }
    }
}

//Ham xuat mang 2 chieu
void xuatMang(int q[][100], int n) {
    printf("Mang 2 chieu la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }
}

// Ham dem so chinh phuong tren duong cheo chinh
int demSCPDiagonal(int q[][100], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (laSoCP(q[i][i])) count++;
    }
    return count;
}

//Ham tinh cot thu p
int tongCot(int q[][100], int n, int p) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += q[i][p];
    }
    return sum;
}

//Ham tinh. gia tri nho nhat tren mang hai chieu
int giaTriNhoNhat(int q[][100], int n) {
    int min = q[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (q[i][j] < min) min = q[i][j];
        }
    }
    return min;
}

int main() {
    int n, p;
    int q[100][100];
    printf("Nhap kich thuoc mang nxn: ");
    scanf("%d", &n);
    nhapMang(q, n);
    xuatMang(q, n);
    printf("So luong so chinh phuong tren duong cheo chinh: %d\n", demSCPDiagonal(q, n));
    printf("Nhap cot p can tinh tong: ");
    scanf("%d", &p);
    printf("Tong cac phan tu tren cot %d la: %d\n", p, tongCot(q, n, p));
    printf("Gia tri nho nhat cua mang 2 chieu la: %d\n", giaTriNhoNhat(q, n));

    return 0;
}

