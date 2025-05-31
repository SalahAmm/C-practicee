#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>


    class Human {
        public:
            std::string name;
            std::string occupation;
            int age;

            void eat() {
                std::cout << "Eating";
            }
            void drink() {
                std::cout<< "Drinking";
            }

            Human(std::string name , std::string occupation, int age) {
                this->name = name;
                this->occupation = occupation;
                this->age = age;


            }
    };
    
    int main () {   

        Human salah("salah", "single", 22);

     
        std::cout << salah.name << '\n';
        std::cout << salah.occupation << '\n';
        std::cout << salah.age << '\n';

    return 0;
};

    

