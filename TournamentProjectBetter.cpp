#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


class Dates 
{
public:
    string day1, day2;
    
    Dates()
    {
    day1 = "Friday";
    day2 = "Saturday";
        
    }
};

class Team {
public:
    string name;
    
};

int main()
{
    Dates dates;
    
    cout << "Welcome to the Basketball Tournament!\n";
    cout<< "Tournament will be played on " << dates.day1 << " and " << dates.day2 << endl << "\nTo sign up...\n";
    cout << "Please input team names.\n\n";
    
    Team team1, team2, team3, team4, team5, team6, team7, team8;
    
    cin >> team1.name;
    cin >> team2.name;
    cin >> team3.name;
    cin >> team4.name;
    cin >> team5.name;
    cin >> team6.name;
    cin >> team7.name;
    cin >> team8.name;
    

    string teams[8];
    teams[0] = team1.name;
    teams[1] = team2.name;
    teams[2] = team3.name;
    teams[3] = team4.name;
    teams[4] = team5.name;
    teams[5] = team6.name;
    teams[6] = team7.name;
    teams[7] = team8.name;


    cout << "List of Teams:\n\n";

    for (int i = 0; i < 8; i++){
        cout << teams[i] << "\n";
    }

    random_shuffle(&teams[0], &teams[7]);
    
    
    cout << "\n\nFirst Round of Tournament:\n\n";
    cout << teams[0] << " VS. " << teams[7] << endl;
    cout << teams[1] << " VS. " << teams[6] << endl;
    cout << teams[2] << " VS. " << teams[5] << endl;
    cout << teams[3] << " VS. " << teams[4] << endl;

    
    cout << "\n\nThank You for Signing up for the tournament.\n\nGood Luck!";
        
}
