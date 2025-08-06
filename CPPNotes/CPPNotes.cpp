

// #include <iostream> //For "print statement" Code Syntax: std::cout << "whatever you put in here" ;
// #include "CPPNotes.h"
// #include <vector> // For using vectors in C++
// #include <algorithm>
// #include <numeric>
// #include <array>
// #include <list>
// #include <deque>
// #include <set>
// #include <map>
// #include <memory>
// #include <optional>
// #include <functional>
// #include <thread>
// #include <mutex>
// #include <condition_variable>


// /* C++ Online Resources:
    
    
//     Philip Hanna: Youtuber w/ many programming/CS series
    
//     Yan "The Cherno" Chernikov: Youtuber w/ videos on C++, opengl, Game Development

//     Jason Turner: Youtuber, C++ Weekly (High level C++)

// */

 
// /*  C++ Pros & Cons
    

//     Pros: 
//     Performance: C++ is a low-level, compiled language that provides direct access to hardware resources, making it one of the fastest programming languages available.
    
//     Control: C++ provides a high degree of control over system resources, allowing developers to fine-tune their code for optimal performance.

//     Flexibility: C++ is a general-purpose language that can be used for a wide range of applications, from operating systems to web browsers.

//     Object-oriented programming: C++ supports object-oriented programming (OOP) concepts such as encapsulation, inheritance, and polymorphism, making it easy to write reusable and maintainable code.

//     Large community: C++ has a large and active community of developers, which means there are many resources available for learning and troubleshooting.

//     Cross-platform: C++ code can be compiled on a variety of platforms, including Windows, macOS, and Linux.


//     Cons:
//     Steep learning curve: C++ has a complex syntax and many nuances, making it challenging for beginners to learn.
    
//     Error-prone: C++'s lack of runtime checks and manual memory management can lead to errors and bugs that are difficult to track down.
    
//     Security risks: C++'s lack of memory safety features and its use of pointers can make it vulnerable to security risks such as buffer overflows and data corruption.
    
//     Compatibility issues: C++ code can be sensitive to compiler and platform differences, which can make it difficult to write cross-platform code.

//     Verbose code: C++ requires a lot of boilerplate code, which can make it tedious to write and maintain.

//     Legacy code: C++ has a large amount of legacy code that can be difficult to maintain and update.




//     C++ is commonly used in:

//     Operating systems (e.g., Windows, Linux)
    
//     Games (e.g., Unreal Engine, Unity)
    
//     Web browsers (e.g., Google Chrome, Mozilla Firefox)
    
//     Databases (e.g., MySQL, PostgreSQL)
    
//     Financial applications (e.g., trading platforms, risk management systems)

// */

// /* What is "std"

//     The std namespace is the standard namespace in C++ that contains all the standard library functions, classes, and objects. 
//     It provides access to features such as containers, algorithms, input/output operations, and more, ensuring organized and consistent usage of the C++ Standard Library.
// */




// int basicFunc(void) {
//     return 30; // You need to define functions before you use them, or else the compiler will not know what to do with them. 
// }

// //One dimensional arrays w/ C++
// int Arrays(void) {
//     int myArray[5]; 
//     int myArray2[5] = {1,2,3,4,5};
//     int myArray3[5] = {0}; // all elements iniialized to 0
//     int myArray4[] = {1,2,3,4,5}; //size is derived from the initializer list;
//     std:: string myStringArray[3] = {"Hello", "World", "!"};   // this is not a object tho. 

//     //syntax error bad array declaration/initialization: int badArray[] (no size specified or initializer list provided)

//     //Accesing elements in an single array:
//     // By the way C++ is 0-index 

//     // Two Dimensional arrays in C++
//     int myDoubleArray[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//     // Accessing the elements in a two-dimensonal array:
//     int x = myDoubleArray[0][0];

//     return myArray2[2];
// }

// void casting(void) {
//   // Sizes w/ ints:      char <= short <= int <= long <= long long 

