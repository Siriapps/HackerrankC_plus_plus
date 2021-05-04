//https://www.hackerrank.com/challenges/c-tutorial-struct/problem
#include <iostream>
#include <cstring>
using namespace std;

/*A structure is a user-defined data type in C/C++.
 A structure creates a data type that can be used to
 group items of possibly different types into a single
 type.
 visit - https://www.geeksforgeeks.org/structures-in-cpp/
 */

struct Student
{
    int age,standard;
    string first_name,last_name;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
