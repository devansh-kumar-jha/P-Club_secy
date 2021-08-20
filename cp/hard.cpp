#include<bits/stdc++.h>
using namespace std;
#define int long long int

// Ranges are as follows 0 <= i < n-1 and i < j < n
int find_maxp(int a[],int i,int j,int n)
{
    int min=a[i],ans=-1;
    for(int t=i+1;t<n;t++) {
        if(ans<(a[t]-min)) ans=a[t]-min;
        if(min>a[t]) min=a[t];
    }
    if(ans>0) return ans;
    else return -1;
}

void fill(vector <vector <int>> &p,int a[],int n)
{
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(j<=i || i==n-1) p[i][j]=-1;
            else p[i][j]=find_maxp(a,i,j,n);
        }
    }
    return;
}

int find_max(vector <vector <int>> p,int n)
{
    int max=-1;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(p[i][j]>max) max=p[i][j];
        }
    }
    return max;
}

int32_t main()
{
    // dkj();
    int t;   cin>>t;
    while(t--) {
        int n;  cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        // cout<<1<<"\n";
        vector <vector <int>> max(n);
        // fill(max,a,n);
        int ans=0;
        // ans = find_max(max,n);
        cout<<ans<<"\n";
    }
    return 0;
}
