#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer;
    int street = 0;
    bool isNumber = true;

    cout << "Enter your location in Manhattan." << endl;
    cout << "If it's a number, type the number." << endl;
    cout << "If it's a name (like Canal or Prince), type the name: ";
    cin >> answer;

    // --- Convert string to number manually ---
    for (int i = 0; i < answer.length(); i++) {
        if (answer[i] >= '0' && answer[i] <= '9') {
            street = street * 10 + (answer[i] - '0');
        } else {
            isNumber = false;
            break;
        }
    }

    // --- If the input is a number ---
    if (isNumber) {
        if (street > 190 && street <= 207) {
            cout << "You're almost in Inwood - the very top of Manhattan!" << endl;
        }
        else if (street > 155 && street <= 190) {
            cout << "You're in Washington Heights." << endl;
        }
        else if (street > 110 && street <= 155) {
            cout << "You're in Harlem." << endl;
        }
        else if (street > 59 && street <= 110) {
            cout << "Near Central Park / Upper Midtown." << endl;
        }
        else if (street > 34 && street <= 59) {
            cout << "Midtown." << endl;
        }
        else if (street >= 14 && street <= 16) {
            cout << "Union Square is close by." << endl;
        }
        else if (street >= 3 && street <= 12) {
            cout << "East Village is close by." << endl;
        }
        else if (street > 14 && street < 34) {
            cout << "Chelsea / Flatiron area." << endl;
        }
        else if (street >= 1 && street < 14) {
            cout << "Downtown — many named streets here." << endl;
        }
        else if (street > 207) {
            cout << "That's beyond Manhattan - maybe the Bronx!" << endl;
        }
        else {
            cout << "You're off the island." << endl;
        }
    } 
    // --- If the input is text (a name) ---
    else {
        if (answer == "Canal" || answer == "canal") {
            cout << "You are in Chinatown." << endl;
        }
        else if (answer == "Prince" || answer == "prince") {
            cout << "You are in SoHo." << endl;
        }
        else if (answer == "Wall" || answer == "wall") {
            cout << "You are in the Financial District." << endl;
        }
        else if (answer == "Spring" || answer == "spring") {
            cout << "You are around SoHo." << endl;
        }
        else if (answer == "Houston" || answer == "houston") {
            cout << "You are near Greenwich Village." << endl;
        }
        else if (answer == "Chambers" || answer == "chambers") {
            cout << "You are in Tribeca." << endl;
        }
        else if (answer == "Delancey" || answer == "delancey") {
            cout << "You are in the Lower East Side." << endl;
        }
        else {
            cout << "That's downtown Manhattan." << endl;
        }
    }

    return 0;
}
 
