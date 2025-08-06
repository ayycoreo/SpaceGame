#include "CPPClass.h"
//Also the cpp file doesnt need to match the name of the class, it can be named anything, but it is a good practice to name it the same as the class.

void CPPClass::setName(const std::string& newName) {
    name = newName; // Set the name to the new value
}

void CPPClass::setAge(int newAge) {
    age = newAge; // Set the age to the new value
}

std::string CPPClass::getName() const {
    return name; // Return the name
}
int CPPClass::getAge() const {
    return age; // Return the age
}

void CPPClass::displayInfo() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl; // Display the object's information
}

CPPClass::~CPPClass() {
    std::cout << "Destructor called for " << name << std::endl; // Destructor to clean up resources
}
