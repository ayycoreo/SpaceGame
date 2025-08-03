#include <string>
#include <iostream>

// Remember that .h files are like interfaces of blueprints for CPP files.
// They contain the declarations of classes, functions, and variables, but not their definitions.

// This is the basic structure of a C++ class that represents a simple object with a name and an age.
//     // It provides methods to set and get the name and age, as well as a method to display the object's information.

class CPPClass {
private:
    std::string name; // Private member variable to store the name
    int age; // Private member variable to store the age
public:
    // Constructor to initialize the name and age
    CPPClass(const std::string& name, int age) : name(name), age(age) {}

    // Method to set the name
    void setName(const std::string& newName) {};

    // Method to get the name
    std::string getName() const {};

    // Method to set the age
    void setAge(int newAge) {};

    // Method to get the age
    int getAge() const {};

    // Method to display the object's information
    void displayInfo() const {};

    ~CPPClass() {};


    /* Assignment operator overload
        This allows us to assign one object of CPPClass to another.
        This is useful when we want to copy the values of one object to another object of the same class.
        It is important to check for self-assignment to avoid issues when an object is assigned to itself.
        The return type is CPPClass& to allow chaining of assignment operations.
    */
    
    // IF you dont override the assignment operator, the compiler will generate a default one that performs a member-wise copy. (shallow copy, meaning dynamic memory is not handled properly)
    CPPClass operator=(const CPPClass& other) {
        if (this != &other) { // Check for self-assignment
            name = other.name; // Copy the name
            age = other.age; // Copy the age
        }
        return *this; // Return the current object
    }
};


/*  
    Const means the parameter cannot be modified inside the function.
    & avoids making a copy of the string, which is more efficient for large strings.
*/


/* There are 4 types of constructors in C++
    
    1. Default Constructor: A constructor that takes no arguments and initializes the object with default values.
    2. Parameterized Constructor: A constructor that takes arguments to initialize the object with specific values
    3. Copy Constructor: A constructor that creates a new object as a copy of an existing object.
    4. Move Constructor: A constructor that transfers ownership of resources from one object to another, typically used for performance optimization.

*/


/* Example of a Default Constructor
class DefaultConstructorExample {
public: 
    DefaultConstructorExample() {
        // Initialization code here
    }
};  or dont need to define it if it is empty
Using the Default Constructor


DefaultConstructorExample obj; // Calls the default constructor
DefaultConstructorExample* objPtr = new DefaultConstructorExample(); // Dynamically allocated object

*/



/* Example of a Parameterized Constructor
class ParameterizedConstructorExample {
public:
    ParameterizedConstructorExample(int value, std::string name = "default") {
        // Initialization code with value
    }
};
Using the Parameterized Constructor
ParameterizedConstructorExample obj(42, "corey"); // Calls the parameterized constructor with value 42
ParameterizedConstructorExample* objPtr = new ParameterizedConstructorExample(42, "aniyah"); // Dynamically allocated object
ParameterizedConstructorExample obj(42); // this is valid, but it will use the default value for the name parameter
*/


/* Example of a Copy Constructor
class CopyConstructorExample {
public:
    CopyConstructorExample(const CopyConstructorExample& other) {
        // Copy initialization code here

        Use std::copy if you need to copy the contents of a raw array or manually managed memory.
    }
};
Using the Copy Constructor
CopyConstructorExample original; // Calls the default constructor
CopyConstructorExample copyOriginal(original); // Calls the copy constructor to create a new object as a copy of original

*/


/* Example of a Move Constructor
class MoveConstructorExample {
public:
    int* data;
    size_t size;

    MoveConstructorExample(MoveConstructorExample&& other) noexcept : data(other.data), size(other.size) {
        // Transfer ownership of resources from other to this object
        // Set other to a valid but unspecified state

        other.data = nullptr; // Prevents the destructor of other from freeing the resources
        other.size = 0; // Reset size to avoid double deletions
    }
};
Using the Move Constructor
MoveConstructorExample original; // Calls the default constructor
MoveConstructorExample moved(std::move(original)); // Calls the move constructor to transfer ownership of resources from original to moved
*/      




/* Explantation of Destructrs 
    A destructor in C++ is a special member function that is called automatically when an object goes out of scope or is deleted. 
    Its main purpose is to release resources that the object may have acquired during its lifetime (such as dynamic memory, file handles, or network connections).

   When is a destructor called?
        When a local object goes out of scope (end of a function/block)
        When you call delete on a pointer to an object created with new
        When a container (like std::vector) destroys its elements
    
   When do you need to define a destructor?
        When your class manages resources manually (e.g., uses new, opens files, allocates memory)
        To perform custom cleanup (like logging or closing connections)
        If your class only uses built-in types or STL containers, you usually don’t need to define a destructor—the compiler-generated one is enough.

 

*/



//Example of Polymorphmism 

#include <iostream>
#include <string>

class Animal {
public:
    virtual void speak() const { // virtual enables polymorphism
        std::cout << "Animal speaks" << std::endl;
    }
    virtual ~Animal() {} // Always make base destructors virtual!
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow!" << std::endl;
    }
};

void makeItSpeak(const Animal& a) {
    a.speak(); // Calls the correct speak() based on the actual object type
}

// Usage:
int main() {
    Dog d;
    Cat c;
    Animal* a1 = &d;
    Animal* a2 = &c;

    a1->speak(); // Outputs: Woof!
    a2->speak(); // Outputs: Meow!

    makeItSpeak(d); // Outputs: Woof!
    makeItSpeak(c); // Outputs: Meow!
    return 0;
}


// Explanation of Serialization and Deserialization
/*
    Serialization is the process of converting an object into a format that can be easily stored or transmitted, such as a byte stream or a string. 
    Deserialization is the reverse process, where the serialized data is converted back into an object.

    In C++, serialization can be done using libraries like Boost.Serialization, or by manually writing the object's data to a file or network socket.
    Deserialization involves reading the data back and reconstructing the object.

    Example of Serialization and Deserialization:
#include <fstream>
#include <iostream>
#include <string>
class Person {
public:
    std::string name;
    int age;

    // Serialize the object to a file
    void serialize(const std::string& filename) const {
        std::ofstream ofs(filename, std::ios::binary);
        if (ofs.is_open()) {        
            ofs << name << '\n' << age; // Write name and age to the file
            ofs.close();
        } else {
            std::cerr << "Error opening file for serialization." << std::endl;
        }
    }
    // Deserialize the object from a file
    static Person deserialize(const std::string& filename) {
        Person p;
        std::ifstream
    ofs(filename, std::ios::binary);
        if (ofs.is_open()) {
            std::getline(ofs, p.name); // Read name from the file
            ofs >> p.age; // Read age from the file
            ofs.close();
        } else {
            std::cerr << "Error opening file for deserialization." << std::endl;
        }
        return p;
    }
};
// Usage:
int main() {
    Person p1;
    p1.name = "John Doe";
    p1.age = 30;

    // Serialize the object to a file
    p1.serialize("person.dat");

    // Deserialize the object from the file
    Person p2 = Person::deserialize("person.dat");

    std::cout << "Name: " << p2.name << ", Age: " << p2.age << std::endl; // Outputs: Name: John Doe, Age: 30

    return 0;
}
*/