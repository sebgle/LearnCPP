// 5 = 0101
// 1 = 0001

//AND
int AND = 5 & 1;
// 0101 & 0001 = 0001 = 1

//OR
int OR = 5 | 1;
// 0101 | 0001 = 0101 = 5

//XOR 
int XOR = 5 ^ 1;
// 0101 ^ 0001 = 0100 = 4

//NOT 
int NOT = ~5;
// ~ 0101 = 1010 = -6

//Left Shift
int LS = 5 << 1;
// 0101 << 1 =  0 1010 = 10

//Right Shift
int RS = 5 >> 1;
// 0101 >> 1 = 0010 = 2

#include <iostream>

int main(){

    std::cout << AND << std::endl;
    std::cout << OR << std::endl;
    std::cout << XOR << std::endl;
    std::cout << NOT << std::endl;
    std::cout << LS << std::endl;
    std::cout << RS << std::endl;
    
    return 0;
}

