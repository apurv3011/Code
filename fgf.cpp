// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution{   
public:

void dfs(int src , vector<vector<int>> &Edges , vector<int> &values , vector<bool> &visited , int &sum){
    
    visited[src] = true;
    
    sum += values[src - 1];
    
    for(auto node : Edges[src]){
        
        if(visited[node] == false)
        dfs(node , Edges , values , visited , sum);
    }
    
}
    long long solve(int V,int E,vector<int> Values,vector<vector<int>> Edges){
        
        vector<bool> visited(100005+2, false);
        long long maxValsum = INT_MIN;
        
        for(int node = 1;node <=V;node++){
            if(visited[node] == false){
                int sum = 0;
                dfs(node , Edges , Values , visited , sum);
                
                
                
                if((long long)sum > maxValsum){
                    maxValsum = (long long)sum;
                }
            }
        }
        
        return maxValsum;
    }
};


// { Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int V,E;
      cin>>V>>E;
      vector<int> Values(V);
      for(int i=0;i<V;i++)
        cin>>Values[i];
      vector<vector<int>> Edges(E,vector<int>(2));
      for(int i=0;i<E;i++)
        cin>>Edges[i][0]>>Edges[i][1];
      Solution obj;
      long long answer=obj.solve(V,E,Values,Edges);
      cout<<answer<<endl;
  }
}  // } Driver Code Ends