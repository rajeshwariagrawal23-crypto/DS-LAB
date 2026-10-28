#include "../../common/student_info.h"

#define N 50
int g[N][N],vis[N],n;
void dfs(int u){int v;vis[u]=1;printf("%d ",u);for(v=0;v<n;v++)if(g[u][v]&&!vis[v])dfs(v);}
void bfs(int s){int q[N],f=0,r=0,v;memset(vis,0,sizeof(vis));q[r++]=s;vis[s]=1;while(f<r){int u=q[f++];printf("%d ",u);for(v=0;v<n;v++)if(g[u][v]&&!vis[v]){vis[v]=1;q[r++]=v;}}}
int path(int s,int d){int q[N],f=0,r=0,v,prev[N];for(v=0;v<n;v++)prev[v]=-1;q[r++]=s;prev[s]=s;while(f<r){int u=q[f++];for(v=0;v<n;v++)if(g[u][v]&&prev[v]==-1){prev[v]=u;q[r++]=v;}}if(prev[d]==-1)return 0;printf("Path:");for(v=d;v!=s;v=prev[v])printf(" %d<-",v);printf(" %d\n",s);return 1;}
int main(void){student_info();int m,i,u,v,s,d;printf("Vertices (0 to n-1): ");scanf("%d",&n);if(n<1||n>N)return 1;printf("Edges: ");scanf("%d",&m);for(i=0;i<m;i++){scanf("%d%d",&u,&v);if(u>=0&&u<n&&v>=0&&v<n)g[u][v]=g[v][u]=1;}printf("Start vertex: ");scanf("%d",&s);if(s<0||s>=n)return 1;memset(vis,0,sizeof(vis));printf("DFS: ");dfs(s);puts("");printf("BFS: ");bfs(s);puts("");printf("Destination vertex for path: ");scanf("%d",&d);if(d<0||d>=n)return 1;if(!path(s,d))puts("No path exists.");return 0;}
