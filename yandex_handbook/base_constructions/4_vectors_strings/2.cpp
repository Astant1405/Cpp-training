#include <iostream>
#include <string>

int main(){
    std::string word;
    std::cin >> word;
    for(size_t i = 0; i != word.size(); ++i){
        if(word[i] == 'b' || word[i] == 'f' || word[i] == 'p' || word[i] == 'v'){
            word.replace(i, 1, "1");
        }
        else if(word[i] == 'c' || word[i] == 'g' || word[i] == 'j' || word[i] == 'k' || word[i] == 'q' || word[i] == 's' || word[i] == 'x' || word[i] == 'z'){
            word.replace(i, 1, "2");
        }
        else if (word[i] == 'd' || word[i] == 't'){
            word.replace(i, 1, "3");
        }
        else if (word[i] == 'l'){
            word.replace(i, 1, "4");
        }
        else if (word[i] == 'm' || word[i] == 'n'){
            word.replace(i, 1, "5");
        }
        else if (word[i] == 'r'){
            word.replace(i, 1, "6");
        }
        else{
            if (i!= 0){
                word.erase(i, 1);
                --i;
            }
        }
    }
    for(size_t j = 1; j < word.size(); ++j){
        if (word[j] == word[j-1]){
            word.erase(j, 1);
            --j;
        }
    }
    if (word.size() > 4){
        std::cout << word.substr(0, 4);
    }
    else if (word.size() < 4){
        int len = 4 - word.size();
        std::cout << word;
        for (int k = 0; k < len; ++k){
            std::cout << '0';
        }
    }
    else{
        std::cout << word; 
    }
    return 0;
}