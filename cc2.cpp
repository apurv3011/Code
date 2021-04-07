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

// std::vector<int>  SieveOfEratosthenes(int n) 
// { 
//     // Create a boolean array "prime[0..n]" and initialize 
//     // all entries it as true. A value in prime[i] will 
//     // finally be false if i is Not a prime, else true. 
//     bool prime[n+1]; 
//     memset(prime, true, sizeof(prime)); 
//   std::vector<int> arr(0,n);
//     for (int p=2; p*p<=n; p++) 
//     { 
//         // If prime[p] is not changed, then it is a prime 
//         if (prime[p] == true) 
//         { 
//             // Update all multiples of p greater than or  
//             // equal to the square of it 
//             // numbers which are multiple of p and are 
//             // less than p^2 are already been marked.  
//             for (int i=p*p; i<=n; i += p) 
//                 prime[i] = false; 
//         } 
//     } 
  
//     // Print all prime numbers 
//     for (int p=2; p<=n; p++) {
//         if (prime[p]){ 
//            arr.push_back(p);
//         }
//     }

//     return arr;
// }

int32_t main()
{
    FIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
  

  string str;
  cin>>str;
  cout<<str;
    return 0;
}
