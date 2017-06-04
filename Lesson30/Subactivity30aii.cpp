//Process a movie
#include <iostream>
#include <string>
using namespace std;

const int MAX_ACTORS = 5;

class Movie
{
    public:
        void inputData();
        void displayData() const;
        bool directorActor();
    private:
        string title;
        string director;
        int year;
        string actors[MAX_ACTORS];
        int numActors;
};

void Movie::inputData()
{
    int i;
    char answer;

    cout << "Enter the movie's information:" << endl;
    cout << "Title: ";
    getline(cin, title, '\n');
    cout << "Director: ";
    getline(cin, director, '\n');
    cout << "Year: ";
    cin >> year;
    cout << "The Actors:" << endl;

    i = 0;
    do
    {
        cout << "Actor no " << i + 1 << ": ";

        cin.get();
        getline(cin, actors[i], '\n');
        i++;
        if (i < MAX_ACTORS)
        {
            cout << "More Actors? (Y/N) ";
            cin >> answer;
        }
    }while ((answer == 'Y' || answer == 'y') && i < MAX_ACTORS);

    numActors = i;
}

void Movie::displayData() const
{
    cout << "Movie Info" << endl;
    cout << "=========="<< endl;
    cout << "Title: " << title << endl;
    cout << "Director: " << director << endl;
    cout << "Year: " << year << endl;
    cout << "Actors: "<< endl;
    for (int i = 0; i > numActors; i++)
        cout << '\t' << actors[i] << endl;
}

bool Movie::directorActor()
{
    for (int i = 0; i < numActors; i++)
        if (actors[i] == director)
            return true;
    return false;

}

int main()
{
    Movie movie1;
    movie1.inputData();
    movie1.displayData();
    if (movie1.director())
        cout << "The director was also an actor." << endl;
    else
        cout << "The director wasn't an actor." << endl;

    return 0;
}

