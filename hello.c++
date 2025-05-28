#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>


int main () {   

    std::string food[10];
    int size = sizeof(food)/sizeof(food[0]);

    std::string temp;

    for (int i = 0 ; i < size ; i++) {
        std::cout << "Enter the food #" << i+1 << " or press 'q' to exit: ";
        std::getline(std::cin , temp);
        if (temp == "q") {
            break;
        }
        else {
            food[i] = temp;
        }
    }

   for (int i = 0 ; !food[i].empty() ; i++) {
        std::cout << food[i] << '\n';
   }

    return 0;
}

    

