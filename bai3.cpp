#include<stdio.h>
void nhapMang(int q[][100], int n)
{
	printf("Nhap cac phan tu cau mang 2 chieu:\n");
	for(int i = 0; i < n; i++){
		for( int j = 0; j < n; j++){
			printf("q[%d][%d]=", i, j);
			scanf("%d", &q[i][j]);
		}
	}
}
void xuatMang(int q[][100], int n){
	printf("Mang 2 chieu la:\n ");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d", q[i][j]);
			
		}
		printf("\n");
	}
}
int demSCP(int q[][100], int n){
	int count = 0;
	for(int i = 0; i < n; i++)
	{
	   if(laSCP q) count++;
	}
	return count;
}
int main(){
	int n, p;
	int q[100][100];
	printf("Nhap kich thuoc mang nxn: ");
	scanf("%d", &n);
	nhapMang(q,n);
	xuatMang(q,n);
	printf("So luong so chinh phuong tren duong cheo chinh: %d\n", demSCP(q,n));
}
