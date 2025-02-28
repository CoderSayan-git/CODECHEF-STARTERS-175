/*
        PROBLEM C
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

void goCPP() {
    int n,x;
    cin >> n >> x;
    vi a(n);
    map<int, vi>mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]].pb(i);
    }
    if (x == 1) {
        map<int, int> f;
        FOR(i,0,n)  f[a[i]]++;
        int mx = 0;
        for (auto p : f)
            mx = max(mx, p.second);
        cout << mx << endl;
        return;
    }
    int ans = 0;
    for (auto it : mp) {
        vi &v = mp[it.first];
        int f = v.size();
        if (it.first % x) {
            ans = max(ans, f);
            continue;
        }

        vector<int> &v2 = mp[it.first / x];
        int i = 0, j = 0;
        vector<int> vec;
        while (i < v.size() && j < v2.size()) {
            if (v[i] < v2[j]) {
                vec.push_back(-1);
                i++;
            } else {
                vec.push_back(1);
                j++;
            }
        }
        while (i < v.size()) {
            vec.push_back(-1);
            i++;
        }
        while (j < v2.size()) {
            vec.push_back(1);
            j++;
        }

        int mx = 0, s = 0;
        for (int i = 0; i < vec.size(); i++) {
            s += vec[i];
            if (s < 0)
                s = 0;
            mx = max(mx, s);
        }
        f += mx;
        ans = max(ans, f);
        //O(size(v) + size(v2))
    }
    //O(n)
    cout << ans << endl;
    
    
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
