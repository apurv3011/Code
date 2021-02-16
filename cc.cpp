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


    w(x){
       int n;
       cin>>n;
       std::vector<int> arr;
       for(int i=0;i<n;i++){
        int ex;
        cin>>ex;
        arr.push_back(ex);
       }
       int xburner = 0 , yburner = 0;
       sort(arr.begin() , arr.end() , greater<int>());
       xburner = arr[0];
       for(int j = 1;j<n;j++){
        if(yburner <= xburner){
            yburner += arr[j];
        }else{
            xburner += arr[j];
        }
       }

       cout<<max(xburner , yburner)<<endl;


    }
    return 0;
}
