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

int dx4[] = {0,0,1,-1};
int dy4[] = {1,-1,0,0};
int dx8[] = {0,0,1,1,1,-1,-1,-1};
int dy8[] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = (int)1e7+7;
const int maxn = 200100;
ll bxpo(ll x,ll n){
    ll res = 1;
    while(n>0){
        if(n%2==1){
            res = res*x %mod;
        }
        x = x*x % mod;
        n>>=1;
    }
    return res;
}
int main(){
        _ios;

        ll n,k;
        while(cin>>n>>k){
                if(n==0 and k==0){
                    break;
                }
            ll res =( 2*bxpo(n-1,k) + bxpo(n,k) + 2*bxpo(n-1,n-1) + bxpo(n,n))%mod;
            cout<<res<<endl;
        }




return 0;
}





