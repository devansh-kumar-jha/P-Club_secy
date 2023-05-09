#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long int
#define float double

#define pb push_back
#define pf push_front
#define mp make_pair
#define mii map<int,int>
#define umii unordered_map<int,int>
#define pii pair<int,int>
#define sii set<int,int>
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define msi multiset<int>
#define di deque<int>
#define qi queue<int>
#define sti stack<int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define setbits(x) _builtin_popcountll(x)
#define zrobits(x) _builtin_ctzll(x)
#define MAX_N 1e5+1
#define mod 1000000007
#define inf 1e18
#define all(container) container.begin(),container.end()
#define rall(a) a.rbegin(), a.rend()
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define present(container, element)(container.find(element) != container.end())
#define cpresent(container, element)(find(all(container), element) != container.end())
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(t) int t;  cin>>t;  while(t--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int func(int a,int b){return a+b;}
int min(int a,int b){if(a<=b) return a;else return b;}
int max(int a,int b){if(a>=b) return a;else return b;}
vb isprime(MAX_N,true);
vi fact(MAX_N,0),Ifact(MAX_N,0),primes,SPF(MAX_N,0),dsu_parent(MAX_N,-1),dsu_size(MAX_N,-1);
void make_set(int v) { dsu_parent[v]=v;dsu_size[v]=1;return;}
int find_set(int v) { if (v==dsu_parent[v]) return v;return dsu_parent[v]=find_set(dsu_parent[v]);}
void union_sets(int a,int b) { a=find_set(a);b=find_set(b);if(a!=b) {if(dsu_size[a]<dsu_size[b]) swap(a, b);
dsu_parent[b]=a;dsu_size[a]+=dsu_size[b];}return;}
void sieve_of_eratosthenes(int N=MAX_N) {isprime[0]=isprime[1]=false;SPF[0]=2; SPF[1]=1;for(int i=2;i<N;i++){
if(isprime[i]) {primes.push_back(i);SPF[i]=i;}for(int j=0;j<primes.size() && i*primes[j]<N && primes[j]<=SPF[i];j++) {
isprime[i*primes[j]]=false;SPF[i*primes[j]]=primes[j];}}return;}
int power(int x,int n,int modulus=mod) {int r=1; while(n){if(n&1)r=(r*x)%modulus;x=(x*x)%modulus;n>>=1;} return r%modulus;}
int gcd(int a,int b) { if(a<b) return gcd(b,a); else if(b==0) return a; else return gcd(b,a%b); }
int gcd_extended(int a,int m,int& x,int& y) { if(m==0) { x=1; y=0; return a; }
else { int p=gcd_extended(m,a%m,x,y),y1=x-(a/m)*y,x1=y; y=y1; x=x1; return p; } }
int Inverse_mod_from_euclid(int n,int modulus=mod) {int x=1,y=1,ans=0;if(n<modulus) ans=gcd_extended(modulus,n,y,x);
else ans=gcd_extended(n,modulus,x,y);x=(x+modulus)%modulus;if(n*x%modulus != 1) return -1;else return x;}
int Inverse_mod_from_fermat(int n,int modulus=mod) { return power(n,modulus-2,modulus); }
void precompute_for_nCr(int modulus=mod) { fact[0]=fact[1]=Ifact[0]=Ifact[1]=1;
for(int i=2;i<=MAX_N;i++) { fact[i]=(fact[i-1]*i)%modulus; Ifact[i]=(Ifact[i-1]*Inverse_mod_from_fermat(i,modulus))%modulus;} return; }
int nCr(int n,int r,int modulus=mod) { if(n<0||r<0||n<r) return 0; return (((fact[n]*Ifact[r])%modulus)*Ifact[n-r])%modulus; }
vi build_fenwick(vi&a){int n=a.size();vi ans(n,0);for(int i=0;i<n;i++) if((i+((i+1)&-(i+1)))<n) ans[i+((i+1)&-(i+1))]+=ans[i];return ans;}
int sum_for_fenwick(vi& fen,int k,int modulus=mod) { int ans=0; while(k>-1) { ans=(ans+fen[k])%modulus; k-=((k+1)&-(k+1)); } return ans; }
void add_in_fenwick(vi& fen,int k,int x,int modulus=mod){int n=fen.size();while(k<n){fen[k]=(fen[k]+x)%modulus;k+=((k+1)&-(k+1));}return;}
vi build_segment(vi& v,int fx(int,int)=func,int modulus=mod) {int n=v.size();vi st(2*n,0);for(int i=0;i<n;i++) st[n+i]=v[i];
for(int i=n-1;i>-1;i--)st[i]=fx(st[i<<1],st[i<<1|1])%modulus;return st;}
void modify_for_segment(vi& T,int p,int v,int fx(int,int)=func,int modulus=mod){int n=T.size()/2;
for(T[p+=n]=v;p>1;p>>=1)T[p>>1]=fx(T[p],T[p^1])%modulus;return;}
int query_for_segment(vi& T,int l,int r,int fx(int,int)=func,int modulus=mod){int res=0,n=T.size()/2;
for(l+=n,r+=n;l<r;l>>=1,r>>=1){if(l&1) res=fx(res,T[l++])%modulus;if(r&1)res=fx(res,T[--r])%modulus;}return res;}
int get_hash(string s,int p=29791,int m=mod) {int n=s.length(),hash=0,p_pow=1;for(int i=0;i<n;i++){hash=(hash+(s[i]-'a'+1)*p_pow)%m;
p_pow=(p_pow*p)%m;}return hash;}
struct LCA {vi height,euler,first,segtree;vb visited;int n;LCA(vector<vi>&adj,int root=0){n=adj.size();height.resize(n);
first.resize(n); euler.reserve(n*2);visited.assign(n,false);dfs(adj,root,0);int m=euler.size();segtree.resize(m*4); build(1, 0, m - 1);}
void dfs(vector<vector<int>>&adj,int node,int h) {visited[node]=true; height[node]=h;first[node]=euler.size(); euler.pb(node);
for(auto to:adj[node]) {if(!visited[to]){ dfs(adj,to,h+1); euler.pb(node); }}}void build(int node,int b,int e)
{if(b==e) segtree[node] = euler[b];else {int mid=(b+e)/2;build(node<<1,b,mid);build(node<<1|1,mid+1,e);
int l=segtree[node<<1],r=segtree[node<<1|1];segtree[node]=(height[l]<height[r])?l:r;}}
int query(int node,int b,int e,int L,int R) {if(b>R||e<L) return -1;if(b>=L&&e<=R) return segtree[node];int mid=(b+e)>>1;
int left=query(node<<1,b,mid,L,R),right=query(node<<1|1,mid+1,e,L,R);if(left==-1) return right;if(right==-1) return left;
return height[left]<height[right]?left:right;}int lca(int u,int v) {int left=first[u],right=first[v];if(left>right) swap(left, right);
return query(1,0,euler.size()-1,left,right);}int dist(int u,int v) {int lx=lca(u,v);return height[u]+height[v]-2*height[lx];}};

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
        freopen("test_case.txt","r",stdin);
        freopen("output_hard.txt","w",stdout);
    #endif
}

void solve()
{
    int n,ans=0,buy=inf,ops=0;  cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {
        if(ops==0) {
            if(i==n-1) continue;
            else if(a[i+1]>a[i]) { buy=a[i]; ops=1; }
        }
        else {
            if(i==n-1) ans+=max(0,a[i]-buy);
            else if(a[i+1]>=a[i]) continue;
            else { ans+=max(0,a[i]-buy); ops=0; }
        }
    }
    if(ans>0) cout<<ans<<"\n";
    else cout<<-1<<"\n";
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
