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
#define max 101


class Queue{
private:
  int arr[max];
  int rear , front;

public:
  Queue(){
    front = -1;
    rear = -1;
  }

  bool isEmpty(){
      if (rear == -1 && front == -1)
      {
        return true;
      }

      return false;
  }

  bool isFull(){

    return (rear + 1) %max == front ? true  :false;

  }

  void Enqueue(int el){

    if(isFull()){
      cout<<"Queue overflow"<<endl;
      return;
    }
    if(isEmpty()){
      front = 0,rear = 0;
    }else{
      rear = (rear + 1) % max;
    }

    arr[rear] = el;

  }


  void Dequeue(){
    if(isEmpty()){
      cout<<"Queue Underflow"<<endl;
      return;
    }if(rear == front){
      rear = -1 ,front = -1;
    }else{
      front = (front + 1) % max;
    }
  }


  int Front(){
    if(front == -1){
      cout<<"Queue is empty";
      return 0;
    }else{
      return arr[front];
    }
  }


  void print(){
    int count = (rear + max - front) % max + 1;
    for (int i = 0; i < count; ++i)
    {

      int idx  = (front + i) % max;
      cout<<arr[idx]<<" ";
      /* code */
    }cout<<endl;
  }





};


int32_t main()
{
    FIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    Queue Q; // creating an instance of Queue. 
   Q.Enqueue(2);  Q.print();  
   Q.Enqueue(4);  Q.print();  
   Q.Enqueue(6);  Q.print();
   Q.Dequeue();   Q.print();
   Q.Enqueue(8);  Q.print();


    return 0;
}
