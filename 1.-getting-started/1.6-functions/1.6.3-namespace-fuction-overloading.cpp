
#include <iostream>

//namespace: used to group names together
namespace parent {
    namespace child {
        void add(int a, int b, int c);
    }
}

//overloading function
int add(int a, int b);
float add(float a, float b);


int main() {

    //to call method just with add, must declare 'using namespace parent::child;'  
    parent::child::add(1, 2, 3);

    std::cout << add(1,2) << std::endl;
    std::cout << add(2.0f, 0.5f) << std::endl;
    return 0;
}

//implenting function of namespace 
void parent::child::add(int a, int b, int c) {
    std::cout << "do nothing" << std::endl;
}

int add(int a, int b) {
    return a +b;
}

float add(float a, float b) {
    return a + b;
}