
#include <iostream>
using namespace std;

int main()
{
    const int COMPARE_VALUE = 100000;
    float salary, percentageAbove;
    char done;
    int counter = 0;
    int numAbove = 0;

    do
    {
        cout << "Enter salary: ";
        cin >> salary;

        if(salary > COMPARE_VALUE)
            numAbove ++;
        counter++;

        cout << "Are there more salaries to input? (Y/N): ";
        cin >> done;

    }while(done == 'Y' || done == 'y');

    percentageAbove = float(numAbove) / float(counter) * 100.0;
    cout << endl << "The average amount of salaries above " << COMPARE_VALUE << " is " << percentageAbove << " percent." << endl;

    return 0;
}
