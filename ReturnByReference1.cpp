#include<iostream>

const std::string& getProgramName(){
    static const std::string str { "Video Game" };
    return str;
}

int& getIntValue(){
    static int n = 10;
    ++n;
    return n;
}
int main(){
    std::cout << "Program name is : " << getProgramName();
    int n1 = getIntValue();
    int& n = getIntValue();
    std::cout << n1 << std::endl;
    std::cout << n << std::endl;
    return 0;
}