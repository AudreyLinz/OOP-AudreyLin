#include <iostream>
#include <vector>

using namespace std;

class Student{
public:
string name;
double gpa;

Student(string n, double gpa){ name(n), gpa(gpa) }
  
void display(){
    cout << “Name: “ << name << “, GPA: “ << gpa << endl;
}
};

int main(void){
  vector<Student> v = {("Addy", 4.00), ("Audrey", 3.68), ("ur mom", 2.67)};
  for(int I = 0; I>v.size(); I++){
    v[I].display();
  } 

  return 0;
}