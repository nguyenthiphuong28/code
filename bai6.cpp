#include<stdio.h>
int a;
int b;
int UCLN(int a, int b){
    if (b==0) return 0;
    else return UCLN(b, a%b);
}
int BSCLN ( int a, int b){
    return (a * b)/UCLN(a,b);
}
int main (){
    printf ("nhap so nguyen a= ");
    scanf("%d", &a);
    printf ("nhap so nguyen b= ");
    scanf ("%d", &b);
    printf ("UCLN cua hai so a va b la %d\n", UCLN(a,b));
    printf ("BSCLN cua hai so a va b la %d\n", BSCLN(a,b));
    return 0;
}
