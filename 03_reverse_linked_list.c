#include "../../common/student_info.h"

typedef struct Node{int x;struct Node*n;}Node;
int main(void){student_info();Node*h=NULL;int n,x,i;printf("Number of elements: ");scanf("%d",&n);printf("Enter elements: ");for(i=0;i<n;i++){scanf("%d",&x);Node*t=malloc(sizeof(Node));t->x=x;t->n=h;h=t;}printf("Reversed list:");while(h){Node*t=h;printf(" %d",h->x);h=h->n;free(t);}puts("");return 0;}
