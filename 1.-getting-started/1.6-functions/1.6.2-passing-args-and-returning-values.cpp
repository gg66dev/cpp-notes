
#include <iostream>
/*DETAILs IN IMPLEMENTATION */
void add(int a, int b, int c);
void add2(int a, int b, int& c);
int add3(int a, int b);
void argument_pointer(int* p);
int& max(int& a, int& b);
void add4(const int a, const int b, const int c);
void argument_pointer2(const int* p);
void add5(const int& a, const int& b, int& c);
int add6(int a, int b = 2);


int main() {
    //passing argument by value
    int a = 0;
    add(1,2, a);
    //passing argument by reference
    int c;
    add2(1,2, c);
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    
    //passing pointers
    int value = 0;
    int* ptr = &value;
    argument_pointer(ptr);
    std::cout << *ptr << std::endl; //1
   
    //returning by value
    a = add3(1,2);
    std::cout << a << std::endl;
    
    //return by reference
    //a = max(1,2); // error: cannot bind non-const lvalue reference 
                    //  of type 'int&' to an rvalue of type 'int'
    a = max(c,a);
    std::cout << a << std::endl;

    //passing by const value
    add4(1,2, a);
    std::cout << a << std::endl;
    ptr = &value;
    argument_pointer2(ptr);
    std::cout << *ptr << std::endl; //1

    //passing by const reference
    add5(1,2, a);
    std::cout << a << std::endl;

    //default values
    std::cout << add6(5) << std::endl;
    std::cout << add6(5,1) << std::endl;


    return 0;
}

//passing by value (new local object is created)
void add(int a, int b, int c) {
    c = a + b;
}

//passing by reference (create a variable that refers to an object
// that already exists)
void add2(int a, int b, int& c) {
    c = a + b;
}

//working with const Reference or r-value References
// r-value reference (&&) and reference  that can only refer to temporary values.

//passing a pointer as parameter: the pointer is passed by value but the object
// the pointer point going to be modified
void argument_pointer(int* p) {
    *p = 1;
    p = 0;
}

//function return by value
int add3(int a, int b) {
    return a + b;
}

//return by reference
int& max(int& a, int& b) {
    if (a > b) {
       return a; 
    } else {
       return b;
    }
}

//passing by const value
// the only reason to use constis to document to the implementation that it 
// cannot modify such a value
void add4(const int a, const int b, const int c) {
    int d;
    //c = a + b; //error: assignment of read-only parameter 'c'
    d = a + b;
}

//const value with pointers
void argument_pointer2(const int* p) {
    //*p = 1; // error: assignment of read-only location '* p'
    p = 0;
}

//passing by const reference
// function should remove the const from a reference only if want
// modify the provider object, otherwise every reference should be const
void add5(const int& a, const int& b, int& c) {
    c = a + b;
}

//default values
//  defaul value is just specify in the declaration of the function, not the
//  implementation
int add6(int a, int b) {
    return a + b;
}
