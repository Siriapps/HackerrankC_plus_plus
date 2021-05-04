#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> students;
    int q,type,marks;
    string name;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>type;
        switch(type)
        {
        case 1:
            {
                cin>>name>>marks;
                map<string,int>::iterator itr=students.find(name);
                if(itr==students.end())
                    students.insert(make_pair(name,marks));
                else
                    students[name]+=marks;
            }
            break;
        case 2:
            cin>>name;
            students[name]=0;
            break;
        case 3:
            cin>>name;
            cout<<students[name]<<endl;
            break;
        }
    }
    return 0;
}



