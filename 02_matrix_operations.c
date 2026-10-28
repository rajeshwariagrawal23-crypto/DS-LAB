#include "../../common/student_info.h"

int main(void){student_info();int a[20][20],b[20][20],n,m,i,j;
 printf("Rows and columns (square matrix): ");scanf("%d%d",&n,&m);if(n<1||n>20||m<1||m>20)return 1;
 puts("Enter matrix A:");for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&a[i][j]);
 puts("Enter matrix B:");for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&b[i][j]);
 puts("A x B (only for square matrices):");if(n==m){for(i=0;i<n;i++){for(j=0;j<m;j++){int k,s=0;for(k=0;k<n;k++)s+=a[i][k]*b[k][j];printf("%d ",s);}puts("");}}else puts("Multiplication skipped: matrices must be square and same dimensions.");
 if(n==m){int d1=0,d2=0;for(i=0;i<n;i++){d1+=a[i][i];d2+=a[i][n-1-i];}printf("Difference of diagonal sums of A: %d\n",d1-d2);}return 0;}
