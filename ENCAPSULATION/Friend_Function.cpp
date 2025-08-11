#include<bits/stdc++.h>
using namespace std;

//Note-> We rarely use friend function , bcs it violates the rules of encapsulation.
//Encapsulation means hiding the internal data and implementation details of a class 
//and allowing controlled access through public member functions (getters, setters, etc.).
// but A friend function is not a member of the class but still has access to its private and protected members.
// This means external code can directly manipulate the internal state without going through validation or control logic in the class.



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
