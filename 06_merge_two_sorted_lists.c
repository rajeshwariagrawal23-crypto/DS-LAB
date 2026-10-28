#include "../../common/student_info.h"

typedef struct Node{int x;struct Node*n;}Node;
int main(void){student_info();int n,m,x,i;Node*a=NULL,**tail=&a,*b=NULL,**tail2=&b,*r=NULL,**out=&r;
 printf("Length of list A: ");scanf("%d",&n);printf("Sorted values: ");for(i=0;i<n;i++){scanf("%d",&x);*tail=malloc(sizeof(Node));(*tail)->x=x;(*tail)->n=NULL;tail=&(*tail)->n;}
 printf("Length of list B: ");scanf("%d",&m);printf("Sorted values: ");for(i=0;i<m;i++){scanf("%d",&x);*tail2=malloc(sizeof(Node));(*tail2)->x=x;(*tail2)->n=NULL;tail2=&(*tail2)->n;}
 while(a||b){Node**src=(!b||(a&&a->x<=b->x))?&a:&b;Node*t=*src;*src=t->n;*out=t;out=&t->n;}*out=NULL;printf("Merged list:");while(r){Node*t=r;printf(" %d",r->x);r=r->n;free(t);}puts("");return 0;}
