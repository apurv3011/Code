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


class Node{

public:
  Node* next;
  int val;

  Node(){
    this->val = 0;
    this->next =NULL;

  }
  Node(int val){
    this->val = val;
    this->next =NULL;

  }

};

Node* top;

void push(int val){
  if(top == NULL){
    Node* head = new Node(val);
    top = head;
  }else{
    Node* temp = new Node(val);
    temp->next = top;
    top = temp;
  }
}

void pop(){
  if(top == NULL){
    return;
  }else{
    Node* t = top;
    top = top->next;
    free(t);
  }
}

int peek(){
  return top->val;
}
int32_t main()
{
    // class *stack s = new stack();
    push(10);
    push(20);

    cout<<peek();
    push(30);
    pop();
    pop();
    // s.pop();
    cout<<peek();


    return 0;
}
