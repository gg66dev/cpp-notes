#include <iostream>

using namespace std;

int main () {

    //to retrieve the actual memory of a variable is using the address-of operator (&)
    int a = 1;
    cout << "a " << a << endl;
    cout << "address of a " << &a << endl; 

    //POINTERS: data structure to store a memory address
    int b = 2;
    int * pointerb = &b;
    int * otherPointer = pointerb;
    //int * otherPointer2 = *pointerb; //Throw error
    cout << "b " << b << endl;
    cout << "address of b " << &b << endl; 
    cout << "pointerb (point address of b) " << pointerb << endl;  //print address of b
    cout << "otherPointer " << otherPointer << endl; //print address of b 
    //to declare multiple pointers 
    int * pointerb1 = &b, * pointerb2 (&b), * pointerb3 {&b};
    //to declare the pointer of a pointer
    int ** pointerToPointerb2 = &pointerb;
    cout << "pointer to pointerb " << pointerToPointerb2 << endl; 
    
    //dereference operator (*) 
    int c = 3;
    int * pointerc = &c;
    int c2 = *pointerc;  // access to value to return the value    
    cout << "c " << c << endl;      //3
    cout << "c2 " << c2 << endl;    //3
    *pointerc = 4;    // access to value to assign a new value
    cout << "c " << c << endl;      //4
    cout << "c2 " << c2 << endl;    //3

    /**
     * References 
     */
    //reference is a alias for an object
    int d = 4;
    int &referenceD = d; //reference remains bound to its initial object (initialization is required)
    
    /** 
    * Inmutability 
    */
   const int e = 5; // value cant be changed

    //const reference
    const int f = 6;
    const int &refF = f; //cant change the value of the reference

    //const reference a non const value
    int g = 7;
    const int &refG = g; //reference is used as an inmutable value

    //const int h = 8;
    //int &refH = h; //Throw error ref require be const

    //const pointer
    const int i = 9;
    const int * pointerToI = &i;
    int const* pointerConstToI = &i; //can change address pointed to by the pointer once initialized

    int j = 10;
    const int * pointerToJ = &j; //valid: pointer used as an inmutable value.

    const int k = 11;
    //int * pointerToK = &k; //Throw error pointer require be const



    return 0;
}