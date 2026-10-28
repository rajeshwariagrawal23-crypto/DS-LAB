#include "../../common/student_info.h"

typedef struct Node{int x;struct Node*l,*r;}Node;
Node*insert(Node*t,int x){if(!t){t=calloc(1,sizeof(Node));t->x=x;}else if(x<t->x)t->l=insert(t->l,x);else if(x>t->x)t->r=insert(t->r,x);return t;}
void inorder(Node*t){if(t){inorder(t->l);printf("%d ",t->x);inorder(t->r);}}
void preorder(Node*t){if(t){printf("%d ",t->x);preorder(t->l);preorder(t->r);}}
void postorder(Node*t){if(t){postorder(t->l);postorder(t->r);printf("%d ",t->x);}}
int max(int a,int b){return a>b?a:b;}
int height(Node*t,int*d){if(!t)return 0;int l=height(t->l,d),r=height(t->r,d);if(l+r>*d)*d=l+r;return 1+max(l,r);}
void free_tree(Node*t){if(t){free_tree(t->l);free_tree(t->r);free(t);}}
int main(void){student_info();Node*t=NULL;int n,x,i,d=0;printf("Number of BST keys: ");scanf("%d",&n);printf("Enter keys: ");for(i=0;i<n;i++){scanf("%d",&x);t=insert(t,x);}printf("Inorder: ");inorder(t);printf("\nPreorder: ");preorder(t);printf("\nPostorder: ");postorder(t);height(t,&d);printf("\nDiameter (edges): %d\n",d);free_tree(t);return 0;}
