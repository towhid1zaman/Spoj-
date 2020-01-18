#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<vi> vvi;
typedef pair <LL,LL> pl;
typedef pair <int, int> pii;
typedef vector<pii>vip;

#define endl "\n"
#define F first
#define S second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = int(1e6) + 99;
LL res[N], a[N];
void seive()
{
    for(LL i = 1; i<N;i++)
    {
            for(LL j= 2*i; j<N;j+=i)
            {
                a[j]+=i;
            }
        }

        for(int i = 2; i<N;i++){
            res[i] = res[i-1]+a[i];
        }
}


int main(){
f();

        seive();
        LL t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            cout<<res[n]<<endl;
        }






return 0;
}

