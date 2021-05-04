//https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,q,k,index,subIndex,elem;//2 2
    vector<vector<int>>arr;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        vector<int>subarr;
        for(int j=0;j<k;j++)
        {
            cin>>elem;
            subarr.push_back(elem);
        }
        arr.push_back(subarr);
    }
    for(int x=q;x>0;x--)
    {
        cin>>index>>subIndex;
        cout<<arr[index][subIndex]<<endl;
    }
    return 0;
}
