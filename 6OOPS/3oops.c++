// Assignment operator
// Destructor
// Destructor is automatically called for static allocation
// for dynamic allocation manually destructor should be called
// destructor is called in the reverse order of creation of constructor
// const function (void getValue const { return value;})
// initialization list
// static keyword and static function (creation of object is not neccessary)
// static function can only access static data members

#include <iostream>
using namespace std;

class Movie{
    int duration;
    bool subtitles;
    public:
    static int budget;
    Movie(){
        cout<<"Constructor of Movie"<<this<<endl;
    }
    Movie(int d=0, bool s=false):duration(d), subtitles(s){}//initialization list

    void setDuration(int duration) { 
        this->duration = duration; 
    }
    void setSubtitles(bool subtitles) {
        this->subtitles = subtitles;
    }

    int getDuration() { return this->duration; }
    bool getSubtitles() { return this->subtitles; }

    void printDuration() const { cout<<"duration: "<<this->duration<<endl;}

    static int printSubtitles()
    {
        cout<<"budget: "<<budget<<endl;
    }

    // Destructor
    ~Movie(){
        cout<<"Destructor of"<<this<<endl;
    }
};

int Movie::budget = 5;

int main()
{
    // Movie beast;
    // beast.setDuration(120);
    // beast.setSubtitles(true);
    // cout<<beast.getDuration()<<endl;
    // cout<<beast.getSubtitles()<<endl;
    // Movie beast2;
    // beast2 = beast;//assignment operator
    // cout<<beast2.getDuration()<<endl;
    // cout<<beast2.getSubtitles()<<endl;
    // Movie *b = new Movie;
    // delete b;//manually calling the destructor when dynamically allocated

    // initialization list
    // Movie beast(125,true);
    // cout<<beast.getDuration()<<endl;
    // cout<<beast.getSubtitles()<<endl;

    // beast.printDuration();

    // static (Non - static members cannot be accessed like below)
    cout<<Movie :: budget <<endl;
    cout<<Movie :: printSubtitles()<<endl;
}
