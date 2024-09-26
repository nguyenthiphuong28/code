#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// S= 1+ 1/2+ 1/3+....1/n voi n > 0
float S1(int n){ 
    if(n==1) return 1;
    else return S1(n-1)+ (float)1/n;
}
// S= 1*3*5*.... (2n-1) voi n > 0
long S2 (int n){
    if (n==1) return 1;
    else return S2(n -1)*(2*n-1);
} 
//S= 1-2+3-4+(-1)^n-1*n
long S3 (int n){
    if (n == 1) return 1;
    else return S3(n - 1) + pow(-1,n-1)*n;
}
//S= 1!+2!+......n!
long S4 (int n){
    if (n == 1) return 1;
    else return n * S4(n - 1) + (n == 1 ? 1 : (S4(n - 1)));
}
int main(int arg,char * argv[]){
    int n;
    printf ("nhap n cho S1 = ");
    scanf ("%d", &n);
    printf ("dap so la %f\n", S1(n));

    printf ("nhap n cho S2 =");
    scanf("%d", &n);
    printf ("dap so la %ld\n", S2(n));

    printf ("nhap n cho S3= ");
    scanf ("%d", &n);
    printf("dap so la %ld\n", S3(n));

    printf ("nhap n cho S4= ");
    scanf ("%d", &n);
    printf ("dap so la %ld\n", S4(n));
    return 0;
}



