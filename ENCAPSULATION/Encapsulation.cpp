#include <iostream>
using namespace std;




// ✅ Encapsulation
// Definition: Wrapping attributes (variables) and methods into a single unit (class) and restricting direct access to 
// some of the object’s components.

// Goal: Hide internal details; expose only what’s necessary.

// How: Use private data with public getters and setters

class Employee {
  private:
    int salary;

  public:
    void setValue(int s) { salary = s; }
    int getValue() { return salary; }
};





// Encapsulation:
// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.

// To achieve this, you must declare class variables/attributes as private.

// If we want others to read or modify the value of a private member, 
// we can provide public get and set methods.

// Why Encapsulation?
// Increased security of data
// Good control of data
// This will reduce the possibility of yourself (or others) to mess up the code.
// It is considered good practice to declare your class attributes as private (as often as you can). 
// Encapsulation ensures better control of your data.


//so in general , in my code [ encapsulation-> private attributes can be accessed using public methods]
class Employee{

    private:
     int salary;

    public:
     //setter
     void setValue(int s){
        salary = s;
     }
     //getter
     int getValue(){
        return salary;
     }
};

int main(){
    Employee E1;
    //  cout<<E1.salary;  //error: 'int Employee::salary' is private within this context, so get, set ka use
    E1.setValue(45000);

   cout<< E1.getValue();
    return 0;
}





// Real-Life Example
// Think of an employee's salary:

// The salary is private - the employee can't change it directly
// Only their manager can update it or share it when appropriate
// Encapsulation works the same way. The data is hidden, and only trusted methods can access or modify it.