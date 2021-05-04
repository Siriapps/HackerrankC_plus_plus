// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <iostream>

using namespace std;

int main()
{
    string num[9] = {"one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin>>n;
    if (n>=1 && n<=9)
    {
        cout<<num[n-1];
    }
    else if(n>9)
    {
        cout<<"Greater than 9";
    }
    return 0;
}
