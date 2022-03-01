// objects has properties and behavior(function)
// class is an "user defined data type"
// size of an object is defined by the properties of the class and in empty class sizeof 1 is allocated for identification

// properties
//Access specifiers(public,private,protected)
// getter and setter class methods

// sizes of the class is goes through padding and greedy alignment(multiples of 4)
// static data members and member functions does not contribute to class size

// dynamic memory allocation , dot(.) and arrow(->) accessing methods

#include <iostream>
using namespace std;

class Hero{
    private:
    char maritalStatus = 'y';
    int password = 123;


    public:
    // string name;
    // int age;
    int srn;

    void behavior()
    {
        cout<<"fights\n";
    }

    // getter and setters
    char getMS(){
        return maritalStatus;
    }

    int getPassword(){
        return password;
    }

    char setMS(){
        maritalStatus = 'y';
    }

    int setPassword(){
        password = 1234546;
    }
};

int main()
{
    // object creating method
    Hero a;
    // a.name = "ajith";
    // cout<<a.name<<endl;
    // a.behavior();
    cout<<a.getPassword()<<endl;
    cout<<a.getMS()<<endl;
    a.setPassword();
    a.setMS();
    cout <<endl<< a.getPassword() << endl;
    cout << a.getMS() << endl;
    // cout<<sizeof(a)<<endl;


    // dynamic memory allocation
    // int *i = new int;
    Hero *h = new Hero;
    cout<<endl<<(*h).getPassword()<<endl;
    cout<<(*h).getMS()<<endl;

    (*h).setPassword();
    (*h).setMS();

    cout<<endl<<(*h).getPassword()<<endl;
    cout<<(*h).getMS()<<endl;


    // arrow function for addresses(pointers)
    cout<<endl<<h->getPassword()<<endl;
    cout<<h->getMS()<<endl;
}

