#include<stdio.h>
#include<string.h>

char nhap[100];

void Nhapchuoi(){
	printf("Nhap chuoi ky tu: ");
	gets(nhap);
}

void dem_NA(char s[]){
	int i=0;
	int na[5]={0,0,0,0,0};//a/A e/E i/I o/O u/U
	
	while(s[i]!='\0'){
		switch(s[i]){
			case 'a':
			case 'A':{
				na[0]++;				
				break;
			}
			case 'e':
			case 'E':{
				na[1]++;				
				break;
			}
			case 'i':
			case 'I':{
				na[2]++;				
				break;
			}
			case 'o':
			case 'O':{
				na[3]++;				
				break;
			}
			case 'u':
			case 'U':{
				na[4]++;				
				break;
			}
		}
		i++;
	}
	//in mang
	printf("\na/A\te/E\ti/I\to/O\tu/U\n");
	for(int i=0; i<5; i++){
		printf("%d\t",na[i]);
	}
}
int main(){
	Nhapchuoi();
    printf("Nhap chuoi vua nhap: ");
    puts(nhap);
    printf("\nSo nguyen am trong chuoi: ");
    dem_NA(nhap);
}
