#include <iostream>

int main(){
    int myData[10];
    for(int i = 0; i < 10; i ++){
        myData[i] = 1;
    }

    bool valid = true;
    while(valid){
        std::cout << "" << std::endl;

        for(int i = 0; i < 10; i ++){
                    std::cout << myData[i] << " ";
        }
       
        std::cout << std::endl;
        std::cout << std::endl;

        std::cout << "Input index: ";
        int index;
        std::cin >> index;

        std::cout << "Input value: ";
        int value;
        std::cin >> value;

        if(index >= 10 || index < 0)
            valid = false;
        else
            myData[index] = value;

    }

    std::cout << "" << std::endl;

    std::cout << "Index out of range. Exit." << std::endl;

    return 0;
}