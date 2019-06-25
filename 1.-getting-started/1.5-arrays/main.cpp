#include <iostream>

int main () {
    //array examples
    int intArr[2];
    bool boolArr[3];
    double doubleArr[4];

    //initialization
    int foo[8] = {1,2,3,4,5}; //rest is initialize with 0
    int foor2[] = {1,2,3,4,5};

    //accessing value
    intArr[0] = 1;
    int b = intArr[0];

    //multidimencial arrays
    int m3x5[3][5] = {
        //0,1,2,3,4
        {1,2,3,4,5},        //0
        {6,7,8,9,10},       //1
        {11,12,13,14,15}    //3
    };
    for (int x = 0; x < 3 ; x++)    
        for (int y = 0; y < 5 ; y++)    
            std::cout << m3x5[x][y] << std::endl;
    return 0;
}