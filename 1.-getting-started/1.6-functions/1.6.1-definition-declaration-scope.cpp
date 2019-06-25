#include <iostream>

//declaration of function
void doNothing();

//global variable
int globalVar = 1;

int* foo(const int* other) 
{
    int fooLocal = 0;//local variable
    std::cout << "foo's local: " << fooLocal << std::endl;  
    std::cout << "main's local: " << *other << std::endl;  
    std::cout << "global: " << globalVar << std::endl;  
    return &fooLocal; //Warning  address of local variable 'fooLocal' returned
}

int main () {
    doNothing(); //Call the function
    
    
    int mainLocal = 15;
    int* fooPointer = foo(&mainLocal);//return a not valid access
    std::cout << "main's local: " << mainLocal << std::endl;  
    std::cout << "global: " << globalVar << std::endl;  
    return 0;
}

//Definition of function
void doNothing() 
{

}