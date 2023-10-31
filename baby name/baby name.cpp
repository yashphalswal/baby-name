#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    cout << "hello" << endl;

    srand(static_cast<unsigned int>(time(nullptr)));

    vector<string> names = { "Isla", "Charlotte", "Sophie", "Lily", " Ava", "Aria", " Moana", "Ataahua", " Marama", " Kaia", "Willow", " Manaia" };

    while (true) {

        cout << "Do you want a random name? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            cout << "Goodbye!" << endl;
            break;
        }
        else if (choice == 'y' || choice == 'Y') {

            int randomIndex = rand() % names.size();
            string randomName = names.at(randomIndex);
            cout << "Random name: " << randomName << endl;


            cout << "Do you want another name? (y/n): ";
            cin >> choice;

            if (choice == 'n' || choice == 'N') {
                cout << "Goodbye!" << endl;
                break;
            }
            else {
                cout << "Invalid choice. Please enter 'y' for a random name or 'n' to quit." << endl;
            }
        }

    }
    return 0;
}


    
