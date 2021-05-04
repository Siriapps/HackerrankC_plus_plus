#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,elem;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>elem;
        v.push_back(elem);
    }
    int q,val;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>val;
        vector<int>::iterator itr;
        itr=lower_bound(v.begin(),v.end(),val);

        bool cond=v[itr-v.begin()]==val;
        if(cond)
            cout<<"Yes"<<" "<<(itr-v.begin())+1<<endl;
        else
            cout<<"No"<<" "<<(itr-v.begin())+1<<endl;
    }
    return 0;
}
