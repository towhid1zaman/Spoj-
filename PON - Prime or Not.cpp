#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long LL;
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

///Calculate ( a*b ) %c
LL mulmod(LL a,LL b,LL c)
{
    LL x = 0 , y = a%c ;
    while(b>0)
    {
        if(b%2) x = (x+y)%c ;
        y=(y*2)%c;
        b/=2;
    }
    return x%c ;
}

///Calculate ( a^b ) %c
LL modulo(LL a,LL b,LL c)
{
    LL x = 1 , y = a%c ;
    while( b > 0 )
    {
        if(b%2) x = mulmod(x,y,c) ;
        y=mulmod(y,y,c);
        b/=2;
    }
    return x%c ;
}

bool miller_rabin(LL p, LL iteration)
{
    if(p<2) return false ;
    if(p%2==0&&p!=2) return false ;

    LL s = p-1 ;
    while(s%2==0) s/=2;

    for(LL i=1;i<=iteration;i++)
    {
        LL a = rand() % (p-1)+1 , temp = s ;

        LL mod = modulo(a,temp,p);
        while(mod!=1&&mod!=p-1&&temp!=p-1)
        {
            mod = mulmod(mod,mod,p);
            temp*=2;
        }
        if(temp%2==0&&mod!=p-1) return false ;
    }
    return true ;
}
int main(){f();


        LL c,n;
        cin>>c;
        while(c--)
        {
            cin>>n;
            if(miller_rabin(n,50)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }






return 0;
}
