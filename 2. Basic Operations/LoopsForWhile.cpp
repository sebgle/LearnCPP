#include <iostream>

// for loop
int main1(){

    for(int i = 0; i <= 10; i++){
        std::cout << "Iteration: " << i << std::endl;
    }

    return 0;
}

// while loop
int main2(){

    int i = 20;

    while(i > 10){
        std::cout << "I'm still greater than 10! I'm: " << i << std::endl;
        i--;
    }

    return 0;
}

// do-while loop
int main3(){
    bool sayHi = false;
    do{
        std::cout << "hi" << std::endl;
    } while (sayHi);

    return 0;
}