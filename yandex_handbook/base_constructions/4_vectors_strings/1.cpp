#include <iostream>
#include <string>

int main(){
    int count_bletter = 0;
    int count_lletter = 0;
    int count_num = 0;
    int count_other = 0;
    bool status = true;
    std::string password;
    std::cin >> password;
    if(password.size() >= 8 && password.size() <= 14){
        for(size_t i = 0; i!= password.size(); ++i){
            if((int)password[i] > 32 && (int)password[i] < 127){
                if((int)password[i] >=65 && (int)password[i]<=89){
                    count_bletter = 1;
                }
                else if((int)password[i] >=97 && (int)password[i]<=122){
                    count_lletter = 1;
                }
                else if ((int)password[i] >=48 && (int)password[i]<=57)
                {
                    count_num = 1;
                }
                else{
                    count_other = 1;
                }
            }
            else{
                status = false;
                break;
            }
        }
    }
    else{
        status = false;
    }
    if(count_bletter + count_lletter + count_num + count_other < 3){
        status = false;
    }
    if (status){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
}