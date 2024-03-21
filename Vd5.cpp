#include<stdio.h>

#define n 5
void tachmang(int c[n])
{
 int a[10],b[10],k=0,q=0;
 for(int i=0;i<n;i++)
  if(c[i]%2!=0)
   {
    a[k]=c[i];
    k++;
   }
  else
   {
    b[q]=c[i];
    q++;
   }

 printf("mang a la:");
  for(int i=0;i<k;i++)
   printf("%d\t",a[i]);
 printf("\n");
 printf("mang b la:");
  for(int j=0;j<q;j++)
   printf("%d\t",b[j]);
}
  

int main()
{
 int c[n];
 for(int i=0;i<n;i++)
  {
   printf("c[%d]=",i);scanf("%d",&c[i]);
  }
 tachmang(c);
 return 0;
}