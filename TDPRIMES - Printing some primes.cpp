#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 100000000;
const int N = 8000000;

/// customized seive
vector<bool>prime(maxn,true);
int ar[N];
void seive(int n){
    prime[0] = prime[1] = false;
    for(int i = 4; i<=n;i+=2){
        prime[i] = false;
    }
    for(int i = 3; i*i<=n;i+=2){
        if(prime[i]){
            for(int j = i*i; j<=n;j+=(i*2)) prime[j]  = false;
        }
    }
    int cnt = 0;
    ar[0] = 2;
    for(int i = 3; i<=n;i+=2){
        if(prime[i])ar[++cnt] = i;
    }
    for(int i = 1; i<=cnt;i+=100){
        cout<<ar[i-1]<<endl;
    }
}
int main(){
        _ios;
        seive(maxn);

return 0;
}





