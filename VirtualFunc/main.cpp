#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name; int age;
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Professor:public Person
{
private:
	static int cur_id;
	int publications;
public:
    void getdata()
    {
        cin>>name>>age>>publications;
    }
    void putdata()
    {
        ++cur_id;
        cout<<name;
        printf(" %d %d %d \n",age,publications,cur_id);
    }
};
int Professor::cur_id=0;

class Student:public Person
{
private:
    int marks[6],total=0;
    static int cur_id;
public:
    void getdata()
    {
        cin>>name>>age;
        for (int s=0;s<6;s++)
        {
            cin>>marks[s];
            total+=marks[s];
        }
    }
    void putdata()
    {
        ++cur_id;
        cout<<name;
        printf(" %d %d %d \n",age,total,cur_id);
    }
};
int Student::cur_id=0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
