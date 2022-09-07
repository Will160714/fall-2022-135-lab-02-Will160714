#include <iostream>

int main(){
    std::cout << "Please enter an integer: ";
    int input;
    std::cin >> input;

    bool invalid = true;
    while(invalid){
        if(input > 0 && input < 100)
            invalid = false;
        else{
            std::cout << "Please re-enter: ";
            std::cin >> input;
        }
    }

    std::cout << "" << std::endl;
    std::cout << "Number squared is " << input * input << std::endl;

    return 0;
}