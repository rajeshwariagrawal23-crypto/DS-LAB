#include "../../common/student_info.h"

void hanoi(int n,char from,char aux,char to){if(n==0)return;hanoi(n-1,from,to,aux);printf("Move disk %d from %c to %c\n",n,from,to);hanoi(n-1,aux,from,to);}
int main(void){student_info();int n;printf("Number of disks (1-15): ");scanf("%d",&n);if(n<1||n>15){puts("Enter a number from 1 to 15.");return 1;}hanoi(n,'A','B','C');return 0;}
