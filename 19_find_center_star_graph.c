#include "../../common/student_info.h"

int main(void){student_info();int n,m,i,u,v,deg[1000]={0};printf("Vertices and edges: ");scanf("%d%d",&n,&m);if(n<1||n>1000||m<0||m>100000)return 1;for(i=0;i<m;i++){scanf("%d%d",&u,&v);if(u>=0&&u<n&&v>=0&&v<n){deg[u]++;deg[v]++;}}for(i=0;i<n;i++)if(deg[i]==n-1){printf("Center of star graph: %d\n",i);return 0;}puts("Graph is not a star graph.");return 0;}