//     // There are 4 types of casting in C++
//     /*
//         1. state_cast<type>(expression) - used for casting between related types, such as base and derived classes

//         2. dynamic_cast<type>(expression) - used for casting between polymorphic types, allowing for safe downcasting in class hierarchies

//         3. reinterpret_cast<type>(expression) - used for low-level casting, such as converting between pointer types or between pointer and integers

//         4. const_cast<type>(expression) - used for casting const or volatie objects to non const or non volatile, you can actually modify the "fina" object
    
//     */

//     // very niche of a use case, most liekly you will need to ask if its neccessary to do. 
    
// }


// void structs(void){
//     // Structs in C++ are similar to structs in C, but they can also have member functions and access specifiers (public, private, protected).
//     // They are used to group related data together.

//     struct Point {
//         int x;
//         int y;

//         void print() {
//             std::cout << "Point(" << x << ", " << y << ")" << std::endl;
//         }
//     };

//     Point p1 = {10, 20};
//     p1.print();

//     //however, C++ has classes, where are more powerful and flexible than structs
// }


// //Memory layout Reiver w/ C++

// /*
//             CODE --> STATIC --> STACK --> FREE MEMORY --> HEAP

//             CODE: all of the machine instructons are stored here
//             STATIC: global and static variables exist here
//             STACK: local vars and function calls 
//             FREE MEMORY: memory still left from the stack
//             HEAP: dynamically allocated memory, all variables that are created via "new" are stored here. So objects from classes is stored here


// */

// void dynamicMemory(void) {
//     // Dynamic memory allocation in C++ is done using the "new" operator, which allocates memory on the heap.
//     // The "delete" operator is used to deallocate memory that was allocated with "new".

//     int* ptr = new int; // allocate an int on the heap
//     *ptr = 42; // assign a value to the allocated int
//     delete ptr; // deallocate the memory // in C it was free(ptr)

//     // You can also allocate arrays on the heap using "new[]" and deallocate them using "delete[]".
//     int* arr = new int[5]; // allocate an array of 5 ints on
//     delete[] arr;

// }

// void vectors(void) {
//     //Vectors implements an array-like data structure that can grow and shrink in size dynamically, it is sort like an array under the hood

//     std::vector<int> myVector = {1,2,3,4,5,6,7,8,10}; // creates an empty vector of int
//     myVector.emplace_back(1);
//     // or 
//     myVector.push_back(2); // both of these methods add an element to the end of the vector


//     //Can be indexed and iterator though very fast
//     //Can be sorted very fast, if it contains simple data

//     //Expensive to remove an element from the middle
//     //Expensive if you want to add to the beginning or the middle of the vector, because it has to shift all the elements after the insertion point

//     //Vectors can also be used to store objects

//     //Here are some common functions and methods used with vectors in C++
//     // Example usage of size and empty
//     std::cout << "Vector size: " << myVector.size() << std::endl;
//     std::cout << "Vector is empty: " << std::boolalpha << myVector.empty() << std::endl;
//     myVector.clear(); // removes all elements from the vector
//     myVector.insert(myVector.begin() + 1, 3); // inserts 3 at index 1
//     myVector.erase(myVector.begin() + 1); // removes the element at index 1
//     myVector.resize(10); // resizes the vector to 10 elements, filling with default values if necessary
//     myVector.reserve(20); // reserves space for 20 elements, but does not change the size of the vector
//     //Explanation about reserve:

// // .reserve(n) in std::vector increases the vector’s capacity to at least n, but does not change its size.

// // Size: The number of elements currently in the vector (myVector.size()).
// // Capacity: The amount of memory allocated for elements, which may be more than the current size (myVector.capacity()).

// // What .reserve(n) does:
// // Allocates enough memory for at least n elements.
// // The vector’s .size() stays the same (no new elements are added).
// // The vector’s .capacity() may increase, but never decreases.

// // Why use .reserve()?
// // To avoid multiple reallocations if you know you’ll add many elements.
// // Makes adding elements faster by allocating memory in advance
    
    
//     myVector.shrink_to_fit(); // reduces the capacity of the vector to fit its size, freeing unused memory
    
    
    
