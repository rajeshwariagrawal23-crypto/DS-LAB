#include "../../common/student_info.h"

typedef struct Node{int data;struct Node*next;}Node;
void show(Node*h){printf("List:");while(h){printf(" %d",h->data);h=h->next;}puts(" -> NULL");}
int main(void){student_info();Node*h=NULL;int ch,v,pos,i;do{printf("\n1.Insert beginning 2.Insert end 3.Insert position 4.Delete beginning 5.Delete end 6.Delete position 7.Display 0.Exit\nChoice: ");scanf("%d",&ch);
 if(ch>=1&&ch<=3){Node*n=malloc(sizeof(Node));if(!n)return 1;printf("Value: ");scanf("%d",&v);n->data=v;n->next=NULL;if(ch==1){n->next=h;h=n;}else if(ch==2){if(!h)h=n;else{Node*t=h;while(t->next)t=t->next;t->next=n;}}else{printf("Position (1-based): ");scanf("%d",&pos);if(pos<=1){n->next=h;h=n;}else{Node*t=h;for(i=1;t&&i<pos-1;i++)t=t->next;if(!t){puts("Invalid position.");free(n);}else{n->next=t->next;t->next=n;}}}}
 else if(ch>=4&&ch<=6){if(!h){puts("List empty.");continue;}Node*t=h,*prev=NULL;if(ch==4){h=h->next;free(t);}else if(ch==5){while(t->next){prev=t;t=t->next;}if(prev)prev->next=NULL;else h=NULL;free(t);}else{printf("Position (1-based): ");scanf("%d",&pos);if(pos<=1){h=t->next;free(t);}else{for(i=1;t&&i<pos;i++){prev=t;t=t->next;}if(!t)puts("Invalid position.");else{prev->next=t->next;free(t);}}}}
 else if(ch==7)show(h);else if(ch!=0)puts("Invalid choice.");if(ch!=0)show(h);
 }while(ch!=0);while(h){Node*t=h;h=h->next;free(t);}return 0;}
