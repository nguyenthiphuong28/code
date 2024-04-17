#include<stdio.h>

void nhapDS(int a[], int &n)
{
	do
	{
		printf("Nhap so luong phan tu: ");
		scanf("%d", &n);
	} while(n <= 5 || n >= 10);
	
	for(int i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void xuatDS(int a[], int n)
{
	printf("Mang vua nhap: ");
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
int snt(int a){
	if (a<2) 
	   return 0;
	else
	for (int i=2;i<a;i++){
		if (a%i==0){
		  return 0;
	}		  
	}
	return 1;
}
int shh(int a)
{
	int s=0;
	for(int i = 0; i<a; i++){
		if(a%i == 0)
		s += 1;
		
	}
	if(s == a)
	   return 0;
	else
	   return 1;
	
}
int main(){
	int a[10];
	int n;
	nhapDS(a,n);
	xuatDS(a,n);
	printf("nso nguyen to cua day\n");
	for (int i=0;i<n;i++){
		if (snt(a[i]))
		  printf("%d\t",a[i]);
	}
	printf("\nso hoan hao cua day\n");
	for (int i=0;i<n;i++)
		if (shh(a[i]))
		  printf("%d\t",a[i]);
}
