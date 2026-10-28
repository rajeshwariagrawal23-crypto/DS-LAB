#include "../../common/student_info.h"

typedef struct Node{int data;struct Node*prev,*next;}Node;
void display(Node*h){printf("List:");while(h){printf(" %d",h->data);h=h->next;}puts(" <-> NULL");}
int main(void){student_info();Node*h=NULL;int ch,v,pos,i;do{printf("\n1.Insert beginning 2.Insert end 3.Insert position 4.Delete beginning 5.Delete end 6.Delete position 7.Display 0.Exit\nChoice: ");scanf("%d",&ch);
 if(ch>=1&&ch<=3){Node*n=calloc(1,sizeof(Node));printf("Value: ");scanf("%d",&v);n->data=v;if(ch==1){n->next=h;if(h)h->prev=n;h=n;}else if(ch==2){if(!h)h=n;else{Node*t=h;while(t->next)t=t->next;t->next=n;n->prev=t;}}else{printf("Position: ");scanf("%d",&pos);if(pos<=1){n->next=h;if(h)h->prev=n;h=n;}else{Node*t=h;for(i=1;t&&i<pos-1;i++)t=t->next;if(!t){puts("Invalid position.");free(n);}else{n->next=t->next;n->prev=t;if(t->next)t->next->prev=n;t->next=n;}}}}
 else if(ch>=4&&ch<=6){if(!h){puts("List empty.");continue;}Node*t=h;if(ch==4){h=h->next;if(h)h->prev=NULL;free(t);}else{if(ch==6){printf("Position: ");scanf("%d",&pos);for(i=1;t&&i<pos;i++)t=t->next;}else while(t->next)t=t->next;if(!t)puts("Invalid position.");else{if(t->prev)t->prev->next=t->next;else h=t->next;if(t->next)t->next->prev=t->prev;free(t);}}}
 else if(ch==7)display(h);else if(ch!=0)puts("Invalid choice.");if(ch!=0)display(h);
 }while(ch!=0);while(h){Node*t=h;h=h->next;free(t);}return 0;}
