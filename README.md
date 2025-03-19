# CPP04
(Subtype polymorphism, abstract classes, interfaces)
## Grade: 80/100
![cpp04](https://github.com/user-attachments/assets/bdfec102-a719-4e3b-9099-4b3992336ce4)

## Overview

This project explores advanced C++ concepts such as polymorphism, inheritance, abstract classes, and deep copying. It is divided into several exercises that progressively build an animal hierarchy, demonstrating both proper and "wrong" polymorphic behavior, and later integrating a `Brain` class to enforce deep copying.

### Exercise 00: Polymorphism
- **Animal Base Class:**  
  Contains a protected `std::string type`.  
  Provides a `makeSound()` method that is overridden in derived classes.
- **Derived Classes:**  
  - **Dog:** Sets `type` to `"Dog"` and its `makeSound()` outputs a dog-specific sound.  
  - **Cat:** Sets `type` to `"Cat"` and its `makeSound()` outputs a cat-specific sound.
- **WrongAnimal & WrongCat:**  
  These classes illustrate what happens when virtual functions are not properly used—demonstrating that the wrong sound is produced when overriding is omitted.

### Exercise 01: I Don’t Want to Set the World on Fire
- **Brain Class:**  
  Implements an array of 100 `std::string` ideas.
- **Enhanced Dog & Cat:**  
  Each has a private `Brain*` attribute. They allocate a new `Brain` upon construction and delete it in the destructor, ensuring deep copies.
- **Tests:**  
  An array of `Animal` pointers (half Dogs, half Cats) is created and then deleted through the base-class pointer to verify proper destructor chaining and deep copying.

### Exercise 02: Abstract Class
- **Abstract Animal:**  
  The `Animal` class is made abstract (e.g., by declaring at least one pure virtual function) so that it cannot be instantiated directly. This forces proper use of derived classes.

## Files Structure

- **Makefile**  
  Automates the build process.

- **main.cpp**  
  Contains extensive tests demonstrating:
  - Polymorphic behavior of `Dog` and `Cat`
  - Correct output of overridden `makeSound()`
  - Deep copy tests with the `Brain` class
  - Behavior of `WrongAnimal` and `WrongCat` to contrast proper and improper polymorphism

- **Animal.hpp / Animal.cpp**  
  Declaration and implementation of the abstract `Animal` class.

- **Dog.hpp / Dog.cpp**  
  Derived class for `Dog`, sets `type` to `"Dog"` and overrides `makeSound()` with a dog-specific message. Also allocates and cleans up its `Brain`.

- **Cat.hpp / Cat.cpp**  
  Derived class for `Cat`, sets `type` to `"Cat"` and overrides `makeSound()` with a cat-specific message. Also allocates and cleans up its `Brain`.

- **WrongAnimal.hpp / WrongAnimal.cpp**  
  A base class without proper virtual function use, used to illustrate the pitfalls of non-polymorphic behavior.

- **WrongCat.hpp / WrongCat.cpp**  
  Inherits from `WrongAnimal` but does not override the virtual behavior correctly, so it emits the wrong sound.

- **Brain.hpp / Brain.cpp**  
  Implements the `Brain` class, which stores 100 ideas.

## Compilation

***To run the project:***

```bash
cd ex00
make
./executable_filename
```

## What I Learned
**Polymorphism & Virtual Functions:** How to override methods in derived classes to achieve dynamic binding.

**Abstract Classes:** Enforcing interface contracts by making base classes abstract.

**Deep Copying:** Implementing proper copy constructors and assignment operators to avoid shallow copies of dynamically allocated members.

**Resource Management:** Using constructors, destructors, and careful memory management to prevent memory leaks.

**Design Principles:** Building a flexible and robust object-oriented design that leverages inheritance and polymorphism.

## Conclusion
This project reinforced my understanding of advanced C++ concepts, including how to design an effective class hierarchy using abstract classes and deep copying. It was an excellent exercise in applying object-oriented principles, ensuring proper resource management, and writing maintainable, leak-free code.



