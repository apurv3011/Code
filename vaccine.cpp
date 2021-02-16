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
int32_t main()
{
    FIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int d1 ,d2, v1 ,v2, p;
    cin>>d1;
    cin>>v1;
    cin>>d2;
    cin>>v2;
    cin>>p;
    int days = 0;
    if(d1 == d2){
      days += d1 - 1;
      int tot = v1 + v2;
      days += p / tot;

      if(p % tot == 0)
        cout<<days<<endl;
      else
        cout<<(days + 1)<<endl;
    }else{
      int minval = min(d1 , d2);
      if(d2 < d1){
        days += d2 - 1;
        int diff = d1 - d2;
        days += diff;
        p = p - v2 * diff;
        if(p <= 0){
          cout<<days<<endl;
          return 0;
        }else{
          days += p/(v1 + v2);
          if(p % (v1 + v2) == 0){
                      cout<<days<<endl;
                    return 0;
                    }else{
            cout<<days+1<<endl;
            return 0;
          }
          }


      }else{
        days += d1 - 1;

        // days += d2 - 1;
        int diff = d2 - d1;
        days += diff;
        p = p - v1 * diff;
        if(p <= 0){
          cout<<days<<endl;
          return 0;
        }else{
          days += p/(v1 + v2);
          if(p % (v1 + v2) == 0){
            cout<<days<<endl;
          return 0;
          }else{
            cout<<days+1<<endl;
          return 0;}
        }
    }
  }

    return 0;
}
