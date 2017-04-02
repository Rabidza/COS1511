//Calculate the amount due for a vehicle parked x amount of hours in a parkade
#include <iostream>
using namespace std;

int main()
{
    char typeOfVehicle;
    int hours, amountDue;

    //Ask for the type of vehicle as well as the amount of hours
    cout << "Please enter the type of vehicle (C: Car, T: Truck): ";
    cin >> typeOfVehicle;
    cout << "How many hours were you parked? ";
    cin >> hours;

    //Determine the amount due based on hours
    switch(hours)
    {
        case 1:
            amountDue = 2;
            break;
        case 2:
            amountDue = 3;
        case 3:
        case 4:
        case 5:
            amountDue = 5;
            break;
        default:
            amountDue = 10;
    }

    //Add the additional amount for trucks
    if (typeOfVehicle == 'T' || typeOfVehicle == 't')
        amountDue += 1;

    //Display the amount due
    cout << endl << "The amount due is R" << amountDue << endl;

    return 0;
}
