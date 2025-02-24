#include <iostream>
#include <deque>
#include <iterator>
#include <vector>
#include <string>

void MakeTrain(std::deque <std::string> &wagons, std::vector <std::string> &input){
    for(size_t i = 0; i < input.size() - 1; i++){
        if(input[i][0] == '+' and input[i][1] == 'l'){
            wagons.push_front(input[i+1]);
        }
        else if(input[i][0] == '+' and input[i][1] == 'r'){
            wagons.push_back(input[i+1]);
        }
        else if(input[i][0] == '-' and input[i][1] == 'r'){
            wagons.erase(wagons.end() - std::stoi(input[i+1]), wagons.end());
        }
        else if(input[i][0] == '-' and input[i][1] == 'l'){
            wagons.erase(wagons.begin(), wagons.begin() + std::stoi(input[i+1]));
        }
    }
    for(auto iter = wagons.begin(); iter != wagons.end(); iter++){
        std::cout << *iter << " ";
    }
    return 0;
}

int main(){
    std::string str;
    std::deque <std::string> wagons;
    std::vector <std::string> input;
    while(std::cin >> str){
        input.push_back(str);
    }
    MakeTrain(wagons, input);
    return 0;
}