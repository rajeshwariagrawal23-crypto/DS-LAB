#include "../../common/student_info.h"

int main(void){
 student_info(); int a[200],n,ch,pos,val,i;
 printf("Enter array size: "); if(scanf("%d",&n)!=1||n<0||n>199)return 1;
 printf("Enter %d elements: ",n); for(i=0;i<n;i++)scanf("%d",&a[i]);
 do{
  printf("\n1.Insert at beginning 2.Insert at end 3.Insert at position 4.Delete beginning 5.Delete end 6.Delete position 0.Exit\nChoice: ");
  scanf("%d",&ch);
  if(ch>=1&&ch<=3){
   if(n>=199){puts("Array full.");continue;}
   printf("Value: ");scanf("%d",&val);
   if(ch==1)pos=0; else if(ch==2)pos=n; else {printf("Position (1-%d): ",n+1);scanf("%d",&pos);pos--;}
   if(pos<0||pos>n){puts("Invalid position.");continue;}
   for(i=n;i>pos;i--)a[i]=a[i-1];a[pos]=val;n++;
  }else if(ch>=4&&ch<=6){
   if(n==0){puts("Array empty.");continue;}
   if(ch==4)pos=0;else if(ch==5)pos=n-1;else{printf("Position (1-%d): ",n);scanf("%d",&pos);pos--;}
   if(pos<0||pos>=n){puts("Invalid position.");continue;}
   for(i=pos;i<n-1;i++)a[i]=a[i+1];n--;
  }else if(ch!=0)puts("Invalid choice.");
  printf("Array:");for(i=0;i<n;i++)printf(" %d",a[i]);puts("");
 }while(ch!=0);return 0;
}
