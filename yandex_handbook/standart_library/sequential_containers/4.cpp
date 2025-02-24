#include <vector>
#include <iostream>
#include <string>

int main(){
    int count = 0;
    std::vector <std::string> text;
    std::string buffer;
    std::string str;
    std::vector <std::string> commands;
    while(std::getline(std::cin, str)){
        if(str == "Down" or str == "Up" or str == "Ctrl+X" or str == "Ctrl+V"){
            commands.push_back(str);
        }
        else{
            text.push_back(str);
        }
    }
    text.pop_back();
    for(size_t i = 0; i != commands.size(); i++){
        if(commands[i] == "Down"){
            ++count; 
        }
        else if(commands[i] == "Ctrl+X"){
            buffer = text[count];
            text.erase(text.begin() + count);
        }
        else if(commands[i] == "Up"){
            --count; 
        }
        else if(commands[i] == "Ctrl+V"){
            text.insert(text.begin() + count, buffer);
            ++count;
        }
    }
    for(size_t i = 0; i != text.size(); i++){
        std::cout << text[i] << '\n';
    }
    return 0;
}