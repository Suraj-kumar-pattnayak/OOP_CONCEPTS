// 🔁 Quick Rule
// 🔑 Use virtual when you expect base class pointers/references to call overridden methods in derived classes.




// C++ Virtual Functions
// A virtual function is a member function in the base class that can be overridden in derived classes.

// Virtual functions are a key part of polymorphism in C++. They let different objects respond differently 
// to the same function call.




// Why Use Virtual Functions?
// Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.

// With virtual, it checks the actual object the pointer is pointing to.

// Or to put it even more simply:

// Without virtual: the base function runs, even if the object is from a child class.
// With virtual: the child's version runs, like you expect.

//short -> ager kisi base class k method m virtual lga diye, to derived class k method ko dekhega



#include<bits/stdc++.h>
using namespace std;


// 🧠 Concept First: What's the Point of virtual?
// When you call a function using a pointer or reference to the base class, C++ decides which version of the function to call:

// Without virtual → it calls the base class function, no matter what the actual object is.

// With virtual → it checks the actual object type(Pig p1),(Animal a1) and calls the overridden function in the derived class.
// class Animal{
//     public:
//     void animalSound(){
//         cout<<"This animal make sounds\n";
//         return;
//     }
// };

// class Pig : public Animal{
//     public:
//     void animalSound() {
//         cout<<"Wee Wee\n";
//         return;
//     }
// };
// class Cow : public Animal{

// };
// int main(){
//     Animal* a1;    // * -> pointer
//     Pig p1;
//     a1 = &p1;     // & -> address of
//     Cow c1;
//     a1->animalSound();  // This animal make sounds, 
// here not using any virtual, override, so result on basis of pointer, not on object type

//     p1.animalSound();   //Wee Wee   ->  Pig override Animal method
//     c1.animalSound();  // This animal make sounds
//     return 0;
// }



// Animal* a;

// Pig p1;
// a = &p1;
// a->animalSound();  // ❓ What happens?
// 🤔 Case 1: If animalSound is NOT virtual:

// o/p-> This animal make sounds
// ✅ Why? Because C++ only looks at the type of a (Animal*), not what it's pointing to.

// 🤩 Case 2: If animalSound IS virtual:

// o/p-> Wee Wee
// ✅ Why? Because C++ checks the actual object type (Pig) and calls the Pig::animalSound() function.







class Animal{
    public:
    virtual void animalSound(){
        cout<<"This animal make sounds\n";
        return;
    }
};

class Pig : public Animal{
    public:
    void animalSound() override{
        cout<<"Wee Wee\n";
        return;
    }
};
class Cow : public Animal{

};
int main(){
    Animal* a1;
    Pig p1;
    a1 = &p1;
    Cow c1;
    a1->animalSound();  //wee wee, bcs override, so not looking on pointer , but on object type
    p1.animalSound();   //Wee Wee   ->  Pig override Animal method
    c1.animalSound();  // This animal make sounds
    return 0;
}


// Key Points:

// The base class method is marked virtual.
// The derived class overrides the method.
// We use base class pointers or references to refer to derived class objects.
// The actual object type (not pointer type) decides which method is called.

