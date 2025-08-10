// ✅ Abstraction – The missing one
// Definition: Hiding unnecessary implementation details from the user and only showing the essential features.

// Goal: Focus on what the object does, not how it does it.

// How: Using abstract classes (classes with at least one pure virtual function).

// 🧠 Think of abstraction like driving a car — you know how to use the steering, accelerator, and brake (interface), 
// but you don’t need to know how the engine works (implementation)

class Animal {
  public:
    virtual void makeSound() = 0; // Pure virtual function (abstract method)
};

class Dog : public Animal {
  public:
    void makeSound() {
      cout << "Bark\n";
    }
};

class Cat : public Animal {
  public:
    void makeSound() {
      cout << "Meow\n";
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound();  // Bark
    a2->makeSound();  // Meow

    return 0;
}



// | OOP Concept       | Key Idea                                 | Real-life Example                               |
// | ----------------- | ---------------------------------------- | ----------------------------------------------- |
// | **Encapsulation** | Hides internal details                   | ATM: You enter PIN, but don't see backend logic |
// | **Inheritance**   | Reuse existing code                      | Teacher inherits properties from Professor      |
// | **Polymorphism**  | One method, many forms                   | Animal sound differs for Pig, Cow, etc.         |
// | **Abstraction**   | Show essential, hide internal complexity | Car: You drive without knowing engine mechanics |
