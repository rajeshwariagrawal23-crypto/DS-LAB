#include "../../common/student_info.h"

typedef struct Node{int x;struct Node*l,*r;}Node;
Node*insert(Node*t,int x){if(!t){t=calloc(1,sizeof(Node));t->x=x;}else if(x<t->x)t->l=insert(t->l,x);else if(x>t->x)t->r=insert(t->r,x);return t;}
Node*minnode(Node*t){while(t&&t->l)t=t->l;return t;}
Node*del(Node*t,int x){if(!t)return NULL;if(x<t->x)t->l=del(t->l,x);else if(x>t->x)t->r=del(t->r,x);else{if(!t->l){Node*r=t->r;free(t);return r;}if(!t->r){Node*l=t->l;free(t);return l;}Node*s=minnode(t->r);t->x=s->x;t->r=del(t->r,s->x);}return t;}
int search(Node*t,int x){while(t){if(t->x==x)return 1;t=x<t->x?t->l:t->r;}return 0;}
void inorder(Node*t){if(t){inorder(t->l);printf("%d ",t->x);inorder(t->r);}}
int main(void){student_info();Node*t=NULL;int n,x,i,ch;printf("Initial number of keys: ");scanf("%d",&n);printf("Keys: ");for(i=0;i<n;i++){scanf("%d",&x);t=insert(t,x);}do{printf("\n1.Insert 2.Delete 3.Search 4.Display 5.Maximum node 0.Exit\nChoice: ");scanf("%d",&ch);if(ch>=1&&ch<=3){printf("Key: ");scanf("%d",&x);if(ch==1)t=insert(t,x);else if(ch==2)t=del(t,x);else printf("%s\n",search(t,x)?"Found":"Not found");}else if(ch==4){inorder(t);puts("");}else if(ch==5){if(!t)puts("Tree empty.");else{Node*p=t;while(p->r)p=p->r;printf("Maximum node: %d\n",p->x);}}}while(ch!=0);return 0;}
