
#include<stdio.h>
#include<malloc.h>
struct Graph
{
    int V,E,**adj;
};
   int u,v,i;
struct Graph *adjmatrixgraph()
{

    struct Graph *g=(struct Graph*)malloc(sizeof(struct Graph));
    printf("enter no of vertices and edges");
    scanf("%d%d",&g->V,&g->E);
    printf("\n %d %d \n ",g->V,g->E);
    g->adj=(int*)malloc(sizeof(int)*(g->V*g->V));
    printf("ener");
    for(u=0;u<g->V;u++)
    {
        for(v=0;v<g->E;v++)
        {
            g->adj[u][v]=0;
        }
    }
        printf("\n enter node no in pair that connected an edge \n  ");
    for(i=0;i<g->E;i++)
  {
    scanf("%d%d",&u,&v);
    g->adj[u][v]=1;
    g->adj[v][u]=1;
    }
    return g;
}
int main()
{
    struct Graph *g=adjmatrixgraph();
    int x,y;
    printf("\n   ");
    for(x=0;x<g->V;x++)
        printf("%d  ",x);
    printf("\n");
    for(x=0;x<g->V;x++)
    {
         printf("%d",x);
        for(y=0;y<g->E;y++)
        {
            printf("  %d",g->adj[x][y]);

        }
        printf("\n");
    }
    return 0;
}



