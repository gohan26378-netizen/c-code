Description:

This C++ program demonstrates the concept of Multiple Inheritance, Constructors and Destructors, Arrays of Objects, and Pointers to Objects.

The program contains three classes: Pet_Animal, Wild_Animal, and Animal. The Animal class inherits from both Pet_Animal and Wild_Animal, which represents multiple inheritance.

Both parent classes contain a function named four_legs(). This shows one of the drawbacks of multiple inheritance, because the derived class may face ambiguity when accessing functions with the same name from both parent classes.

The program creates an array of five Animal objects. When these objects are created, the constructors of the parent classes and the derived class are called. When the program ends, their destructors are called automatically.

A pointer ptr is used to store the address of the first object in the array. The program then uses sizeof() to display the size of the pointer and the complete object array.

Finally, the program demonstrates different ways of accessing the sound() function using the object pointer and array. All five objects call the same sound() function and display "generic Animal sound".

Thus, the program mainly demonstrates multiple inheritance, constructor/destructor execution, object arrays, pointers, and object access using pointer arithmetic.
