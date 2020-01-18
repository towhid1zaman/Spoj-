#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define endl "\n"
#define X first
#define Y second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define mem(a,x) memset(a,x,sizeof(a))
#define trav(x,a) for(auto &x: a)
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;

#define sizes 10000001
LL res[sizes+1], a[sizes+1];
void seive()
{
    for(LL i = 2; i<=sizes;i++)
    {
        if(a[i]==0){
            a[i] = i;
            for(LL j= i*i; j<=sizes;j+=i)
            {
                if(a[j]==0){
                        a[j] = i;
                }
            }
        }
        res[i] = res[i-1] + a[i];
    }
}
int main(){f();
            seive();
            LL t,k;
            cin>>t;
            while(t--)
            {
                cin>>k;
                cout<<res[k]<<endl;
            }




return 0;
}



