#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>


int main () {   

    std::string pizza[100];
    fill(pizza , pizza + 100 ,"pizza");

    for (std::string element: pizza) {
        std::cout << element << std::endl;
    }




    return 0;
}

    

