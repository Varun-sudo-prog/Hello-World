#include <iostream>
#include <cstring>  // Use <cstring> instead of <string.h> for C++ compatibility
using namespace std;

struct Student {
    char name[200];
    int rollno;
    float marks;
};

int main() {
    struct Student obj;
    strcpy(obj.name, "Nemonet TYP");
    obj.rollno = 205;
    obj.marks = 85.4;

    cout << "Name = " << obj.name << "\n";
    cout << "Rollno = " << obj.rollno << "\n";
    cout << "Marks = " << obj.marks << "\n";
    cout << "Marks = " << obj.marks << "\n";

    return 0;
}
