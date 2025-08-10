#include<bits/stdc++.h>
using namespace std;


// ✅ Inheritance
// Definition: One class (child) inherits properties and behavior (methods) from another class (parent).

// Goal: Reusability of code.

// How: Use : and access specifier (public, protected, private).

class Professor {
  public:
    int salary;
};

class Teacher : public Professor {
  public:
    void setSalary(int s) { salary = s; }
    void getSalary() { cout << "SALARY : " << salary; }
};



// Inheritance:
// Inheritance allows  attributes and methods of one class  can be reused in  another class. 
// It helps you write cleaner, more efficient code by avoiding duplication
// In inheritance there are
//derived class (child) - the class that inherits from another class
//base class (parent) - the class being inherited from

class Professor{
 
    public:
    int salary;
};

class Teacher : public Professor{
    public:
    void setSalary(int s){
        salary = s;
        return;
    }
    void getSalary(){
        cout<<"SALARY : "<<salary;
    }
};

int main(){
    Professor p1;
    Teacher t1;
    t1.setSalary(59000);
    t1.getSalary();
    return 0;
}


//Why And When To Use "Inheritance"?
// It is useful for code reusability: reuse attributes and methods of an existing class when you create 
// a new class.


// Types
// single Inheritance -> above eg
// Multilevel I
// Multiple I
// Hierarchial I
// Hybrid I


// | Type of Inheritance | Description                       |
// | ------------------- | --------------------------------- |
// | Single              | One parent, one child             |
// | Multilevel          | Inheriting from a derived class   | // two or more than two level
// | Multiple            | One child from multiple parents   |
// | Hierarchical        | Multiple children from one parent |
// | Hybrid              | Mix of two or more types          |


//IMP

// | Access Level | Accessible Inside Class | Accessible in Derived Class | Accessible via Object     |
// | ------------ | ----------------------- | --------------------------- | ---------------------     |
// | `public`     | ✅                       | ✅                           | ✅                     |
// | `protected`  | ✅                       | ✅                           | ❌ ,if  want to use we have to call the method from derived class                |
// | `private`    | ✅                       | ❌                           | ❌                     |
