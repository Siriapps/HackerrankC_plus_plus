//https://www.hackerrank.com/challenges/attending-workshops/problem

#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop
{
    int startTime;
    int duration;
    int endTime;
};
struct Available_Workshops
{
    int n;//the number of workshops the student signed up for
    Workshop* arr = new Workshop[n];
};
Available_Workshops* initialize(int start_time[], int duration[], int n)
{
    Available_Workshops* ptr = new Available_Workshops;
    ptr->n = n;
    for(int i=0;i<n;i++)
    {
        Workshop w;
        w.startTime = start_time[i];
        w.duration = duration[i];
        w.endTime = start_time[i]+duration[i];
        ptr->arr[i]=w;
    }
    return ptr;
}
bool operator<(Workshop &a,Workshop &b)
{
    return a.endTime < b.endTime;
}
int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    sort(ptr->arr,(ptr->arr)+ptr->n);
    int count = 0;
    int curEnd =0 ;
    for(int i=0;i<ptr->n;i++)
    {
        if(ptr->arr[i].startTime >= curEnd)
        {
            count++;
            curEnd = ptr->arr[i].endTime;
        }
    }
    return count;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
