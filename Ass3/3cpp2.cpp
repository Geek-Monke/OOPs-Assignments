#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
public:
    string name;
    int innings;
    int notOutInnings;
    int totalRuns;
    int totalWickets;

    void input()
    {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter number of innings played: ";
        cin >> innings;
        cout << "Enter number of not out innings: ";
        cin >> notOutInnings;
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter total wickets taken: ";
        cin >> totalWickets;
    }

    double calculateBattingAverage()
    {
        return (innings - notOutInnings > 0) ? static_cast<double>(totalRuns) / (innings - notOutInnings) : 0.0;
    }

    string getCategory()
    {
        if (innings >= 50)
        {
            if (calculateBattingAverage() > 35)
            {
                if (totalWickets > 49)
                {
                    return "ALL ROUNDER";
                }
                return "BATSMAN";
            }
            else if (totalWickets > 49)
            {
                return "BOWLER";
            }
        }
        return "UNKNOWN";
    }

    void displayInfo()
    {
        cout << "Cricketer's name: " << name << "\n";
        cout << "Innings played: " << innings << "\n";
        cout << "Not out innings: " << notOutInnings << "\n";
        cout << "Total runs scored: " << totalRuns << "\n";
        cout << "Total wickets taken: " << totalWickets << "\n";
        cout << "Category: " << getCategory() << "\n";
    }
};

int main()
{
    const int numCricketers = 3;
    Cricketer cricketers[numCricketers];

    for (int i = 0; i < numCricketers; ++i)
    {
        cout << "Enter details for cricketer " << i + 1 << ":\n";
        cricketers[i].input();
    }

    cout << "\nCricketer Information:\n";
    for (int i = 0; i < numCricketers; ++i)
    {
        cricketers[i].displayInfo();
        cout << "\n";
    }

    return 0;
}