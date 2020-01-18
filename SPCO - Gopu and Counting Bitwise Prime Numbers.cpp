
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
#define MAX 100

/// first generate prime using seive
vector<int>prime;
void seive()
{
    bool primes[MAX+1];
    memset(primes,true, sizeof(primes));
    for(int p = 2; p*p<=MAX;p++)
    {
        ///true means prime
        if(primes[p]==true)
        {
            for(int i = p*p;i<=MAX;i+=p)
            {
                primes[i] = false;
            }
        }
    }
    for(int i = 2; i<=MAX;i++){
            if(primes[i]==true){
                prime.push_back(i);
            }
        }
}
/// range
vector<int>rPrime;  //final result
void segmented(LL L, LL R)
{
    bool isPrime[L+R-1];
    memset(isPrime,true,sizeof(isPrime));
    if(L==1){
        isPrime[0] = false;
    }
    for(int i = 0;prime[i]*prime[i]<=R;i++){
        LL curPrime = prime[i];
        LL base = curPrime*curPrime;
        if(base<L)
        {
            base = ((L+curPrime-1)/curPrime)*curPrime;
        }
        for(LL j = base; j<=R;j+=curPrime){
            isPrime[j-L] = false;
        }
    }
    for(int i = 0;i<=R-L;i++)
    {
        if(isPrime[i]==true){
            rPrime.push_back(L+i);
        }
    }
}


int main(){
f();




return 0;
}

