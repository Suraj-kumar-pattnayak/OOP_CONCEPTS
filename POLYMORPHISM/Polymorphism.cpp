// Polymorphism
// Polymorphism means "many forms", and it occurs when we have many classes that are related to each other 
// by inheritance.

// Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class.
// Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different
// ways.


// For example, imagine a base class Animal with a method called makeSound(). Derived classes of Animals could be 
// Pigs, Cats, Dogs, Birds, etc. Every animal can "make a sound", but each one sounds different:

// Pig: wee wee
// Dog: bow wow
// Bird: tweet tweet
// This is polymorphism - the same action (making a sound) behaves differently for each animal




//we are creating Pig  objects and override the animalSound() method

#include<bits/stdc++.h>
using namespace std;

// ✅ Polymorphism
// Definition: Same function behaves differently in different classes.

// Types:

// Compile-time polymorphism: Function overloading, operator overloading

// Run-time polymorphism: Method overriding using inheritance


class Animal{
    public:
    void animalSound(){
        cout<<"This animal make sounds\n";
        return;
    }
};

class Pig : public Animal{
    public:
    void animalSound(){
        cout<<"Wee Wee\n";
        return;
    }
};
class Cow : public Animal{

};
int main(){
    Animal a1;
    Pig p1;
    Cow c1;
    p1.animalSound();   //Wee Wee   ->  Pig override Animal method
    c1.animalSound();  // This animal make sounds
    return 0;
}