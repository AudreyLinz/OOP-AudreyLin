#include <iostream>
#include <cstring> // For strcpy and strlen

using namespace std;

class Person {
private:
    int age;
    char *name;

public:
    // 1. Primary Constructor
    Person(const char *newName, int newAge) : age(newAge) {
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);

        cout << "Person created: " << name << " (Age: " << age << ") - PRIMARY CONSTRUCTOR\n";
    }

    // 2. Deep Copy Constructor
    Person(const Person &other) : age(other.age) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        cout << "Person created: " << name << " (Age: " << age << ") - DEEP COPY CONSTRUCTOR\n";
    }

    // 3. Destructor
    ~Person() {
        // Check if name is not nullptr before deleting (a safety measure)
        if (name) { 
            cout << "Person destroyed: Memory for " << name << " freed. - DESTRUCTOR\n";
            delete[] name;
            name = nullptr;
        }
    }

    // 4. Display Method
    void display() const {
        cout << "Name: " << (name ? name : "NULL") << ", Age: " << age;
    }

    // 5. Modifier method to change the name
    void setName(const char *newName) {
        delete[] name; // Free old memory
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }
    
    // 6. Overloaded Assignment Operator for SHALLOW COPY
    Person& operator=(const Person &other) {
        if (this != &other) {
            this->age = other.age;
            this->name = other.name; 
        }
        cout << "Assignment performed: SHALLOW COPY APPLIED.\n";
        return *this;
    }
};

int main() {
    Person p_shallow_base("Shallow_Original", 20);
    Person p_shallow_copy("Placeholder", 99); 

    cout << "\nDEMONSTRATING SHALLOW COPY (p2 = p1)\n";
    p_shallow_copy = p_shallow_base;

    cout << "Initial: "; p_shallow_base.display(); cout << " (Base)\n";
    cout << "Initial: "; p_shallow_copy.display(); cout << " (Copy)\n";
    
    p_shallow_base.setName("Shallow_MODIFIED"); 

    cout << "\nAFTER MODIFICATION on p_shallow_base:\n";
    cout << "p_shallow_base: "; p_shallow_base.display(); cout << " (Base)\n";
    
    cout << "p_shallow_copy: "; p_shallow_copy.display(); 
    cout << " **SHALLOW COPY ISSUE: DANGEROUS ACCESS TO DELETED MEMORY!**\n";
    
    cout << "\n**CRITICAL SHALLOW COPY ISSUE:** Both p_shallow_base and p_shallow_copy now point to the same memory block for 'name'. When p_shallow_base.setName() executed, it deleted the shared memory. The p_shallow_copy object now holds a **dangling pointer** and will attempt a **double deletion** upon its own destruction, likely causing a crash.\n";

    return 0;
}