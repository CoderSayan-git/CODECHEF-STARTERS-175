/*
        PROBLEM B
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
    string s;
    cin>>s;
    
    int n = s.size();
    bool flag = true;
    for(int i=0; i<n-1; i++){
       if(s[i] == s[i+1]){
           flag = false;
       } 
    }
    if(flag){
        cout<<0<<endl;
        return;
    }
    int s1=0, s0 = 0;
    FOR(i,0,n){
        if(s[i] == '1') s1++;
        else s0++;
    }
    
    if(n%2 == 0){
        if(s1 == s0){
            cout<<1<<endl;
            return;
        }
        if(abs(s1-s0) == 2){
            cout<<2<<endl;
            return;
        }
        cout<<3<<endl;
        return;
    }
    
    if(n%2){
        if(abs(s1-s0) == 1){
            cout<<1<<endl;
            return;
        }
        if(abs(s1-s0) == 3){
            cout<<2<<endl;
            return;
        }
    }

    cout<<3<<endl;
    return;
    
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