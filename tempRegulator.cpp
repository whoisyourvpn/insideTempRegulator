#include <iostream>

using namespace std;

const int DESIRED_INSIDE_TEMP = 72; // Desired inside temperature

// Function declaration
void adjustHeat(int& insideTemp);

int main() {
    int outsideTemp;
    int insideTemp;

    // Asking the user to input the outside temperature
    cout << "Enter the current outside temperature: ";
    cin >> outsideTemp;

    // Check if it's warm outside
    if (outsideTemp > 50) {
        cout << "It's warm outside, no need for heat." << endl;
        return 0; // Exit the program
    }

    // Asking the user to input the inside temperature
    cout << "Enter the current inside temperature: ";
    cin >> insideTemp;
    
    while (insideTemp < DESIRED_INSIDE_TEMP) {
        adjustHeat(insideTemp);
    }

    cout << "Desired inside temperature reached." << endl;

    return 0;
}

// Function definition
void adjustHeat(int& insideTemp) {
    cout << "Turning on the heat... ";
    insideTemp += 5; // Increase inside temperature by 5 degrees
    cout << "Heat increased. New inside temperature: " << insideTemp << " degrees." << endl;
}
