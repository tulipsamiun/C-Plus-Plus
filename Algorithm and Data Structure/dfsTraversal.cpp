#include <iostream>
#include<vector>
using namespace std;
vector<int> graph[5];
bool visited[5];



void dfs(int source){
    visited[source]=1;
    //cout<< source<< " ";
    for(int i=0;i<graph[source].size();i++){
        int next =graph[source][i];
        if(visited[next]==0)
        dfs(next);
    }
}

int main()
{
int nodes, edges;
cin>>nodes>>edges;
for(int  i=0;i<edges; i++){
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}
int n;
cout<<"Enter start e node";
cin>>n;
dfs(n);
for(int i=0; i<nodes;i++){
    if(visited[i]==1)
    cout<< i<< " ";
}

return 0;

    
    
    
}


