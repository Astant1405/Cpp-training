#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string sentence;
    std::getline(std::cin, sentence);
    for(size_t i = 0; i!=sentence.size(); ++i){
        if(sentence[i] == ' '){
            sentence.erase(i,1);
            --i;
        }
    }
    std::string reverse_sentence = sentence;
    std::reverse(reverse_sentence.begin(), reverse_sentence.end());
    if (reverse_sentence == sentence){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
    return 0;
}