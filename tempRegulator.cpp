#include <iostream>

using namespace std;

int main() {
    int outsideTemp = 50;
    int insideTemp = 50;
    
    while (outsideTemp <= 50) {
        if (insideTemp <= 70) {
            cout << "Turning on the heat." << endl;
            insideTemp++; // Simulating the increase in inside temperature
        } else {
            cout << "Inside temperature is comfortable. No need for heat." << endl;
        }

        // Simulate changes in outside temperature (optional)
        outsideTemp++;
    }

    return 0;
}
