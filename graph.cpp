#include <bits/stdc++.h>
using namespace std;

void addEdge(vector <pair<int, int> > adj[], int u, 
                                     int v, int wt) 
{ 
    adj[u].push_back(make_pair(v, wt)); 
    adj[v].push_back(make_pair(u, wt)); 
} 
  
// Print adjacency list representaion ot graph 
void printGraph(vector<pair<int,int> > adj[], int V) 
{ 
    int v, w; 
    for (int u = 0; u < V; u++) 
    { 
        cout << "Node " << u << " makes an edge with \n"; 
        for (auto it = adj[u].begin(); it!=adj[u].end(); it++) 
        { 
            v = it->first; 
            w = it->second; 
            cout << "\tNode " << v << " with edge weight ="
                 << w << "\n"; 
        } 
        cout << "\n"; 
    } 
} 
  
int main(int argc, char const *argv[])
{
	Graph g;
	g.AddEdge(0 , 1);
	g.AddEdge(0 , 2);
	g.AddEdge(0 , 3);
	g.AddEdge(1 , 3);
	g.AddEdge(3 , 2);
	// g.AddEdge(0 , 1);
	g.printGraph();
	return 0;
}