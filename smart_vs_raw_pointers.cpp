//RAW POINTER
// A raw pointer in C++ is a variable that holds the memory address of another variable or object. 
// It is called raw because it is unmanaged, you are responsible for memory allocation and deallocation.

//Example using code
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;   // dynamically allocate memory for an int
    *ptr = 50;            // assign value

    cout << "Dynamically allocated value: " << *ptr << endl;

    delete ptr;           // free allocated memory
    ptr = nullptr;        //  to avoid dangling pointer

    return 0;
}

// Risks of Raw Pointers:
// Memory leaks if delete is not called.
// Dangling pointers if memory is deleted but pointer is still used.


//SMART POINTER
// It is a special pointer that automatically manages memory.
// It ensures that memory is freed when it's no longer needed, helping to prevent memory leaks and dangling pointers.
//Smart pointers are defined in the <memory> header.

//Types-

// 1. std::unique_ptr is a smart pointer that owns and manages a resource exclusively no other pointer can own the same object. 
// When the unique_ptr goes out of scope, the object is automatically deleted.

#include <iostream>
#include <memory>  
using namespace std;

int main() {
    unique_ptr<int> num = make_unique<int>(5);  // creates and stores 5
    cout << "Value using unique_ptr: " << *num << endl;
    return 0;
}


//2. std::shared_ptr is a smart pointer that allows multiple shared_ptrs to own the same object. 
//The resource is destroyed only when the last shared_ptr pointing to it is destroyed.

#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> num1 = make_shared<int>(10);  // shared ownership
    shared_ptr<int> num2 = num1;  // another shared_ptr pointing to same value

    cout << "Value using shared_ptr: " << *num1 << endl;
    cout << "Reference count: " << num1.use_count() << endl; //Returns how many shared ptrs are pointing to the same object.

    return 0;
}