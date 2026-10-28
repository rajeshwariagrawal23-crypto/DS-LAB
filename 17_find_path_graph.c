#include "../../common/student_info.h"

#define N 100
int g[N][N],seen[N],n;
int dfs(int u,int d){if(u==d)return 1;seen[u]=1;for(int v=0;v<n;v++)if(g[u][v]&&!seen[v]&&dfs(v,d))return 1;return 0;}
int main(void){student_info();int m,i,u,v,s,d;printf("Vertices: ");scanf("%d",&n);if(n<1||n>N)return 1;printf("Edges: ");scanf("%d",&m);for(i=0;i<m;i++){scanf("%d%d",&u,&v);if(u>=0&&u<n&&v>=0&&v<n)g[u][v]=1;}printf("Source and destination: ");scanf("%d%d",&s,&d);if(s<0||s>=n||d<0||d>=n)return 1;printf("Path exists: %s\n",dfs(s,d)?"true":"false");return 0;}
