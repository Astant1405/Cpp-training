#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    std::vector <char> staples;
    std::string str;
    std::cin >> str;
    std::vector <char> open = {'(', '[', '{'};
    std::vector <char> close = {')', ']', '}'};
    bool status = true;
    for(const auto &  element : str){
        staples.push_back(element);
    }
    if(std::count(staples.begin(), staples.end(), '(') != std::count(staples.begin(), staples.end(), ')')){
        status = false;
    }
    else if(std::count(staples.begin(), staples.end(), '[') != std::count(staples.begin(), staples.end(), ']')){
        status = false;
    }
    else if(std::count(staples.begin(), staples.end(), '{') != std::count(staples.begin(), staples.end(), '}')){
        status = false;
    }
    else{
        for(size_t i = 0; i != staples.size() - 1; i++){
            if(std::find(open.begin(), open.end(), staples[0]) == open.end()){
                status = false;
                break;
            }
            // else if(std::find(open.begin(), open.end(), staples[i+1]) == open.end() && 
            // std::find(open.begin(), open.end(), staples[i]) != std::find(close.begin(), close.end(), staples[i+1])){
            //     status = false;
            //     break;
            // }
        }
    }
    if(status == false){
        std::cout << "NO";
    }
    else{
        std::cout << "YES";
    }
    return 0;
}