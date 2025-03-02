#include <iostream>
#include <queue>
#include <string>
#include <vector>  


int main(){
    std::priority_queue <int> line;
    std::string input;
    std::vector <std::string> commands;
    while(std::cin >> input){
        commands.push_back(input);
    }   
    for(size_t i = 0; i != commands.size(); i++){
        if(commands[i] == "ADD"){
            line.push(std::stoi(commands[i+1]));
        }
        else if(commands[i] == "EXTRACT"){
            if(line.empty()){
                std::cout << "CANNOT" << '\n';
            }
            else{
                std::cout << line.top() << '\n';
                line.pop();
            }
        }
        else if(commands[i] == "CLEAR"){
            while (!line.empty()) {
                line.pop();
            }
        }
    }
}