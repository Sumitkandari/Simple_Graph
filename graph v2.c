
#include<stdio.h>
#include<malloc.h>
struct Graph
{
    int V,E,adj[4][5];
};
   int u,v,i;
struct Graph *adjmatrixgraph()
{

    struct Graph *g=(struct Graph*)malloc(sizeof(struct Graph));
    printf("enter no of vertices and edges");
    scanf("%d",&g->V);

    g->adj[g->V][g->V];
    for(u=0;u<g->V;u++)
    {
        for(v=0;v<g->V;v++)
        {
            g->adj[u][v]=0;
        }
    }
    int ans;
    do{
        printf("Enter Edges : ");
        scanf("%d",&g->E);

        printf("\n enter node no in pair that connected an edge \n  ");
    for(i=0;i<g->E;i++)
  {
    scanf("%d%d",&u,&v);
    g->adj[u][v]=1;
    g->adj[v][u]=1;
    }
    printf("Do you want more Edges? ");
    scanf("%d",&ans);

    }while(ans==1);
   // if(g){
     //   printf("No Memory Created");
    //}



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
        for(y=0;y<g->V;y++)
        {
            printf("  %d",g->adj[x][y]);

        }
        printf("\n");
    }
    return 0;
}








