#include<iostream>

// function prototypes
int& fn1(int& n){
    std::cout << "Inside function" << std::endl;
    std::cout << &n << std::endl;
    return n;
}

int main(){
    int n = 10;
    
    std::cout << &fn1(n) << std::endl;
    return 0;
}