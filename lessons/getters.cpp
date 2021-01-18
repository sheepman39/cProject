#include <iostream>

using namespace std;

class Movie
{
    // anything under private will *only* be accessible by the class
    // helps control access to different variables
    private:
        string rating;

    // public keyword means that any program can access it
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        // this function allows the rating to be set because it is private
        void setRating(string aRating){
            
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else {
                rating = "NR";
            }

        }

        // this allows to read the rating because it is private
        string getRating(){
            return rating;
        }
    

};

int main()
{

    Movie avengers("The Avengers", "Joss Whedon", "NR");
    
    // changes the rating to show how it works
    avengers.setRating("PG-13");
    cout << avengers.getRating() << endl;

    avengers.setRating("Dog");
    cout << avengers.getRating() << endl;

    return 0;
}