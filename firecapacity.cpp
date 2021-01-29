#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int maxCapacity;
    cout << "enter max capacity: ";
    cin >> maxCapacity;

    int numPeople;
    cout << "enter number of people: ";
    cin >> numPeople;

    if (numPeople <= maxCapacity) {
        cout << "it is legal to hold the meeting, ";
        cout << maxCapacity - numPeople << " more people may attend";
        // check if room is legal, then calculate and output how many more people until
        // maximum capacity is reached
    }
    else {
        cout << "the meeting cannot be held due to fire regulations, ";
        cout << numPeople - maxCapacity << " people must be excluded";
        // if room is not legal, calculate how many people there are too many of
    }
  return 0;
}
