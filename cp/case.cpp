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

    // The below code will generate n random test cases with the required constraints in place.
    // The test cases for both the problems would be the same but the answer would be different for them.
    // All the test cases would be stored in the file created for storage.

    cout<<"Enter total number of test cases to generate";
    int n;  cin>>n;

    while(n--) {
        int t= rand()%1000 + 1;
        int n= rand()%100000 + 1;
        int a[n];
        for(int i=0;i<n;i++) a[i]= rand()%500 + 1;

        /* writing into the file appropriately */
        
        /*  */
    }

    return 0;
}