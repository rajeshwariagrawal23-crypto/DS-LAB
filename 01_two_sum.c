#include "../../common/student_info.h"

int main(void){student_info();int a[500],n,target,i,j;
 printf("Enter n: ");scanf("%d",&n);if(n<0||n>500)return 1;
 printf("Enter elements: ");for(i=0;i<n;i++)scanf("%d",&a[i]);
 printf("Target: ");scanf("%d",&target);
 for(i=0;i<n;i++)for(j=i+1;j<n;j++)if(a[i]+a[j]==target){printf("Indices: %d %d\n",i,j);return 0;}
 puts("No pair found.");return 0;}