//     //Vectors can also be used with iterators, which are similar to pointers and allow you to traverse the elements of the vector
    
//     for (auto it = myVector.begin(); it != myVector.end(); ++it)  // For itators it is preffered to do pre-increment (++it) rather than post-increment (it++) for performance reasons
//     {
//         std::cout << *it << " "; // dereference the iterator to get the value
//     }
//     //What is "auto"
//     //  In C++, the auto keyword tells the compiler to automatically deduce the type of a variable from its initializer.

//     // You can do a classic for-each loop 
//     for(auto value: myVector) {
//         std::cout << value << " "; // prints each value in the vector
//     }

//     // Or use Indexing
//     for(size_t i = 0; i < myVector.size(); ++i) {
//         std::cout << myVector[i] << " "; // prints each value in the vector using indexing
//     }


//     //Iterators can also be used with algorithms from the STL (Standard Template Library), here is some common ones
   
//     // For example, you can use the std::sort algorithm to sort the elements of a vector
//     std::sort(myVector.begin(), myVector.end()); // sorts the vector in ascending order

//     std::reverse(myVector.begin(), myVector.end()); // reverses the order of the elements in the vector

//     std::for_each(myVector.begin(), myVector.end(), 
//         [](int value) { // applies a function to each element in the vector
//         std::cout << value << " ";  // Btw a lambda function is used here. 
//     });

//     int count3 = std::count(myVector.begin(), myVector.end(), 3); // counts the number of occurrences of 3 in the vector
//     std::cout << "Count of 3 in vector: " << count3 << std::endl;
//     std::accumulate(myVector.begin(), myVector.end(), 0); // sums the elements of the vector, starting from 0



//     //You can also use the std::find algorithm to search for an element in a vector
//     auto it = std::find(myVector.begin(), myVector.end(), 3); // finds the first occurrence of 3 in the vector

//     //Some more common vector operations in C++
//     std::vector<int> v = {1, 2, 3};
//     v.push_back(4);           // v = {1, 2, 3, 4}
//     v.pop_back();             // v = {1, 2, 3}
//     int first = v.front();    // first = 1
//     int last = v.back();      // last = 3
//     v.at(1) = 10;             // v = {1, 10, 3}
//     v[2] = 20;                // v = {1, 10, 20}
//     v.assign(5, 7);           // v = {7, 7, 7, 7, 7}
//     std::vector<int> v2 = {9, 8};
//     v.swap(v2);               // v = {9, 8}, v2 = {7, 7, 7, 7, 7}





// }

// void lambdas(void)
// {
//     //Lambdas syntax:
//     /*  
//         [capture](parameters) -> return_type {
//             // function body
//         }

//         //Most of the time you will not need to specify the return type, as it can be deduced by the compiler.
//     */



//     // Lambdas in C++ are anonymous functions that can be defined inline. They can capture variables from their surrounding scope and can be used as function objects.

//     // Basic syntax of a lambda function:
//     auto myLambda = [](int x) { return x * 2; }; // takes an int and returns it multiplied by 2
//     std::cout << myLambda(5); // prints 10

//     // Capturing variables from the surrounding scope:
//     int a = 10;
//     auto captureLambda = [a](int x) { return a + x; }; // captures 'a' by value
//     std::cout << captureLambda(5); // prints 15

//     // Capturing by reference:
//     int b = 20;
//     auto refCaptureLambda = [&b](int x) { b += x; }; // captures 'b' by reference
//     refCaptureLambda(5);
//     std::cout << b; // prints 25

//     // You can also use lambdas with STL algorithms
//     std::vector<int> myVector = {1, 2, 3, 4, 5};
//     std::for_each(myVector.begin(), myVector.end(), [](int value) {
//         std::cout << value << " "; // prints each value in the vector
//     });
// }

// void stdArrays(void)
// {
//     // STD::array have similar functionality as vectors but hey are fixed size

