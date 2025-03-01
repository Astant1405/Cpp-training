#include <iostream>
#include <set>
#include <string>

int main(){
    std::set<std::string> input;
    std::string str;
    while(std::cin >> str){
        for(size_t i = 0; i!= str.size(); i++){
            if(str[i] == '/'){
                input.insert(str.substr(0, i + 1));
            }
        }
    }
    for(auto iter = input.begin(); iter != input.end(); iter++){
        std::cout << *iter << '\n';
    }
}