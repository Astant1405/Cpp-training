#include <iostream>
#include <cmath>

int main(){
    int n;
    double summ = 0.0;
    std::cin >> n;
    for (int i = 1; i < n + 1; ++i){
        summ += pow(-1.0, i+1) / i;
    }
    std::cout << summ;
}