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
#define prime 119

int numbdigit(int n){
    int count = 0;
    while(n > 10){
        n = n / 10;
        count++;
    }
    
    return count;
}

int F(vector<int> &arr, int size) 
{ 
    int right_mul = 1, left_mul = 1; 
    for (int i = 1; i < size; i++) 
        right_mul *= arr[i]; 
        
        
    for (int i = 0, j = 1; j < size; i++, j++) { 
        right_mul /= arr[j]; 
        left_mul *= arr[i]; 
  
        if (left_mul == right_mul) 
            return arr[i + 1]; 
    } 
  
    return -1; 
} 
    

int32_t main()
{
    FIO;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;
    if(t < 100){
        cout<<"Normal Number";
    }else{
        
         vector<int> res;
        int num = t;
         while(num>0)
        {
           res.push_back(num%10);
           num/=10;
        }
        int sz= numbdigit(t);
        if(F(res , sz) == 1  && sz % 2 == 0){
            cout<<"Pseudo Uncanny"<<endl;
        }else if(F(res , sz) == 1){
            cout<<"Truly Uncanny"<<endl;
        }else{
            cout<<"Normal Number";   
        }
        
       

        
    }
  return 0;
}
