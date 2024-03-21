#include<stdio.h>
int N;
int a[50];

void nhap(){
	printf("nhap N = ");
	scanf("%d", &N);
    while( N < 3 || N > 50){
    	printf("nhap lai N = ");
    	scanf("%d", &N);
    }
    printf("ban vua nhap so N = %d\n", N);
}

void nhapmang(){
	for(int i=0; i<N; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void inmang(){
	for(int i = 0; i < N; i++)
	printf("%d   ", a[i]);
	}
int timmax(){
	int max = a[0];
	for(int i=1; i < N; i++){
		if(max < a[i])
			max=a[i];
    }
	
	return max;
}
int isnt(int x){
	if(x < 2){
		return 0;
	}
	int dem=0;
	for(int i= 1; i<=x; i++){
		if(x%i==0){
			dem++;
		}
	}
	if(dem==2){
		return 1;
	}
	return 0;
}
int dem(){
	int count=0;
	for(int=0; i<N; i++){
		if(isnt(a[i])==1){
			count++;
	    }
    }
	return count;
}
int _2nt(){
	int pos;
	int count=0;
	for(int i=0; i<N; i++){
		if(isnt(a[i])==1){
			count++;
			pos=i;
			if(count==2){
				pos=i;
				if(count==2){
					pos=i;
					return pos;
				}
			}
		}
	return pos;
}
	
int main(){
	nhap();
	nhapmang();
	inmang();
	printf("\nSLN cua mang %d tai vi tri %d", a[timmax()], timmax())
	return 0;
 
