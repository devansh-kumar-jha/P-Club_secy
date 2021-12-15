#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long int

#define pb push_back
#define pf push_front
#define mp make_pair
#define mii map<int,int>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool>
#define di deque<int>
#define qi queue<int>
#define si stack<int>
#define sii set<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define setbits(x) _builtin_popcountll(x)
#define zrobits(x) _builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(t) int t;  cin>>t;  while(t--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
template<class T,class V> void _print(pair<T,V> p) {cerr<<"{"; _print(p.first);cerr<<","; _print(p.second);cerr<<"}";}
template<class T>void _print(vector<T> v) {cerr<<" [ "; for (T i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T>void _print(set<T> v) {cerr<<" [ "; for (T i:v){_print(i); cerr<<" ";}cerr<<"]";}
template<class T>void _print(multiset<T> v) {cerr<< " [ "; for (T i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T,class V>void _print(map<T, V> v) {cerr<<" [ "; for(auto i:v) {_print(i);cerr<<" ";} cerr<<"]";}

void dkj()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
}

int check(vector<int>& arr,int n,int i)
{
    bool f1=(i==0),f2=(i==(n-1));
    if(f1==true && arr[i]>arr[i+1]) return 1;
    if(f1==true && arr[i]<=arr[i+1]) return 0;
    if(f2==true && arr[i]>=arr[i-1]) return 1;
    if(f2==true && arr[i]<arr[i-1]) return 0;
    if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) return 1;
    if(arr[i]<=arr[i-1] && arr[i]<=arr[i+1]) return 0;
    return 2;
}

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    if(n==1) return 0;
    int ans=0;
    int last=0;
    int flag=0;
    for(int i=0;i<n;i++) {
        if(flag==0) {
            if(check(prices,n,i)==0) {
                flag=1; last=prices[i];
            }
        }
        else {
            if(check(prices,n,i)==1) {
                flag=0; 
                ans+=(prices[i]-last);
                last=0;
            }
        }
    }
    return ans;
}

void solve()
{
    int n;  cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<maxProfit(a)<<"\n";
    return;
}


int32_t main()
{
    dkj();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++) {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms/n";
    return 0;
}
