#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7

typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
int const n = 1e8 + 1;
vector<int>v;
void seive(){
        bool prime[n+1];
        memset(prime,true,sizeof(prime));
        for(int p= 2; p*p<=n;p++)
        {
            /// true means prime
            if(prime[p]==true)
            {
                    for(int i = p*p;i<=n;i+=p){
                        prime[i] = false;
                    }

            }
        }
        v.push_back(2);
        for(int i = 3; i<=n;i+=2){
            if(prime[i]==true){
                v.push_back(i);
            }
        }
}
int main(){f();

        seive();
        int a;
        double x;
        while(cin>>a && a)
        {

            x = upper_bound(v.begin(),v.end(),a)- v.begin();
            cout<<fixed<<setprecision(1)<<abs(x - (a/log(a))) / x * 100 <<nl;
        }



return 0;
}









