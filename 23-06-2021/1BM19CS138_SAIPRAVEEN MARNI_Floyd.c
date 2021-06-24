#include<stdio.h>
#define INF 99999
int V;
void printSolution(int dist[][V]);
void floyd(int graph[][V])
{
int dist[V][V], i, j, k;
for (i = 0; i < V; i++)
for (j = 0; j < V; j++)
dist[i][j] = graph[i][j];
for (k = 0; k < V; k++)
{
for (i = 0; i < V; i++)
{
for (j = 0; j < V; j++)
{
if (dist[i][k] + dist[k][j] < dist[i][j])
dist[i][j] = dist[i][k] + dist[k][j];
}
}
}
printSolution(dist);
}
void printSolution(int dist[][V])
{
printf ("Output \n");
for (int i = 0; i < V; i++)
{
for (int j = 0; j < V; j++)
{
if (dist[i][j] == INF)
printf("%7s", "INF");
else
printf ("%7d", dist[i][j]);
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
floyd(graph);
return 0;
}