//     // std::array is a fixed-size array that is part of the C++ Standard Library. It provides a safer and more convenient alternative to C-style arrays.


//     std::array<int, 5> stdArray = {1, 2, 3, 4, 5}; // creates an array of 5 ints

//     // Accessing elements in a std::array:
//     std::cout << stdArray[0]; // prints 1
//     std::cout << stdArray.at(1); // prints 2 (throws an exception if out of bounds)

//     // Iterating through a std::array:
//     for (const auto& value : stdArray) {
//         std::cout << value << " "; // prints each value in the array
//     }

//     for(auto value : stdArray) {
//         std::cout << value << " "; // prints each value in the array
//     }

//     // Getting the size of a std::array:
//     std::cout << stdArray.size(); // prints 5

//     // You can also use std::array with STL algorithms
//     std::sort(stdArray.begin(), stdArray.end()); // sorts the array in ascending order

// }

// void stdLists(void)
// {
//     // std::list is a doubly linked list that is part of the C++ Standard Library. It provides efficient insertion and deletion of elements at any position.

//     std::list<int> myList = {1, 2, 3, 4, 5}; // creates a list of ints

//     // Accessing elements in a std::list:
//     for (const auto& value : myList) {
//         std::cout << value << " "; // prints each value in the list
//     }

//     for(auto value : myList) {
//         std::cout << value << " "; // prints each value in the list
//     }

//     // Inserting elements into a std::list:
//     myList.push_back(6); // adds 6 to the end of the list
//     myList.push_front(0); // adds 0 to the front of the list

//     // Removing elements from a std::list:
//     myList.remove(3); // removes all occurrences of 3 from the list

//     // Iterating through a std::list:
//     for (auto it = myList.begin(); it != myList.end(); ++it) {
//         std::cout << *it << " "; // dereference the iterator to get the value
//     }
    
//     //Useful list functions
//     //     sort()         Sort the list
//     // reverse()       Reverse the list
//     // unique()       Remove consecutive duplicates
//     // merge(other_list)  Merge two sorted lists
//     // splice(pos, other_list)  Move elements from another list
    
//     //Explain splice:
//     //     The splice method in std::list moves elements from one list to another at a specified position.
//     //   It is very efficient because it only changes pointers—no elements are copied or created.
//     /*
//         list1.splice(position, list2, it);           // Move one element (iterator it) from list2 to list1
//         list1.splice(position, list2, first, last);  // Move a range [first, last) from list2 to list1

    
//     */

//     // Example 1: Move all elements from b into a before 2
//     std::list<int> a1 = {1, 2, 3};
//     std::list<int> b1 = {4, 5, 6};
//     auto pos1 = a1.begin();
//     ++pos1; // points to 2
//     a1.splice(pos1, b1); // Moves all elements from b1 into a1 before 2
//     // Now: a1 = {1, 4, 5, 6, 2, 3}, b1 is empty

//     // Example 2: Move one element (iterator it) from b2 to a2
//     std::list<int> a2 = {1, 2, 3};
//     std::list<int> b2 = {4, 5, 6};
//     auto pos2 = a2.end();
//     auto it2 = b2.begin(); // points to 4
//     a2.splice(pos2, b2, it2); // a2 = {1, 2, 3, 4}, b2 = {5, 6}

//     // Example 3: Move a range [first, last) from b3 to a3
//     std::list<int> a3 = {1, 2, 3};
//     std::list<int> b3 = {4, 5, 6, 7};
//     auto pos3 = a3.begin();
//     auto first3 = ++b3.begin(); // points to 5
//     auto last3 = b3.end();      // points past 7
//     a3.splice(pos3, b3, first3, last3); // a3 = {5, 6, 7, 1, 2, 3}, b3 = {4}
    
//     // std::list is useful when you need to frequently insert or delete elements at arbitrary positions, as it provides constant time complexity for these operations.

// }

