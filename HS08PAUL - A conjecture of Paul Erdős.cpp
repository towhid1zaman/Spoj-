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
const int maxn = 200100;
const int N  = 10000007;

bool mark[N];
int ans[N];

void seive(int n)
{
    memset(mark,true,sizeof mark);
    for(int i = 3; i*i<=n;i+=2){
        if(mark[i]){
            for(int p = i*i; p<=n; p+=i*2){
                mark[p] = false;
            }
        }
    }
}
int main(){
        _ios;
        seive(N);
        fill(ans);
        for(int x = 1; x<=5000; x++){
            for(int y = 1; y<=90;y++){
                int res = x*x + y*y*y*y;
                if(res>=N)break;
                if(mark[res] and(res%2==1 or res==2))ans[res] = 1;
            }
        }
        ///prefix sum

        for(int i = 1; i<=N;i++){
            ans[i] = ans[i]+ans[i-1];
        }

        int T;
        cin>>T;
        while(T--){
                int n;
                cin>>n;
                cout<<ans[n]<<endl;
        }




return 0;
}





