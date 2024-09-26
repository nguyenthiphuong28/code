#include<stdio.h>
int n;
int dem(int n){
    if (n < 10 && n > -10) return 1;
    else return 1+ dem(n/10);
}
int main(){
    printf ("nhap so nguyen n = ");
    scanf("%d",&n);
    printf("Số chữ số của %d là: %d\n", n, dem(n < 0 ? -n : n)); 
    return 0;
}