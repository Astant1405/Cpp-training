#include <iostream>

int main(){
    int a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if(a + b < c || b + c < a || a + c < b){
        std::cout << "UNDEFINED";
    }
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
}