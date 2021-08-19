#include<bits/stdc++.h>
using namespace std;
#define int long long int
          
void dkj()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
}
         
int32_t main()
{
    dkj();
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int min=a[0],ans=-1;
    for(int i=1;i<n;i++) {
        if(ans<(a[i]-min)) ans=a[i]-min;
        if(min>a[i]) min=a[i];
    }
    if(ans>0) cout<<ans;
    else cout<<-1;
    
    return 0;
}