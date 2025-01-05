#include <iostream>

int main(){
    int num;
    int summ = 0;
    std::cin >> num;
    while(num > 0){
        summ += num % 10;
        num = num / 10;
    }
    std::cout << summ;
}