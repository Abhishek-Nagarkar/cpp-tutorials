#include<iostream>

void fn1(int n){
    std::cout << &n << std::endl;
}

void fn2(int* n){
    std::cout << n << std::endl;
}

void fn3(int& n){
    std::cout << &n << std::endl;
}

int main(){
    int n = 10;
    int *p = &n;
    std::cout << "Address of n : " << &n << std::endl;
    std::cout << "Value stored in n : " << n << std::endl;
    std::cout << "Address of p : " << &p << std::endl;
    std::cout << "Value stored in p " << p << std::endl;
    std::cout << "Value pointed by p : " << *p << std::endl;

    fn1(n);
    fn2(&n);
    fn3(n);
    return 0;

}
