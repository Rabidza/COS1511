#include <iostream>
using namespace std;

const int NUM_ACTORS = 5;
struct Movie
{
    string title;
    string director;
    int year;
    string actors[NUM_ACTORS];
};

void inputData(Movie & movieP)
{
    cout << "TODO: inputData" << endl;
}

void displayData(const Movie movieP)
{
    cout << "TODO: displayData" << endl;
}

bool directorActor(const Movie movieP)
{
    cout << "TODO: directorActor" << endl;
    return false;
}

int main()
{
    Movie movie1;

    inputData(movie1);
    displayData(movie1);
    if (directorActor(movie1))
        cout << "The director was also an actor." << endl;
    else
        cout << "The director wasn't an actor." << endl;

    return 0;
}
