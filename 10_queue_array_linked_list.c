#include "../../common/student_info.h"

typedef struct Node{int x;struct Node*n;}Node;
int main(void){student_info();int a[100],front=0,rear=-1,ch,x;Node*h=NULL,*tail=NULL;do{printf("\n1.Array enqueue 2.Array dequeue 3.Array display 4.Linked enqueue 5.Linked dequeue 6.Linked display 0.Exit\nChoice: ");scanf("%d",&ch);
 if(ch==1){if(rear==99)puts("Array queue full.");else{printf("Value: ");scanf("%d",&x);a[++rear]=x;}}else if(ch==2){if(front>rear)puts("Array queue empty.");else printf("Dequeued: %d\n",a[front++]);}else if(ch==3){printf("Array queue:");for(x=front;x<=rear;x++)printf(" %d",a[x]);puts("");}
 else if(ch==4){Node*t=malloc(sizeof(Node));printf("Value: ");scanf("%d",&x);t->x=x;t->n=NULL;if(tail)tail->n=t;else h=t;tail=t;}else if(ch==5){if(!h)puts("Linked queue empty.");else{Node*t=h;printf("Dequeued: %d\n",t->x);h=h->n;if(!h)tail=NULL;free(t);}}else if(ch==6){Node*t=h;printf("Linked queue:");while(t){printf(" %d",t->x);t=t->n;}puts("");}
 }while(ch!=0);while(h){Node*t=h;h=h->n;free(t);}return 0;}
