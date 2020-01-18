#include<bits/stdc++.h>
using namespace std;

int main()
{
       // ios_base::sync_with_std(0);
        cin.tie(0);
        cout.tie(0);
    int a;
    cin>>a;
    string s;
    cin>>s;
    int l = s.length();
            cin.ignore();
            int b;
            cin>>b;
                        cin.ignore();
               while(b--)
                {
                    string r;
                    getline(cin,r);
                            int len = r.length();
                                for(int i =0,j=0;j<l,i<len;i++,j++)
                                {
                                    if(r[i]==s[j])
                                    {
                                        r[i]=s[j+1];
                                        continue;
                                    }
                                    if(r[i]==s[l-2])
                                    {
                                        r[i]=s[l-1];
                                        continue;
                                    }
                                    if(r[i]==s[l-1])
                                    {
                                        r[i]=s[0];
                                        continue;
                                    }
                                }
                                cout<<r<<endl;
                }
            return 0;
}
