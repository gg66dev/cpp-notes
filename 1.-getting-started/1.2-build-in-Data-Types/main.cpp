#include <iostream>

/**
 * Two categories of build-in data types
 * * Primitive data types: use directy by the user
 * * Abstract of user defined data types: are defined by the user
 */

using namespace std;

int main () {

    /**
     * Primitive data types
     */
    //integer (4 bytes in mem space)
    int myIntMin = -2147483648;
    cout << "myIntMin size: " << sizeof(myIntMin) << endl;
    int myIntMax = 2147483648;
    cout << "myIntMax size: " << sizeof(myIntMax) << endl;

    //character
    //long enough to represent any UTF-8 value (1 byte in mem space)
    char myChar = 'a';
    cout << "myChar size: " << sizeof(myChar) << endl;
    char16_t myChar16 = u'水'; //UTF-16 (2 bytes)
    cout << "myChar16 size: " << sizeof(myChar16) << endl;
    char32_t myChar32 = U'\U0001f34c'; //UTF-32 (4 bytes)
    cout << "myChar32 size: " << sizeof(myChar32) << endl;

    //boolean
    // true or false
    bool myBool = true;
    cout << "myBool size: " << sizeof(myBool) << endl;

    //Floating-point (4 bytes of memory space)
    float myFloat = 1.0f;
    cout << "myFloat size: " << sizeof(myFloat) << endl;

    //Double floating point (8 bytes of memory space)
    double myDouble = 1.0;
    cout << "myDouble size: " << sizeof(myDouble) << endl;

    //Void (valueless data, used by function dont return data)

    //Wide character (2 bytes long)
    wchar_t myWideChar  = L'A';    
    cout << "myWideChar size: " << sizeof(myWideChar) << endl;
    wchar_t myWideChar2 = L'水';
    cout << "myWideChar2 size: " << sizeof(myWideChar2) << endl;

    std::cout  << "so far so good" << std::endl;
    
   /**
    * Datatype Modifiers
    */ 
   //signed : negative or positive numbers
   //unsigned: numbers greater than or equal to zero
    signed int mySignedIntMax = 2147483648; //is the same that 'int'
    cout << "mySignedIntMax size: " << sizeof(mySignedIntMax) << endl;
    unsigned myUnsignedInt = 2147484000; // by default unsigned is a 'unsigned int'
    cout << "myUnsignedInt size: " << sizeof(myUnsignedInt) << endl;

    //different size of integer
    short int myshortInt = 1; // 2 bytes long
    cout << "myShortInt size: " << sizeof(myshortInt) << endl;
    long int myLongInt = 1; // 4 bytes long
    cout << "myLongInt size: " << sizeof(myLongInt) << endl;
    long long int myLongLongInt = 1; // 8 bytes long
    cout << "myLongLongInt size: " << sizeof(myLongLongInt) << endl;

    /**
     * Variable Definition 
     */
    //initialization
    int myInitialization1 = 1;
    int myInitialization2 (2);
    int myInitialization3 {3};
    auto myInitialization4 = 4; //type deduction (int)
    decltype(myInitialization4) myNotInitialization; //other way of type deduction (int)

    std::cout  << "the end for now" << std::endl;
    return 0;
}