#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,num,fq,sq1,sq2;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    cin>>fq;
    v.erase(v.begin()+(fq-1));
    cin>>sq1>>sq2;
    v.erase(v.begin()+(sq1-1),v.begin()+(sq2-1));

    cout<<v.size()<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
