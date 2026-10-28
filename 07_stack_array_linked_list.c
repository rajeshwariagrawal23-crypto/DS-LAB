#include "../../common/student_info.h"

typedef struct Node{int x;struct Node*n;}Node;
int main(void){student_info();int a[100],top=-1,ch,x;Node*h=NULL;do{printf("\n1.Array push 2.Array pop 3.Array display 4.Linked push 5.Linked pop 6.Linked display 0.Exit\nChoice: ");scanf("%d",&ch);
 if(ch==1){if(top==99)puts("Array stack full.");else{printf("Value: ");scanf("%d",&x);a[++top]=x;}}else if(ch==2){if(top<0)puts("Array stack empty.");else printf("Popped: %d\n",a[top--]);}else if(ch==3){printf("Array stack (top to bottom):");for(x=top;x>=0;x--)printf(" %d",a[x]);puts("");}
 else if(ch==4){Node*t=malloc(sizeof(Node));printf("Value: ");scanf("%d",&x);t->x=x;t->n=h;h=t;}else if(ch==5){if(!h)puts("Linked stack empty.");else{Node*t=h;printf("Popped: %d\n",t->x);h=h->n;free(t);}}else if(ch==6){Node*t=h;printf("Linked stack (top to bottom):");while(t){printf(" %d",t->x);t=t->n;}puts("");}
 }while(ch!=0);while(h){Node*t=h;h=h->n;free(t);}return 0;}
