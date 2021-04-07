#include<bits/stdc++.h>
using namespace std;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool solve(string &str  ,int n , int k){

  int count = 0 , mxcnt = -434;
  for(int i = 0; i < n;i++)
  {
     count = 0;
    if(str[i] == '*'){

      while(i < n && str[i] == '*') count++ , i++;
    }
    if(count == k){
     return true;
    }
  }

  return false;


}
int32_t main()
{
    

    FIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

  w(x){
    int n , k;
    cin>>n>>k;
    string str;
    cin>>str;

cout<<(solve(str , n , k)== true ? "YES":"NO")<<endl;
  }

  



    return 0;
}
