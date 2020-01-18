//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;


int main(){
	IO

	int Q;
	cin>>Q;
	ll a,b,c,d;
	while(Q--)
    {
        cin>>a>>b;
        c = a%10;
        d = b%4;
        //cout<<c<<" "<<d<<endl;
        if(b==0)
        {
            cout<<1<<endl;
        }
        else if(c==1 or c==5 or c==6)
        {
            cout<<c<<endl;
        }
        else if(d==1){
            cout<<c<<endl;
        }
        else if(d==2)
        {
            cout<<(c*c)%10<<endl;
        }
        else if(d==3)
        {
            cout<<(c*c*c)%10<<endl;
        }
        else if(d==0)
        {
            cout<<(c*c*c*c)%10<<endl;
        }
    }

return 0;
}



