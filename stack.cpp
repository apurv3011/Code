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
class Stack{
  int top;
public:
std::vector<int> st;
  Stack(){
    top = -1;
  }

  void  push(int el){
    top++;
    st.push_back(el);

    return;
  }

  void pop(){
    if(top == -1){
      cout<<"Stack Underflow";
      return;
    }else{
       st.erase(st.begin() + top);
       cout<<"Popped from stack";
       top--;
    }
  }

  int peek(){
if(top < 0){
  cout<<"stack is isEmpty";
  return 0;
}
    return st[top];
  }

  bool isEmpty(){
    if(st.size() == 0){
      return true;
    }

    return false;
  }


};

int32_t main()
{
    // /ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
    s.pop();
    cout  << " Popped from stack\n"<<s.peek()<<s.isEmpty(;)
 


 
    return 0;
}
