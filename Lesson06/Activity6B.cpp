//Calculate the average of three marks, input integers output floating point value
#include <iostream>
using namespace std;

int main()
{
    int mark1, mark2, mark3;
    float result;
    cout << "Enter 3 marks: " << endl;
    cin >> mark1 >> mark2 >> mark3;
    result = float(mark1 + mark2 + mark3) / 3;
    cout << "The average is: " << result << endl;
    return 0;
}