// void stdDeques(void)
// {
//     // std::deque is a double-ended queue that is part of the C++ Standard Library. It allows for efficient insertion and deletion of elements at both ends.

//     std::deque<int> myDeque = {1, 2, 3, 4, 5}; // creates a deque of ints

//     // Accessing elements in a std::deque:
//     std::cout << myDeque[0]; // prints 1
//     std::cout << myDeque.at(1); // prints 2 (throws an exception if out of bounds)

//     // Iterating through a std::deque:
//     for (const auto& value : myDeque) {
//         std::cout << value << " "; // prints each value in the deque
//     }

//     for(auto value : myDeque) {
//         std::cout << value << " "; // prints each value in the deque
//     }

//     // Inserting elements into a std::deque:
//     myDeque.push_back(6); // adds 6 to the end of the deque
//     myDeque.push_front(0); // adds 0 to the front of the deque

//     // Removing elements from a std::deque:
//     myDeque.pop_back(); // removes the last element (6)
//     myDeque.pop_front(); // removes the first element (0)

//     // Useful functions for std::deque:
//     std::cout << "Deque size: " << myDeque.size() << std::endl;
//     std::cout << "Deque is empty: " << std::boolalpha << myDeque.empty() << std::endl;
// }

// void stdSets(void)
// {
//     // std::set is a collection of unique elements that are stored in a sorted order. It is part of the C++ Standard Library and provides efficient insertion, deletion, and search operations.

//     std::set<int> mySet = {1, 2, 3, 4, 5}; // creates a set of ints

//     // Inserting elements into a std::set:
//     mySet.insert(6); // adds 6 to the set
//     mySet.insert(3); // does nothing, as 3 is already in the set

//     // Accessing elements in a std::set:
//     for (const auto& value : mySet) {
//         std::
//         cout << value << " "; // prints each value in the set
//     }
//     for(auto value : mySet) {
//         std::cout << value << " "; // prints each value in the set
//     }

//     // Searching for an element in a std::set:
//     if (mySet.find(3) != mySet.end()) {
//         std::cout << "Found 3 in the set"; // prints if 3 is found
//     }

//     // Removing elements from a std::set:
//     mySet.erase(4); // removes 4 from the set

//     // Useful functions for std::set:
//     mySet.size(); // returns the number of elements in the set
//     std::cout << "Set is empty: " << std::boolalpha << mySet.empty() << std::endl;

//     //Best set functions to use:
//     mySet.clear(); // removes all elements from the set
//     mySet.count(3); // returns the number of occurrences of 3 in the set (0 or 1, since sets only contain unique elements)

//     // Lower_bound and upper_bound:
//     /*
//         For std::set:
//         mySet.lower_bound(value) returns an iterator to the first element that is not less than (>=) value.
        
//         If value exists, it points to it. If not, it points to the next greater element (or end() if none).
    
//     */

//     std::set<int> s1 = {1, 3, 5, 7};
//     auto it = s1.lower_bound(4); // points to 5
//     auto it2 = s1.lower_bound(3); // points to 3


//     /*
//         For std::set:
//         mySet.upper_bound(value) returns an iterator to the first element that is greater than (>) value.
//         If value exists, it skips it and points to the next greater element (or end() if none).
    
//     */
//     std::set<int> s2 = {1, 3, 5, 7};
//     auto x = s2.upper_bound(5); // points to 7
//     auto y = s2.upper_bound(7); // points to end()

// }

// void stdMaps(void)
// {
//     // std::map is a collection of key-value pairs that are stored in a sorted order based on the keys. It is part of the C++ Standard Library and provides efficient insertion, deletion, and search operations.

//     std::map<int, std::string> myMap = {{1, "one"}, {2, "two"}, {3, "three"}}; // creates a map with int keys and string values

//     // Inserting elements into a std::map:
//     myMap[4] = "four"; // adds a new key-value pair (4, "four")
//     myMap[2] = "deux"; // updates the value for key 2 to "deux"
//     myMap.insert({5, "five"}); // another way to insert a key-value pair

