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
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7

///sortingstringbytheirlengthincreasingorder
bool ff(string s1,string s2){
    return s1.size()<s2.size();
}
///vector<string>s;sort(s.begin(),s.end(),ff)


int d,x,y;  //d = gcd
void EEA(int a,int b)
	{
   	 if(b==0){
	    d = a;x = 1;y = 0;
   	 }
    	else{
     	       EEA(b,a%b);int temp = x; x = y;
      	      y = temp - (a/b)*y;
  	    }
	}

int main(){f();

        int t;
        cin>>t;
        int i = 0;
        while(t--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            EEA(a,b);
            int res = (a*x) + (b*y);
//            cout<<x<<" "<<y<<nl;
//            cout<<res<<" "<<d<<nl;
            if(c%d==0)
            {
                cout<<"Case "<<++i<<": Yes"<<nl;
            }
            else
            {
                cout<<"Case "<<++i<<": No"<<nl;
            }
        }

return 0;
}

