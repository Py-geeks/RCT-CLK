#include <iostream>
#include<vector>
#include<map>
#include<iterator>
using namespace std;
#define int long long int
const int MOD = 1e9 + 7;

bool comparator(pair<int,int> &a, pair<int,int> &b)
{
    return a.second>b.second;
}


int32_t main() 
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        cin>>n>>x;
        map<int,vector<int> > d;
        for(int i=2;i<n+1;i++)
        {
            int u,v;
            cin>>u>>v;
            auto itr=d.find(u);
            if(itr->first==u)
            {
                itr->second.push_back(v);
            }
            else
            {
                vector<int> l ;
                l.push_back(v);
                d.insert({u,l});
            }
        }

        for(auto i=d.begin();i!=d.end();i++)
        {
            vector<pair<int,int> > d_new;
            auto v= i->second;
            for(auto x=v.begin();x!=v.end();x++)
            {
                int c=0;
                auto it=d.find(*x);
                if(it->first==*x)
                {
                    c=it->second.size();
                }
                else
                {
                    c=0;
                }
                d_new.push_back({*x,c});
            }
            sort(d_new.begin(),d_new.end(),comparator);
            vector<int> l;
            for(auto it=d_new.begin();it!=d_new.end();it++)
            {
                l.push_back(it->first);
            }
            i->second=l;

        }
        int sum=x;
        map<int,int> d1;
        for(int i=1;i<n+1;i++)
        {
            auto ir= d.find(i);
            if(ir->first==i)
            {
                int num=0;
                if(i==1)
                {
                    num=x;
                }
                else
                {
                    num=d1.find(i)->second;
                }
                int j=1;
                for(auto itr= ir->second.begin();itr!=ir->second.end();itr++)
                {
                    d1.insert({*itr,(num*j)});
                    // sum=sum+(num*j);
                    // sum=sum%MOD;
                    j++;
                }
                
            }
        }
        d.clear();
        
        
        for(auto itr=d1.begin();itr!=d1.end();itr++)
        {
            sum+=itr->second;
            sum=sum%MOD;

        }

        cout<<sum%MOD<<endl;

        d1.clear();





    }
    return 0;
}
