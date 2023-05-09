#include<bits/stdc++.h>
using namespace std;
#define int long long int

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
    // All the test cases would be stored in the file test_case.txt.

    // Enter total number of test cases to generate
    int t;  cin>>t;
    cout<<(t+7)<<"\n";

    // Add the standard trivial test cases.
    standard();
    
    // Generation of some boundary cases for checking logic of the program.
    boundary();

    // Generation of randomized cases for time complexity analysis and solution correctness.
    int part1 = t/4, part2 = t/4, part3 = t/2;
    if(t%4 == 0) {}
    else if(t%4 <= 2) part1++;
    else { part1++; part3++; } 
    
    while(part1--) {
        int n= rand()%100 + 1;
        int a[n];
        for(int i=0;i<n;i++) a[i]= rand()%200 + 1;

        /* Writing into the file appropriately */
        cout<<n<<"\n";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";    
    }
    while(part2--) {
        int n= rand()%1000 + 1;
        int a[n];
        for(int i=0;i<n;i++) a[i]= rand()%300 + 1;

        /* Writing into the file appropriately */
        cout<<n<<"\n";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";    
    }
    while(part3--) {
        int n = rand()%100000 + 1;
        if(part3 % 2 == 0) n = rand()%1000 + 1;
        int a[n];
        for(int i=0;i<n;i++) {
            if(a[i]%3==0) a[i]= rand()%500 + 1;
            else if(a[i]%3==1) a[i]= rand()%200 + 1;
            else a[i]= rand()%100 + 1;
        }

        /* Writing into the file appropriately */
        cout<<n<<"\n";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";    
    }

    // Generation of the largest cases.
    large();

    return 0;
}
