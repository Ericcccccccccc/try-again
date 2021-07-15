#include <iostream>
#include <string>
using namespace std;

#include "roster.h"
#include "degree.h"


int main()
{

    const string studentData[] =

    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Eric,Hellrung,ehellru@wgu.edu,33, 1,12,123,SOFTWARE"
    };

    cout << "C867-Scripting and Programming Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 005312376" << endl;
    cout << "Name: Eric Hellrung" << endl;

    cout << degreeProgramStrings[0];
}
