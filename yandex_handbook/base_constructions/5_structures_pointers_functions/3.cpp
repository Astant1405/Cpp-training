#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> Split(const std::string& str, char delimiter){
    std::vector<std::string> data;
    size_t point = 0;
    for(size_t i = 0; i != str.size(); ++i){
        if(str[i] == delimiter){
            data.push_back(str.substr(point, i - point));
            point = i + 1;
        }
    }
    if(point < str.size()){
        data.push_back(str.substr(point, str.size()));
    }
    return data;
}

int main(){
    char delimiter;
    std::string input;
    std::getline(std::cin, input);
    std::cin >> delimiter;
    std::vector<std::string> answer = Split(input, delimiter);
    for(size_t i = 0; i!= answer.size(); ++i){
        std::cout << answer[i] << "\n";
    }
}