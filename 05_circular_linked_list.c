#include "../../common/student_info.h"

typedef struct Node{int data;struct Node*next;}Node;
void display(Node*h){if(!h){puts("List empty.");return;}Node*t=h;printf("Circular list:");do{printf(" %d",t->data);t=t->next;}while(t!=h);puts(" -> back to head");}
int main(void){student_info();Node*h=NULL;int ch,v,pos,i;do{printf("\n1.Insert beginning 2.Insert end 3.Insert position 4.Delete beginning 5.Delete end 6.Delete position 7.Display 0.Exit\nChoice: ");scanf("%d",&ch);
 if(ch>=1&&ch<=3){Node*n=malloc(sizeof(Node));printf("Value: ");scanf("%d",&v);n->data=v;if(!h){h=n;n->next=h;}else if(ch==1){Node*t=h;while(t->next!=h)t=t->next;n->next=h;t->next=n;h=n;}else if(ch==2){Node*t=h;while(t->next!=h)t=t->next;t->next=n;n->next=h;}else{printf("Position: ");scanf("%d",&pos);if(pos<=1){Node*t=h;while(t->next!=h)t=t->next;n->next=h;t->next=n;h=n;}else{Node*t=h;for(i=1;i<pos-1&&t->next!=h;i++)t=t->next;n->next=t->next;t->next=n;}}}
 else if(ch>=4&&ch<=6){if(!h){puts("List empty.");continue;}if(ch==4||ch==5){Node*t=h;if(t->next==h){free(t);h=NULL;}else if(ch==4){Node*last=h;while(last->next!=h)last=last->next;h=h->next;last->next=h;free(t);}else{Node*prev=NULL;while(t->next!=h){prev=t;t=t->next;}prev->next=h;free(t);}}else{printf("Position: ");scanf("%d",&pos);if(pos<=1){Node*t=h;if(t->next==h){free(t);h=NULL;}else{Node*last=h;while(last->next!=h)last=last->next;h=h->next;last->next=h;free(t);}}else{Node*t=h,*prev=NULL;for(i=1;i<pos&&t->next!=h;i++){prev=t;t=t->next;}if(!prev)puts("Invalid position.");else{prev->next=t->next;free(t);}}}}
 else if(ch==7)display(h);else if(ch!=0)puts("Invalid choice.");if(ch!=0)display(h);
 }while(ch!=0);if(h){Node*t=h->next;while(t!=h){Node*n=t->next;free(t);t=n;}free(h);}return 0;}
