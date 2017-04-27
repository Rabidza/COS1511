// Example of a struct
#include <iostream>
using namespace std;

struct Shirt
{
    int size;
    char style;
    string colour;
    float price;
};

void inputData(Shirt & shirtP)
{
    cout << "Enter the size of the shirt: ";
    cin >> shirtP.size;
    cout << "Enter the style of the shirt (A/B/C): ";
    cin >> shirtP.style;
    cout << "Enter the colour of the shirt: ";
    cin >> shirtP.colour;
    cout << "Enter the price of the shirt: R";
    cin >> shirtP.price;
}

void displayData(const Shirt & shirtP)
{
    cout << endl;
    cout << "Shirt info" << endl;
    cout << "==========" << endl;
    cout << "Style: " << shirtP.style << endl;
    cout << "Size: " << shirtP.size << endl;
    cout << "Colour: " << shirtP.colour << endl;
    cout << "Price: R " << shirtP.price << endl;
}

int main()
{
    Shirt shirt1;

    inputData(shirt1);
    displayData(shirt1);

    return 0;
}
