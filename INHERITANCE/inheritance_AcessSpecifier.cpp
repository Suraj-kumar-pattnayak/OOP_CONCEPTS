//as we know
//The third specifier, protected, is similar to private,means it cant be accessed outside the class 
// but it can also be accessed in the inherited class:

#include<iostream>
using namespace std;
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
    void speak(){
        cout<<"EMPLOYEE SPEAK....";
    }
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
    void baseSpeak(){
        speak();
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  myObj.baseSpeak();
  return 0;
}


//as u see for attribute we use getter setter, and for method we call inside derived class method

//also we can access the attribute from that baseSpeak without get and set, but we have to set the value in base class
//bcs in main we cant set the value without setter, and myObj.salary (Accessing via object) is not allowed due to protected rule
//so setter and getter is best use