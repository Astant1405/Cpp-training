#include <iostream>
#include <string>

int main(){
    int day, k;
    std::cin >> day;
    std::cin >> k;
    std::string spaces(day * 3 - 1, ' '); 
    for(int i = 1; i < k + 1; i++){
        if (i == 1){
            std::cout << spaces << i;
        }
        else if (day % 7 == 0 && i <= 9){
            std::cout << ' ' << ' ' << i << "\n";
        }
        else if (day % 7 == 0 && i > 9){
            std::cout << ' ' << i << "\n";
        }
        else if (i <= 9){
            std::cout << ' ' << ' ' << i;
        }
        else if (i > 9){
            std::cout << ' ' << i;
        }
        ++day;
    }
}