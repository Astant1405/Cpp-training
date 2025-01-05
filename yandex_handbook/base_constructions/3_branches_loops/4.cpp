#include <iostream>

int leap_year(int year){
    if (year % 400 == 0){
        return  1;
    }
    else if (year % 4 == 0 && year % 100 != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int month, year;
    std::cin >> month;
    std::cin >>  year;
    if ((month < 8 && month % 2 != 0) || (month > 7 && month % 2 == 0)){
        std::cout << 31;
    }
    else if(leap_year(year) == 1 && month == 2){
        std::cout << 29;
    }
    else if(leap_year(year) == 0 && month == 2){
        std::cout << 28;
    }
    else{
        std::cout << 30;
    }
}