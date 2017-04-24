//Calculates discount on NuMetro movies
#include <iostream>
using namespace std;

float specialDiscount(char customerTypeP, char popcornP)
{
    if ((customerTypeP == 'p' || customerTypeP == 's') && popcornP == 'y')
        return 0.2;
    else
        return 0.1;
}

float normalDiscount(char popcornN)
{
    if (popcornN == 'y')
        return 0.05;
    else
        return 0;
}

int main()
{
    const float TICKET_PRICE = 80.00;
    char customerType, popcorn;
    float discount, newPrice;

    //get user input
    cout << "Enter the type of customer \n('p' for pensioners, 's' for student, 'o' for other): ";
    cin >> customerType;
    cout << "Did the customer buy popcorn? (y/n): ";
    cin >> popcorn;

    if (customerType == 'p' || customerType == 's')
        discount = TICKET_PRICE * specialDiscount(customerType, popcorn);
    else
        discount = TICKET_PRICE * normalDiscount(popcorn);

    newPrice = TICKET_PRICE - discount;

    cout << "The price of the ticket is: " << newPrice << endl;
}
