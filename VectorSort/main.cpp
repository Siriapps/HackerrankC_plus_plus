#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,num;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
