#include<bits/stdc++.h>
using namespace std;
#define int long long int


void dkj()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test_case.txt","r",stdin);
        freopen("sample_output_easy.txt","w",stdout);
    #endif
}

         
int32_t main()
{
    dkj();
    int t;  cin>>t;
    while(t--) {
        int n;  cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int min=a[0],ans=-1;
        for(int i=1;i<n;i++) {
            if(ans<(a[i]-min)) ans=a[i]-min;
            if(min>a[i]) min=a[i];
        }
        if(ans>0) cout<<ans<<"\n";
        else cout<<-1<<"\n";
    }
    cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms/n";

    return 0;
}
