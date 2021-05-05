#include<iostream>
using namespace std;
#include<vector>
#include<queue>

vector<int> v;
vector< vector<int>> g;


void dfsT(int b) {
   // declear a queue to store all the nodes connected to b 
	std::queue<int> q;

	//push b intoqueqe
	q.push(b);
    //make b as visited
	v[b]= true;
	cout<<"The BFS Traversal is..";


	while (!q.empty()) {
		// picc root
		int fnt = q.front();
		//pop front
		q.pop();
		
		for(auto j=g[fnt].begin(); j!=g[fnt].end(); j++){
		    if(!v[*j]){
		        v[*j]=true;
		        q.push(*j);
		    }
		}

		std::cout << fnt <<" ";
	

	}
	//;
}
void makeEdge(int a, int b){
    g[a].push_back(b);///bdge from a to b directed graph
}
int main(){
    int n,a;
    cout<<"Enter No of vertices";
    cin>>n;
    cout<<"enter no edges";
    cin>>a;
    
    v.assign(n,false);
    g.assign(n, vector<int>());
    
    
    int i,l,m;
    
    for(i=0;i<a;i++){
        cin>>l>>m;
    makeEdge(l,m);
    }
    for(int i=0;i<n;i++){
        //if the node is not visited
        if(!v[i]){
            dfsT(i);
        }
    }
    
    cout<<"\n\n\n";
    return 0;
        
}
