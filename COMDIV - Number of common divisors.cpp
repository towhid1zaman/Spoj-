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
int gcd(int  a, int b){return b==0 ? a : gcd(b,a%b);}
vector<int>factors;
void factor(int n)
{
    for(int i = 1; i*i<=n;i++)
    {
        if(n%i==0)
        {
            factors.push_back(i);
            if(i != sqrt(n))
            {
                factors.push_back(n/i);
            }
        }
    }
    sort(factors.begin(),factors.end());
}

int main(){f();
	int t;
	cin>>t;
	while(t--)
    {
        int a,b;
//        scanf("%i%i",&a,&b);
cin>>a>>b;
        int gcn = gcd(a,b);
        factor(gcn);
        int cnt = factors.size();
        factors.clear();
        cout<<cnt<<nl;

    }








return 0;
}


