#include <iostream>
#include <string>

int main(){
    int day, k;
    std::cin >> day;
    std::cin >> k;
    std::string spaces((day - 1) * 3, ' ');
    std::cout << spaces; 
    for(int i = 1; i < k + 1; i++){
        if(i < 10){
            std::cout << " ";
        }
        std::cout << i;
        if(day % 7 == 0){
            std::cout << "\n";
        }
        else{
            std::cout << " ";
        }
        ++day;
    }
}