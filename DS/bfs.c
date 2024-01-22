#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100

void bfs(int graph[MAX_VERTICES][MAX_VERTICES],int vertex, bool visited[MAX_VERTICES], int numVertices)
{
bool queue[MAX_VERTICES];
int front=0,rear=-1;
visited[vertex]=true;
queue[++rear]=vertex;
while(front<=rear)
{
  int newvertex=queue[front++];
  printf("%d", newvertex);
  
  for(int i=0;i<numVertices;i++)
  {
    if(graph[newvertex][i]==1&&!visited[i])
    {
      visited[i]=true;
      queue[++rear]=i;
      }
    }
 }
}
int main()
{
  int numVertices;
  printf("enter the num of vertices:");
  scanf("%d",&numVertices);
  
int graph[MAX_VERTICES][MAX_VERTICES];
printf("enter adjacency matrix:\n");
for(int i=0;i<numVertices;i++)
{
 for(int j=0;j<numVertices;++j)
 {
   scanf("%d",&graph[i][j]);
   }
 }
bool visited[MAX_VERTICES];
for(int i=0;i<numVertices;i++)
{
  visited[i]=false;
}

int vertex=0;
printf("BFS traverse :");
bfs(graph,vertex,visited,numVertices);
return 0;
}

 
