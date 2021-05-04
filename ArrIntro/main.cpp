//https://www.hackerrank.com/challenges/arrays-introduction/problem
#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int x=n-1;x>=0;x--)
    {
        cout<<arr[x]<<" ";
    }
    return 0;
}
