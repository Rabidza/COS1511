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
    char moreActors;
    int actorNum = 0;

    cout << "Enter Movie Title: ";
    getline(cin, movieP.title, '\n');
    cout << "Enter Movie Director: ";
    getline(cin, movieP.director, '\n');
    cout << "Enter the year the movie was made: ";
    cin >> movieP.year;
    do
    {
        cout << "Enter actor " << actorNum + 1 << ": ";
        cin.get();
        getline(cin, movieP.actors[actorNum], '\n');
        actorNum++;
        if(actorNum < NUM_ACTORS)
        {
            cout << "Are there more actors? (Y,N) ";
            cin >> moreActors;
        }

    }while((moreActors == 'Y' || moreActors == 'y') && actorNum < NUM_ACTORS);

}

void displayData(const Movie movieP)
{
    cout << endl
         << "Movie Info" << endl
         << "==========" << endl
         << "Title: " << movieP.title
         << endl
         << "Director: " << movieP.director << endl
         << "Year: " << movieP.year << endl
         << "Actors: " << endl;
    for (int i = 0; i < NUM_ACTORS; i++)
        cout << '\t' << movieP.actors[i] << endl;
    cout << endl;
}

bool directorActor(const Movie movieP)
{
    for (int i = 0; i < NUM_ACTORS; i++)
    {
        if (movieP.actors[i] == movieP.director)
            return true;
    }

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
