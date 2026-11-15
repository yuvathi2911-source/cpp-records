#include <iostream>
#include <string>

class Student {
private:
    int rollNo;
    std::string name;

public:
    Student(int r, const std::string& n) : rollNo(r), name(n) {
        std::cout << "Student object created" << std::endl;
    }

    Student(int r, const char* n) : Student(r, std::string(n)) {
    }

    void display() const {
        std::cout << "Roll Number: " << rollNo << std::endl;
        std::cout << "Name: " << name << std::endl;
    }

    ~Student() {
        std::cout << "Student object destroyed" << std::endl;
    }
};

int main() {
    Student s1(101, "Arun");
    s1.display();
    return 0;
}