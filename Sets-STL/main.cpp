#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int q;
    cin>>q;
    int query,num;
    for(int i=0;i<q;i++)
    {
        cin>>query>>num;
        switch(query)
        {
        case 1:
            s.insert(num);
            break;
        case 2:
            s.erase(num);
            break;
        case 3:
            set<int>::iterator itr=s.find(num);
            if(itr!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            break;
        }
    }
    return 0;
}



