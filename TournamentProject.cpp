#include <iostream>
#include <string>

using namespace std;


class Team {
public:
    
    string name;
       
};

int main()
{
    Team team1, team2, team3, team4, team5, team6, team7, team8;
    
    cin >> team1.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team1.name << " is the 1st seed." << endl;

    cin >> team2.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team2.name << " is the 2nd seed." << endl;

    cin >> team3.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team3.name << " is the 3rd seed." << endl;

    cin >> team4.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team4.name << " is the 4th seed." << endl;

    cin >> team5.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team5.name << " is the 5th seed." << endl;

    cin >> team6.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team6.name << " is the 6th seed." << endl;

    cin >> team7.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team7.name << " is the 7th seed." << endl;

    cin >> team8.name;
    cout << "Thank you for signing up for the tournament. Your team: " << team8.name << " is the 8th seed." << endl;

    cout << "Eight total teams: " << team1.name << ", " << team2.name << ", " << team3.name << ", " << team4.name << ", " << team5.name << ", " <<team6.name << ", " << team7.name << ", " << team8.name;


    cout << "Schedule:" << endl; << endl;
    cout << team1.name << " vs. " << team8.name << endl;
    cout << team2.name << " vs. " << team7.name << endl;
    cout << team3.name << " vs. " << team6.name << endl;
    cout << team4.name << " vs. " << team5.name << endl;

    cout << "Good luck to all teams." << endl;
}
