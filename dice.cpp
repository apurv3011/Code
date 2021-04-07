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

int solve(int n){
  std::vector<int> v = {0 , 20 , 18 , 15 , 11 , 6 , 0 };
   if(n <= 4){
        if(n == 1)
        {
          // v[1] = 20;
          return 20;
          
        }else if(n == 2){
          // v[2] = 18;
          return 2 * v[2];
        }
        else if(n == 3){
          // v[3] = 15;
          return 2 * v[2] + 15;
          }else if(n == 4){
            return 4 * v[3];
          }

    }
}

int32_t main()
{
    FIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    w(x){
       int n;
       cin>>n;
       cout<<solve(n)<<endl;
    }



    return 0;
}