//     myMap.insert(std::make_pair(6, "six")); // using std::make_pair to insert a key-value pair



//     // Accessing elements in a std::map:
//     std::cout << myMap[1]; // prints "one"
//     std::cout << myMap.at(2); // prints "deux" (throws an exception if key 2 does not exist)

//     // Iterating through a std::map:
//     for (const auto& pair : myMap) {
//         std::cout << pair.first << ": " << pair.second << "\n"; // prints each key-value pair
//     }

//     for(auto pair : myMap) {
//         std::cout << pair.first << ": " << pair.second << "\n"; // prints each key-value pair
//     }

//     // Searching for an element in a std::map:
//     if (myMap.find(3) != myMap.end()) {
//         std::cout << "Found key 3 with value: " << myMap[3]; // prints if key 3 is found
//     }

//     // Removing elements from a std::map:
//     myMap.erase(2); // removes the key-value pair with key 2

//     // Useful functions for std::map:
//     std::cout << "Map size: " << myMap.size() << std::endl;
//     std::cout << "Map is empty: " << std::boolalpha << myMap.empty() << std::endl;

// }

// void pointers(void)
// {
//     // Pointers in C++ are variables that store the memory address of another variable. They are used for dynamic memory allocation, arrays, and data structures like linked lists.

//     int x = 10;
//     int* ptr = &x; // ptr now holds the address of x

//     std::cout << "Value of x: " << x << "\n"; // prints 10
//     std::cout << "Address of x: " << &x << "\n"; // prints the address of x
//     std::cout << "Value pointed to by ptr: " << *ptr << "\n"; // dereferences ptr to get the value of x (prints 10)

//     *ptr = 20; // changes the value of x through the pointer
//     std::cout << "New value of x: " << x << "\n"; // prints 20

//     // Dynamic memory allocation using pointers:
//     int* dynamicPtr = new int; // allocates memory for an int on the heap
//     *dynamicPtr = 30; // assigns a value to the allocated int
//     std::cout << "Value pointed to by dynamicPtr: " << *dynamicPtr << "\n"; // prints 30

//     delete dynamicPtr; // deallocates the memory allocated for dynamicPtr

//     //Const and Pointers
//     const int* constPtr = &x; // pointer to a constant int (cannot change the value of x through constPtr)
//     // *constPtr = 40; // error: cannot modify the value of x through constPtr
    
//     int* const constPtr2 = &x; // constant pointer to an int (cannot change the address stored in constPtr2)
//     // constPtr2 = &y; // error: cannot change the address stored in constPtr2
//     *constPtr2 = 50; // changes the value of x through constPtr2
// }


// void smartPointers(void)
// {
//     // Smart pointers in C++ are objects that manage the lifetime of dynamically allocated memory. They automatically deallocate memory when they go out of scope, preventing memory leaks.

//     // There are three main types of smart pointers in C++:
//     // 1. std::unique_ptr: Represents exclusive ownership of a dynamically allocated object.
//     // 2. std::shared_ptr: Represents shared ownership of a dynamically allocated object.
//     // 3. std::weak_ptr: Represents a weak reference to a shared object, preventing circular references.

//     // Example of std::unique_ptr:
//     std::unique_ptr<int> uniquePtr(new int(10)); // creates a unique pointer to an int with value 10
//     std::cout << "Value pointed to by uniquePtr: " << *uniquePtr << "\n"; // prints 10

//     // No need to delete uniquePtr, it will be automatically deallocated when it goes out of scope
//     // They are concise and safe to use, double reset it okay, and reassignment automatically deletes the old object.

//     // Example of std::shared_ptr:
//     std::shared_ptr<int> sharedPtr1(new int(20)); // creates a shared pointer to an int with value 20
//     {
//         std::shared_ptr<int> sharedPtr2 = sharedPtr1; // shared ownership, both pointers point to the same int
//         std::cout << "Value pointed to by sharedPtr2: " << *sharedPtr2 << "\n"; // prints 20
//         std::cout << "Reference count: " << sharedPtr1.use_count() << "\n"; // prints 2 (two pointers sharing ownership)
//     } // sharedPtr2 goes out of scope, reference count decreases to 1

