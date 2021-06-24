#include<stdio.h>
int V;
void printSolution(int reach[][V]);
void transitiveClosure(int graph[][V])
{
    int reach[V][V], i, j, k;
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            reach[i][j] = graph[i][j];
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                reach[i][j] = reach[i][j] ||
                  (reach[i][k] && reach[k][j]);
            }
        }
    }
    printSolution(reach);
}
void printSolution(int reach[][V])
{
    printf ("Output:\n");
    printf("closure of the given graph\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
              if(i == j)
                printf("1 ");
              else
                printf ("%d ", reach[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter number of vertices\n");
    scanf("%d",&V);
    int graph[V][V];
    printf("Enter the matrix:\n");
    for(int i=0;i<V;i++){
      for(int j=0;j<V;j++){
        scanf("%d",&graph[i][j]);
      }
    }
    transitiveClosure(graph);
    return 0;
}
