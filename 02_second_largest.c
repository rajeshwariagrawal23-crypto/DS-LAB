#include "../../common/student_info.h"

int main(void){student_info();int a[500],n,i,largest,second,has=0;
 printf("Enter n: ");scanf("%d",&n);if(n<1||n>500)return 1;
 printf("Enter elements: ");for(i=0;i<n;i++)scanf("%d",&a[i]);largest=a[0];
 for(i=1;i<n;i++)if(a[i]>largest)largest=a[i];
 for(i=0;i<n;i++)if(a[i]<largest&&(!has||a[i]>second)){second=a[i];has=1;}
 if(has)printf("Second largest distinct element: %d\n",second);else puts("No second distinct largest element.");return 0;}