//     std::cout << "Reference count after sharedPtr2 goes out of scope: " << sharedPtr1.use_count() << "\n"; // prints 1

//     // Example of std::weak_ptr:
//     std::weak_ptr<int> weakPtr = sharedPtr1; // weak reference to the shared pointer
//     if (auto lockedPtr = weakPtr.lock()) { // lock returns a shared_ptr if the object is still alive
//         std::cout << "Value pointed to by lockedPtr: " << *lockedPtr << "\n"; // prints 20
//     } else {
//         std::cout << "Object has been deallocated\n";
//     }

//     /*
//         Use a unique pointer when you want exclusive ownership of an object and don't need to share it with others. 
//             Private member data in a class is a good use case for unique pointers.
        
//         Use a shared pointer when you need to share ownership of an object with multiple pointers, such as in a graph or tree structure.
//             Perhaps configuration data that your entire application may want
//             Perhaps your application recieves a message over an interface, and multiple classes want access to the message data.

//         Use a weak pointer if want to share data but not ownership.
    
    
//     */

// }

// // Function template example:
// template <typename T>
// T add(T a, T b) {
//     return a + b; // adds two values of type T
// }

// template <int N>
// void goodFunction(const std::array<int,N> &arr) {
//     // This function template takes an std::array of size N and does something with it
//     for (const auto& value : arr) {
//         std::cout << value << " "; // prints each value in the array
//     }

//     //Therefore to use it where the size can vary, you can do this:
//     //std:array<int,5> myArray = {1, 2, 3, 4, 5};
//     // goodFunction<list.size()>(myArray); // calls the function with an array of size 5
//     //Or you can use a template parameter to deduce the size:
//     //goodFunction(myArray); // calls the function with an array of size 5
// } 

// // Class template example:
// template <typename T>
// class Box {
// public:
//     Box(T value) : value(value) {}
//     T getValue() const { return value; }
// private:
//     T value;
// };

// void templates(void)
// {
//     // Templates in C++ allow you to write generic and reusable code that can work with any data type. 
//     //They are used to create functions and classes that can operate on different types without duplicating code.

//     std::cout << add(5, 10); // prints 15 (int)
//     std::cout << add(5.5, 10.5); // prints 16 (double)

//     Box<int> intBox(42);
//     // or Box intBox(42); is valid
//     std::cout << intBox.getValue(); // prints 42

//     Box<std::string> strBox("Hello");
//     std::cout << strBox.getValue(); // prints "Hello"
// }

// void stdTuples(void)
// {
//     // std::tuple is a fixed-size collection of heterogeneous values. It can hold values of different types and provides a way to group related data together.

//     std::tuple<int, std::string, double> myTuple(1, "Hello", 3.14); // creates a tuple with an int, string, and double

//     // Accessing elements in a std::tuple:
//     std::cout << std::get<0>(myTuple) << "\n"; // prints 1 (int)
//     std::cout << std::get<1>(myTuple) << "\n"; // prints "Hello" (string)
//     std::cout << std::get<2>(myTuple) << "\n"; // prints 3.14 (double)

//     // Iterating through a std::tuple:
//     // You can use structured bindings (C++17) to unpack the tuple:
//     auto [a, b, c] = myTuple; // a = 1, b = "Hello", c = 3.14
//     std::cout << a << ", " << b << ", " << c << "\n";

//     // You can also use std::apply to apply a function to each element of the tuple:
//     std::apply([](auto&&... args) {
//         ((std::cout << args << " "), ...); // prints each element in the tuple
//     }, myTuple);
// }

// void stdPairs(void)
// {
//     // std::pair is a simple container that holds two values of potentially different types. It is often used to represent key-value pairs or to group two related values together.

//     std::pair<int, std::string> myPair(1, "Hello"); // creates a pair with an int and a string

