#include<stdio.h>
#include<string.h>
void Nhapchuoi(){
	char nhap[100];
	printf("Nhap chuoi ky tu: ");
	scanf("%s",nhap);
	
}
int dem_NA(char s[]){
	char NA[6] = "aeiou";
	int dem = 0, i = 0;
	while (s[i]!='\0')
	{
		for(int j= 0; j < strlen(NA); j++)
		    if(s[i] == NA[j] || s[i] + 32 == NA[j]) dem++;
		i++;
    }
    return dem;
}
int main(){
	char nhap[100];
    printf("Nhap chuoi ky tu: ");
    scanf("%s", nhap);
    printf("Nhap chuoi vua nhap:%s", nhap);
    printf("in so luong NA:%s\n");
}
