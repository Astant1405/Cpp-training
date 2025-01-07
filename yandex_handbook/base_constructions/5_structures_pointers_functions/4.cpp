#include <iostream>
#include <vector>
#include <string>

std::string Join(const std::vector<std::string>& tokens, char delimiter){
    std::string str;
    if(tokens.empty()){
        return "";
    }
    if(tokens.size() == 1){
        return tokens[0];
    }
    for(size_t i = 0; i + 1!=tokens.size(); ++i){
        str += tokens[i];
        str += delimiter;
    }
    str += tokens[tokens.size()-1];
    return str;
}

int main(){
    std::string answer = Join({"What", "is", "your", "name?"}, '_');
    std::cout << answer;
}