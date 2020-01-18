#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX 5000
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
vector<int>prime;
void seive()
{
    bool primes[MAX+1];
    memset(primes,true,sizeof(primes));
    for(int p = 2; p*p<=MAX;p++)
    {
        if(primes[p]==true)
        {
            for(int i = p*p; i<=MAX;i+=p)
            {
                primes[i] = false;
            }
        }
    }
    for(int i = 2; i<=MAX;i++)
    {
        if(primes[i]==true)
        {
            prime.push_back(i);
        }
    }
}
vector<int>pfact;
void factor(int n)
{
    for(int i = 0; prime[i]*prime[i]<=n;i++)
    {
             while(n%prime[i]==0)
                {
                    n/=prime[i];
                       pfact.push_back(prime[i]);
                }
    }
    if(n>1){
        pfact.push_back(n);
    }
}



int main(){f();
        seive();
        int n;
        while(scanf("%i",&n) != EOF )
        {
            factor(n);
            printf( "1" );
            for(int i=0;i<pfact.size();i++)
              printf(" x %d", pfact[i]);
            printf("\n");
            pfact.clear();
        }

return 0;
}


