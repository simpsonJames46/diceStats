#include <iostream>
#include <list>

using namespace std;

int dieType = 0;
int diceQuantity = 0;


int diceRoll() {
    list<int> rolls;
    cout << "Which die did you want to roll, D4 (1), D6 (2), D8 (3), D10 (4), D12 (5), D20 (6), D100 (7)?" << endl;
    cin >> dieType;
    cout << "How many did you want to roll?" << endl;
    cin >> diceQuantity;
    switch (dieType) {
        case 1:
            for (int i = diceQuantity; i > 0; i--) {
                int roll = 1 + (rand() % 4);
                rolls.push_back(roll);
            }
            break;
        case 2:
            for (int i = diceQuantity; i > 0; i--) {
                int roll = 1 + (rand() % 6);
                rolls.push_back(roll);
            }
            break;
        case 3:
            for (int i = diceQuantity; i > 0; i--) {
                int roll = 1 + (rand() % 8);
                rolls.push_back(roll);
            }
            break;
        case 4:
            for (int i = diceQuantity; i > 0; i--) {
                int roll = 1 + (rand() % 10);
                rolls.push_back(roll);
            }
            break;
        case 5:
            for (int i = diceQuantity; i > 0; i--) {
                int roll = 1 + (rand() % 12);
                rolls.push_back(roll);
            }
            break;
        case 6:
            for (int i = diceQuantity; i > 0; i--) {
                int roll = 1 + (rand() % 20);
                rolls.push_back(roll);
            }
            break;
        case 7:
            for (int i = diceQuantity; i > 0; i--) {
                int roll = 1 + (rand() % 100);
                rolls.push_back(roll);
            }
            break;
        }
    return rolls;
}

//int diceAverage() {

//}

int main()
{
    cout << diceRoll() << endl;
    return 0;
}

