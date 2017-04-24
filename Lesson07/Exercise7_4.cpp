//Dialogue Generator
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, name2, colour, number, noun, adjective;
    cout << "Enter a person's name: ";
    cin >> name1;
    cout << "Enter another person's name: ";
    cin >> name2;
    cout << "Enter a colour: ";
    cin >> colour;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a noun: ";
    cin >> noun;
    cout << "Enter an adjective: ";
    cin >> adjective;

    cout << "\nDialogue" << endl;
    cout << "==========" << endl;
    cout << name1 << ":\t\"Couldn't you see that the traffic light was " + colour +"?\"" << endl;
    cout << name2 << ":\t\"But I had " + number + " people and a " + noun + " in the car with me.\"" << endl;
    cout << name1 << ":\t\"That is so " + adjective + "! You could have had them all killed.\"" << endl;

    return 0;
}

