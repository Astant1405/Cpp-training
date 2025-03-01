#include <iostream>
#include <set>
#include <map>
#include <string>

int main(){
    std::map <int, std::set<std::string>> output;
    std:: set<std::string> words;
    std::string word;
    int num, number;
    std::cin >> num;
    for(int i = 0; i != num; i++){
        std::cin >> word >> number;
        output[number].insert(word);
    }
    for(const auto& [key, value] : output){
        std::cout << key;
        for(const auto& word : value){
            std::cout << ' ' << word;
        }
        std::cout << '\n';
    }
}