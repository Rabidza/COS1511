// Process a movie
#include <iostream>
#include <string>
using namespace std;

const int MAX_ACTORS = 5;

struct Movie
{
    string title;
    string director;
    int year;
    string actors[MAX_ACTORS];
    int numActors;
};

void inputData(Movie & movieP)
{
    int i;
    char answer;
    cout << "Enter the movie's information:" << endl;
    cout << "Title: ";
    getline(cin, movieP.title, '\n');
    cout << "Director: ";
    getline(cin, movieP.director, '\n');
    cout << "Year: ";
    cin >> movieP.year;
    cout << "The Actors:" << endl;
    i = 0;
    do
    {
        cout << "Actor no " << i+1 << ": ";
        cin.get( );
        getline(cin, movieP.actors[i], '\n');
        i++;
        if (i < MAX_ACTORS)
        {
            cout << "More actors? (Y/N) ";
            cin >> answer;
        }
        } while ((answer == 'Y' || answer == 'y') && i < MAX_ACTORS);
    movieP.numActors = i;
}

void displayData(const Movie & movieP)
{
    cout << "Movie info" << endl;
    cout << "==========" << endl;
    cout << "Title: " << movieP.title << endl;
    cout << "Director: " << movieP.director << endl;
    cout << "Year: " << movieP.year << endl;
    cout << "Actors:" << endl;
    for (int i = 0; i < movieP.numActors; i++)
        cout << '\t' << movieP.actors[i] << endl;
}

bool directorActor(const Movie & movieP)
{
    for (int i = 0; i < movieP.numActors; i++)
        if (movieP.actors[i] == movieP.director)
            return true;
    return false;
}

int main( )
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
