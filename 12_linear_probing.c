#include "../../common/student_info.h"

#define SIZE 11
int main(void){student_info();int t[SIZE],n,x,i,j;for(i=0;i<SIZE;i++)t[i]=-1;printf("How many keys (0-%d): ",SIZE);scanf("%d",&n);if(n<0||n>SIZE)return 1;printf("Enter keys: ");for(i=0;i<n;i++){scanf("%d",&x);for(j=0;j<SIZE;j++){int k=((x%SIZE)+SIZE+j)%SIZE;if(t[k]==-1){t[k]=x;break;}}if(j==SIZE)printf("Table full; could not insert %d\n",x);}puts("Hash table (index: value):");for(i=0;i<SIZE;i++)printf("%2d: %d\n",i,t[i]);return 0;}
