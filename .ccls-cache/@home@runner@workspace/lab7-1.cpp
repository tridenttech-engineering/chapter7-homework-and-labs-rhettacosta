//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Rhett Acosta on 2/26/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day = 0;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;

    for (day = 1; day < 8; day += 1)
        {
            cout << "How many texts did you send on day " << day << "? ";
            cin >> dailyTexts;
            totalTexts += dailyTexts;
        }

    average = static_cast<double>(totalTexts) / (day - 1);
    cout << fixed << setprecision(0);
    cout << "You sent an average of " << average << " texts per day." << endl;

    return 0;
}   //end of main function