#include<iostream>

const std::string& getProgramName(){
    static const std::string str { "Video Game" };
    return str;
}

int main(){
    std::cout << "Program name is : " << getProgramName();
    return 0;
}