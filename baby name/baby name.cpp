#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  
    std::srand(static_cast<unsigned int>(std::time(nullptr));

    std::vector<std::string> names = { "Isla", "Charlotte", "Sophie", "Lily", " Ava", "Aria", " Moana", "Ataahua", " Marama", " Kaia", "Willow", " Manaia"};

    while (true) {
        
        std::cout << "Do you want a random name? (y/n): ";
        char choice;
        std::cin >> choice;

        if (choice == 'n' || choice == 'N') {
            std::cout << "Goodbye!" << std::endl;
            break; 
        }
        else if (choice == 'y' || choice == 'Y') {
            
            int randomIndex = std::rand() % names.size();
            std::string randomName = names.at(randomIndex);
            std::cout << "Random name: " << randomName << std::endl;

           
            std::cout << "Do you want another name? (y/n): ";
            std::cin >> choice;

            if (choice == 'n' || choice == 'N') {
                std::cout << "Goodbye!" << std::endl;
                break;  
        }
        else {
            std::cout << "Invalid choice. Please enter 'y' for a random name or 'n' to quit." << std::endl;
        }
    }

    return 0;
}


    
