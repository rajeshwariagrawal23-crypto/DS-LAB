#include "../../common/student_info.h"

typedef struct Term{int coeff,exp;struct Term*next;}Term;
void addterm(Term**h,int c,int e){Term*t=*h,*p=NULL;while(t&&t->exp>e){p=t;t=t->next;}if(t&&t->exp==e){t->coeff+=c;return;}Term*n=malloc(sizeof(Term));n->coeff=c;n->exp=e;n->next=t;if(p)p->next=n;else*h=n;}
void readpoly(Term**h){int n,c,e,i;printf("Number of terms: ");scanf("%d",&n);for(i=0;i<n;i++){printf("Coefficient and exponent: ");scanf("%d%d",&c,&e);addterm(h,c,e);}}
void printpoly(Term*h){if(!h){printf("0");return;}for(;h;h=h->next)printf("%s%d*x^%d",h->coeff>=0&&h->exp!=0?"+":"",h->coeff,h->exp);}
int main(void){student_info();Term*a=NULL,*b=NULL,*r=NULL,*t;puts("Polynomial A");readpoly(&a);puts("Polynomial B");readpoly(&b);for(t=a;t;t=t->next)addterm(&r,t->coeff,t->exp);for(t=b;t;t=t->next)addterm(&r,t->coeff,t->exp);printf("A = ");printpoly(a);printf("\nB = ");printpoly(b);printf("\nA + B = ");printpoly(r);puts("");return 0;}
