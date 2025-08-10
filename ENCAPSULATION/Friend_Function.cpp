#include<bits/stdc++.h>
using namespace std;

// C++ Friend Functions
// Normally, private members of a class can only be accessed using public methods 
// like getters and setters. But in some cases, you can use a special function called a friend function 
// to access them directly.

// A friend function is not a member of the class, but it is allowed to access the class's private data:


// we have to declare it inside the class and define it outside the class
//we can use setter as well instead of constructor

class Employee{
    private:
     int salary;
    public:
     Employee(int s){
        salary = s;
     }
     friend void displaySalary(Employee ObjE1);    //declare friend function
};

    void displaySalary(Employee ObjE1){  // define outside 
    cout<<"SALARY : "<<ObjE1.salary;  
}
int main(){

    Employee E1(44500); //constructor called
     displaySalary(E1);
    return 0;
}



// ⚠️ Why Use Friend Functions?
// Useful when a non-member function or another class needs access to private data.

// Sometimes used for operator overloading (like << or >> operators).

// Can improve efficiency by reducing the need for getters/setters in certain designs.