//     // Accessing elements in a std::pair:
//     std::cout << myPair.first << "\n"; // prints 1 (int)
//     std::cout << myPair.second << "\n"; // prints "Hello" (string)

//     // You can also use structured bindings (C++17) to unpack the pair:
//     auto [key, value] = myPair; // key = 1, value = "Hello"
//     std::cout << key << ", " << value << "\n";

//     // Pairs are often used in conjunction with maps and sets in C++.
// }


// void stdOptionals(void)
// {
//     // std::optional is a container that may or may not contain a value. It is used to represent optional values that may be absent, providing a safer alternative to using pointers or sentinel values.

//     std::optional<int> myOptional; // creates an empty optional (no value)

//     if (!myOptional.has_value()) {
//         std::cout << "Optional is empty\n"; // prints if the optional is empty
//     }

//     myOptional = 42; // assigns a value to the optional

//     if (myOptional.has_value()) {
//         std::cout << "Optional has value: " << myOptional.value() << "\n"; // prints 42
//     }

//     // You can also use the value_or method to provide a default value if the optional is empty:
//     std::cout << "Value or default: " << myOptional.value_or(0) << "\n"; // prints 42

    
// }
// // Optional can be used with functions that may not return a value:
// std::optional<int> findValue(int key) {
//         if (key == 1) {
//             return 42; // returns an optional with a value
//         }
//         return std::nullopt; // returns an empty optional
// }

// void stdFunctions(void)
// {
//     // std::function is a general-purpose polymorphic function wrapper that can store, copy, and invoke any callable target (functions, lambda expressions, bind expressions, or other function objects).

//     std::function<int(int, int)> add = [](int a, int b) { return a + b; }; // creates a function that adds two integers

//     std::cout << "Result of add: " << add(5, 10) << "\n"; // prints 15

//     // You can also use std::function to store member functions or free functions:
//     auto multiply = [](int a, int b) { return a * b; };
//     std::function<int(int, int)> func = multiply;
//     std::cout << "Result of multiply: " << func(5, 10) << "\n"; // prints 50
// }

// void threads(void)
// {
//     // Threads in C++ allow you to run multiple tasks concurrently, making it easier to write multi-threaded applications. The C++ Standard Library provides the <thread> header for working with threads.

//     std::thread myThread([]() {
//         std::cout << "Hello from thread!\n"; // prints from the new thread
//     });

//     myThread.join(); // waits for the thread to finish before continuing

//     // You can also pass arguments to the thread function:
//     int value = 42;
//     std::thread anotherThread([value]() {
//         std::cout << "Value from thread: " << value << "\n"; // prints 42
//     });

//     anotherThread.join(); // waits for the thread to finish
// }

// void conditionVariables(void)
// {
//     // Condition variables in C++ are used for synchronizing threads. They allow threads to wait for a certain condition to be met before proceeding.

//     std::mutex mtx; // mutex for protecting shared data
//     std::condition_variable cv; // condition variable for signaling

//     bool ready = false; // shared data

//     std::thread producer([&]() {
//         std::unique_lock<std::mutex> lock(mtx); // lock the mutex
//         ready = true; // set the condition
//         cv.notify_one(); // notify one waiting thread
//     });

//     std::thread consumer([&]() {
//         std::unique_lock<std::mutex> lock(mtx); // lock the mutex
//         cv.wait(lock, [&]() { return ready; }); // wait until ready is true

//         /*
//             You need a lambda because std::condition_variable::wait can take a predicate—a function that returns true or false. 
            
//             This predicate is checked after the thread is notified and after spurious wakeups, to decide if the thread should stop waiting.

//             The lambda [&]() { return ready; } captures the local variable ready by reference and returns its value. The thread will only stop waiting when ready is true.
//         */


//         std::cout << "Consumer is ready!\n"; // prints when the condition is met
//     });

//     producer.join(); // waits for the producer thread to finish
//     consumer.join(); // waits for the consumer thread to finish
// }
