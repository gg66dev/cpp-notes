
#include <iostream>

int add(int a, int b);
void add2(int a, int b, int& c);

int main() {

    int a = add(1,2);
    int c;
    add2(1,2, c);
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    return 0;
}

//passing by value (new local object is created)
int add(int a, int b) {
    return a + b;
}

//passing by reference (create a variable that refers to an object
// that already exists)
void add2(int a, int b, int& c) {
    c = a + b;
}


//working with const Reference or r-value References