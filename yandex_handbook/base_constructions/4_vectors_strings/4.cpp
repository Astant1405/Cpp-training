#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(){
    std::string word;
    std::vector<std::string> words;
    while(std::cin >> word){
        words.push_back(word);
    }
    std::cout << "\n";
    std::sort(words.rbegin(),words.rend());
    for(size_t j = 0; j!= words.size(); ++j){
        std::cout <<  words[j] << "\n";
    }
}