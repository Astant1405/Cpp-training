#include <iostream>
#include <deque>
#include <iterator>
#include <vector>
#include <string>

int main(){
    int wagon = 0;
    std::deque <int> wagons;
    std::string input;
    while(std::cin >> input){
        size_t k = 0;
        if(input == "+left"){
            std::cin >> wagon;
            wagons.push_front(wagon);
        }
        else if(input == "+right"){
            std::cin >> wagon;
            wagons.push_back(wagon);
        }
        else if(input == "-right"){
            std::cin >> wagon;
            if(k <= wagons.size()){
                wagons.erase(wagons.end() - wagon, wagons.end());
            }
            else{
                wagons.erase(wagons.end() - wagons.size(), wagons.end());
            }
        }
        else if(input == "-left"){
            std::cin >> wagon;
            k = wagon;
            if(k <= wagons.size()){
                wagons.erase(wagons.begin(), wagons.begin() + k);
            }
            else{
                wagons.erase(wagons.begin(), wagons.begin() + wagons.size());
            }
        }
    }
    for(auto iter = wagons.begin(); iter != wagons.end(); iter++){
        std::cout << *iter << " ";
    }
    std::cout << '\n';
    return 0;
}