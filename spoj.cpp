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
#define in_range(x, y, r, c) (x < r && y < c && x >= 0 && y >= 0)

char mat[51][51];
int dis[51][51] {0};
int r, c;
void dfs(int i, int j, int dist){
	int x, y;
	dis[i][j] = dist+1;
	
	x = i-1;
	y = j-1;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
	x = i-1;
	y = j;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
	x = i-1;
	y = j+1;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
	x = i;
	y = j-1;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
	x = i;
	y = j+1;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
	x = i+1;
	y = j-1;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
	x = i+1;
	y = j;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
	x = i+1;
	y = j+1;
	if(in_range(x, y, r, c) && mat[x][y] == mat[i][j] + 1 && dis[x][y] < dis[i][j] + 1){
		dfs(x, y, dis[i][j]);
	}
	
}



int32_t main()
{
    FIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int max, tc=0;
	
	while(true){
		scanf("%d%d", &r, &c);
		if(!r && !c)
			break;
		tc++;
		for(int i=0;i<r;i++){
			scanf("%s", mat[i]);
			for(int j=0;j<c;j++)
				dis[i][j] = 0;
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(mat[i][j] == 'A' && dis[i][j] == 0)
					dfs(i, j, 0);
			}
		}
		max = dis[0][0];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				if(max < dis[i][j])
					max = dis[i][j]; 
		}
		printf("Case %d: %d\n", tc, max);
	}
    return 0;
}
