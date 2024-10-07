#include<iostream>

const int& getInt(){
    std::cout << "getInt() called" << std::endl;
    const static int n = 10;
    std::cout << " n = " << n << std::endl;
    return n;
}

int main(){
    const int& id1 { getInt() };
    const int& id2 { getInt() };

    std::cout << id1 << id2 << std::endl;
    return 0;
}