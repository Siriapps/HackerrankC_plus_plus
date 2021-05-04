//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
#include <iostream>

using namespace std;

int main()
{
    string num[9] = {"one","two","three","four","five","six","seven","eight","nine"};

    int a,b;
    cin>>a>>b;
    for(int n=a;n<=b;n++)
    {
        if(n>=1 && n<=9)
        {
            cout<<num[n-1]<<endl;
        }
        else if(n>9)
        {
            if(n%2==0)
            {
                cout<<"even"<<endl;
            }
            if(n%2!=0)
            {
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}
