#include <iostream>

using namespace std;

// Function declaration
void adjustHeat(int& insideTemp);

int main() {
    int outsideTemp = 50;
    int insideTemp = 50;
    
    while (outsideTemp <= 50) {
        adjustHeat(insideTemp);

        // Breaking out of the loop if the inside temperature reaches a certain level
        if (insideTemp >= 75) {
            cout << "Inside temperature is now quite high. Stopping the loop." << endl;
            break;
        }

        // Simulate changes in outside temperature (optional)
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
