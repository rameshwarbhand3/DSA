#include<iostream>
#include"Queue.h"
using namespace std;
void Bfs(int G[] ,int start,int n){
    int i=start,j,n;
    Queue q;
    int visited[7]={0};
    printf("%d",i);
    visited[i]=1;
    enqueue(i);
    while(!isempty(q)){
        i=dequeue();
        for(j=1;j<n;j++){
            if(G[i][j]==1 && visited[i]==0){
                printf("%d",j);
                visited[j]=1;
                enqueue(j);
            }
        }

    }
}
void Dfs(int G[][7],int start,int n){
    static int visited[7]={0};
    if(visited[start]==0){
        printf("%d"),start);
        for(j=1;j<n;j++){
            if(G[start][j]==1 && visited[j]==0){
                Dfs(G,j,n);
            }
        }
    }

}
int main(){
    int G[7][7]={0,0,0,0,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,0,0,1,0,0},
                {0,1,0,0,1,0,0},
                {0,0,1,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0};
        Bfs(G,1,7);
        return(0);
}