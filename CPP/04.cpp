#include <iostream>
using namespace std;

class Student{
    public:
    string name ;
    int rollno;

    Student(string name, int rollno){
       this->name = name;
       this->rollno = rollno;
    }
};
int main(){
    // Student s1("Ritik", 1238980);
    Student *s1 = new Student("Ritik", 12318980);

    cout << s1->name << endl;
    cout << s1->rollno << endl;

    // cout << s1.name << endl;
    // cout << s1.rollno << endl;
}