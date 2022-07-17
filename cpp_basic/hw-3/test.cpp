#include <iostream>

// int a = 2;
//int b = 6;

int summa(int a, int b){
    auto s = a + b;
    a = s;
    
    return a;
}

int main(){
    int a = summa(1, 2);
    std::cout << a << std::endl;

    return 0;
}