#include <iostream>
#include "CampusData.cpp"

using namespace std;

int main() {

    const int TOTAL_LOCATIONS = 37;

    CampusGraph campus(TOTAL_LOCATIONS);

    initializeCampusData(campus);

    int choice;

    while (true) {

        cout << "\n";
        cout << "========================================\n";
        cout << "       SMART CAMPUS NAVIGATOR SYSTEM\n";
        cout << "========================================\n";

        cout << "1. View Campus Locations\n";
        cout << "2. Find Shortest Path\n";
        cout << "3. Exit\n";

        cout << "Enter your choice: ";

        if (!(cin >> choice)) {

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "\nInvalid input! Enter a number.\n";
            continue;
        }

        if (choice == 1) {

            campus.displayAllLocations();
        }

        else if (choice == 2) {

            campus.displayAllLocations();

            int src, dest;

            cout << "\nEnter Source Location ID: ";

            if (!(cin >> src)) {

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Invalid input!\n";
                continue;
            }

            cout << "Enter Destination Location ID: ";

            if (!(cin >> dest)) {

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Invalid input!\n";
                continue;
            }

            campus.findShortestPath(src, dest);
        }

        else if (choice == 3) {

            cout << "\nExiting Smart Campus Navigator. Goodbye!\n";
            break;
        }

        else {

            cout << "\nInvalid choice! Select 1, 2 or 3.\n";
        }
    }

    return 0;
}
