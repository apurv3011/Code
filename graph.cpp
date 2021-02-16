#include <bits/stdc++.h>
using namespace std;

class Graph{
public:
	std::map<int, list<int>> adjList;
	Graph(){

	}

	void AddEdge(int u , int v , bool bidir = false){
		adjList[u].push_back(v);
		if(bidir == true){
			adjList[v].push_back(u);
		}
	}

	void printGraph(){
		for (pair<int , list<int>> row : adjList)
		{
			int key = row.first;
			cout<<key<<"->";
			for (auto elemnt : row.second)
			 {
			 	cout<<elemnt<<" ";
			 } cout<<endl;
			/* code */
		}
	}
};
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