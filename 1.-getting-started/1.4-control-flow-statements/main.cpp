#include <iostream>
#include <vector>

int main () {

    //if statement
     if (true){
        std::cout << "print because is true" << std::endl;
    }
    int i = 10;
    while (i > 0) 
    {  
        if (i > 8) 
        {
            std::cout << "grather than 8" << std::endl;
        } else if ( i > 5) 
        {
            std::cout << "grather than 5" << std::endl;
        } else 
        {
            std::cout << "less that 5" << std::endl;
        }
        i--;
    } 

    //switch
    i = 10;
    while (i > 0) {
        switch (i) {
            case 10:
                std::cout << "10" << std::endl;
            break;
            case 5:
                std::cout << "5" << std::endl;
            break;
            default:
                std::cout << "default" << std::endl;
            break;
        }
       --i; 
    }

    //for -- loop
    for (i = 0; i < 3; i++) {
        std::cout << i << std::endl;
    }
    std::vector<int> v = {0,1,2};
    for (int i : v) {
        std::cout << i << std::endl;
    }    

    //while loop
    i = 10;
    while (i > 0) {
        std::cout << "*";
        i--;
    }
    std::cout << std::endl;

    //do while loop
    i = 20;
    do {
        std::cout << "*";
        i--;
    } while (i > 0);
    std::cout << std::endl;

    //break and continue
    i = 10;
    while (i > 0) {
         if (i == 2){
            std::cout << "X";
            break;
        }
        if (i % 2 == 0){
            std::cout << "0";
            i--;
            continue;
        }
        std::cout << "*";
        i--;
    }
    std::cout << std::endl;


    //try-catch
    i = 10;
    try 
    {
        throw i;
    }
    catch(int x) 
    {
        std::cout << "catch " << x << std::endl;
    }
    std::cout << "out of try" << std::endl;
    return 0;
}