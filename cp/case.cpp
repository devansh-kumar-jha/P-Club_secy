#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long int


#define pb push_back
#define mp make_pair
#define mii map<int,int>
#define pii pair<int,int>
#define vi  vector<int>
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
    #ifndef ONLINE_JUDGE
        // freopen("input.txt","r",stdin);
        freopen("test_case.txt","w",stdout);
    #endif
}


void standard()
{
    cout<<2<<"\n"<<3<<" "<<7<<"\n";
    cout<<7<<"\n";
    cout<<45<<" "<<24<<" "<<35<<" "<<31<<" "<<40<<" "<<38<<" "<<11<<"\n";
    return;
}


void boundary()
{
    cout<<0<<"\n";
    cout<<1<<"\n"<<5<<"\n";
    return;
}


void large()
{
    cout<<100000<<"\n";
    for(int i=0;i<100000;i++) cout<<500<<" ";
    cout<<"\n";

    cout<<100000<<"\n";
    for(int i=0;i<100000;i++) cout<<rand()%500+1<<" ";
    cout<<"\n";

    cout<<100000<<"\n";
    for(int i=0;i<100000;i++) cout<<long(((100000-i)%500+(rand()%500+1))/2)<<" ";
    cout<<"\n";

    return;
}



int32_t main()
{
    dkj();

    // The below code will generate n random test cases with the required constraints in place.
    // The test cases for both the problems would be the same but the answer would be different for them.
    // All the test cases would be stored in the file created for storage.

    // Enter total number of test cases to generate
    int t;  cin>>t;

    cout<<(t+7)<<"\n";
    
    // Add the standard trivial test cases.
    standard();
    // Generation of some boundary cases of critical check.
    boundary();

    // Generation of radomized cases for general analysis.
    while(t--) {
        int n= rand()%100000 + 1;
        int a[n];
        for(int i=0;i<n;i++) a[i]= rand()%500 + 1;

        /* Writing into the file appropriately */
        cout<<n<<"\n";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
        
    }

    // Generation of the largest cases.
    large();

    return 0;
}
