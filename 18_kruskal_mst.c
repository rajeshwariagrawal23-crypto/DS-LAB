#include "../../common/student_info.h"

typedef struct{int u,v,w;}Edge;
int cmp(const void*a,const void*b){return ((Edge*)a)->w-((Edge*)b)->w;}
int parent[1000];int find(int x){while(parent[x]!=x){parent[x]=parent[parent[x]];x=parent[x];}return x;}
int main(void){student_info();int n,m,i,total=0,used=0;Edge e[5000];printf("Vertices and edges: ");scanf("%d%d",&n,&m);if(n<1||n>1000||m<0||m>5000)return 1;for(i=0;i<m;i++)scanf("%d%d%d",&e[i].u,&e[i].v,&e[i].w);for(i=0;i<n;i++)parent[i]=i;qsort(e,m,sizeof(Edge),cmp);for(i=0;i<m;i++){int a=find(e[i].u),b=find(e[i].v);if(a!=b){parent[a]=b;total+=e[i].w;used++;printf("%d - %d : %d\n",e[i].u,e[i].v,e[i].w);}}if(used==n-1)printf("MST total weight: %d\n",total);else puts("Graph disconnected: no spanning tree.");return 0;}
