#include <iostream>
#include <set>
#include <map>

int main(){
    std::string word;
    std::set <char> letters;
    std::map<char, int> wordletters;
    int count = 0;
    while(std::cin >> word){
        count++;
        std::set <char> letters;
        for(auto c : word){
            letters.insert(c);
        }
        for(const auto& letter : letters){
                ++wordletters[letter];
        }
    }
    for(const auto& [key, value] : wordletters){
        if(value == count){
            std::cout << key << value;
        }
    }
}