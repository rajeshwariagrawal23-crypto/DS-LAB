#include "../../common/student_info.h"

int main(void){student_info();int a[1000],n,i,k=0;printf("Enter n: ");scanf("%d",&n);if(n<0||n>1000)return 1;printf("Enter sorted elements: ");for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++)if(i==0||a[i]!=a[i-1])a[k++]=a[i];printf("Unique elements (%d):",k);for(i=0;i<k;i++)printf(" %d",a[i]);puts("");return 0;}
