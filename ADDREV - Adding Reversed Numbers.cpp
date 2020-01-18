
#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define UNQ(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())

string rev(string s)
{
    string res;
    for(int i = s.length()-1; i>=0; i--){
        res+=s[i];
    }
    return res;
}
//Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}
//Convert int to string
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}
int main()
{f();

        int n;
        cin>>n;
        while(n--){
            string s1,s2;
            cin>>s1>>s2;
            string rs1 = rev(s1);
            //cout<<rs1<<nl;
            string rs2 = rev(s2);
            int ins1 = to_int(rs1);
            int ins2 = to_int(rs2);
            int sum = ins1+ins2;
            string res = to_str(sum);
            string rres = rev(res);
            int ans = to_int(rres);
            cout<<ans<<nl;
        }


return 0;
}
