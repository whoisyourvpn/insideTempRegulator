#include <iostream>

using namespace std;

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
    
    while (outsideTemp <= 50) {
        adjustHeat(insideTemp);

        // Breaking out of the loop if the inside temperature reaches 75
        if (insideTemp >= 75) {
            cout << "Inside temperature is now quite high. Stopping the loop." << endl;
            break;
        }

        // Incrementing outsideTemp to simulate a change and prevent an infinite loop
        outsideTemp++;
    }

    return 0;
}

// Function definition
void adjustHeat(int& insideTemp) {
    if (insideTemp <= 70) {
        cout << "Turning on the heat." << endl;
        insideTemp++; // Simulating the increase in inside temperature
    } else {
        cout << "Inside temperature is comfortable. No need for heat." << endl;
    }
}
