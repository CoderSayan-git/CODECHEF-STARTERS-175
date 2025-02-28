/*
        PROBLEM A
*/

/*
                Hello ! :) ! 
                
            This is SAYAN DHARA

        Hope you like the solution   <3 <3
*/

#include<bits/stdc++.h>

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define int long long
#define ll long long
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define _FOR(i, start, end) for(int i = start; i >= end; i--)
#define vi vector<int>
#define pb(a) push_back(a)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int mod = 1e9+7;

using namespace std;

ll gcd(ll a, ll b) { return (b == 0) ? (a) : (gcd(b, a %= b)); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

void goCPP(){
//      INPUT TAKING
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    
    int a1=0,a0=0;
    int b1=0,b0=0;
    int c1=0,c0=0;
    
    FOR(i,0,n){
        if(a[i] == '1')   a1++;
        else    a0++;
    }
    FOR(i,0,n){
        if(b[i] == '1')   b1++;
        else    b0++;
    }
    FOR(i,0,n){
        if(c[i] == '1')   c1++;
        else    c0++;
    }
    
    int s1 = a1+b1+c1, s0 = a0+b0+c0;
    if(s1 == 3*n){
        cout<<0<<endl;
        return;
    }
    if(s0 == 3*n){
        cout<<0<<endl;
        return;
    }
    vi arr0 = {a0, b0, c0};
    vi arr1 = {a1, b1, c1};
    sort(all(arr0));
    sort(all(arr1));
    
    if(s1 == n && s0 == 2*n){
        int ans = 0;
        ans = n - arr1[2];
        cout<<ans<<endl;
        return;
    }
    if(s1 == 2*n && s0 == n){
       int ans = 0; 
        ans = n - arr0[2];
        cout<<ans<<endl;
        return;
    }
    
    cout<<-1<<endl;
    
}
    
signed main (){

    fio;                                                         
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    #endif  
        

    int t;
    cin>>t; 
        
    while(t--){
            goCPP();
        }
        
        return 0;
    }