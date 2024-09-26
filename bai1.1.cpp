// quan ly danh sach simh vien
#include<stdio.h>
#include<string.h>
#define Max 100
//thong tin sinh vien
typedef struct{
    char MSSV [9];
    char hoten[100];
    float DTB;
}sinhvien;
// nhap thong tin sv
void nhapthongtinsv(sinhvien*sv){
    //fflush(stdin);//lam sach vung dem ban phim
    printf ("nhap MSSV");
    gets(sv->MSSV);
    printf ("nhap hoten");
    gets(sv->hoten);
    printf ("nhap DTB");
    scanf ("%f",&sv->DTB);
}
// xuat thong tin sv
void xuatthongtinsv(sinhvien *sv){
    printf ("MSSV: %s, hoten:%s, DTB: %.2f\n", sv->MSSV, sv->hoten, sv->DTB);
}
//tim sinh vien dua vao MSSV
void timsinhvien(sinhvien*sv){
}
int main (){
    sinhvien sv;
    nhapthongtinsv(&sv);
    xuatthongtinsv(&sv);
    return 0;
}