// constructor is called when the object is created
// no return type of constructor
// this keyword stores the address of the object
// the default constructor is diminished if you create your own one

#include <bits/stdc++.h>
using namespace std;

class Car
{
    int horsePower;
    int torque;

public:
    char *name;
    Car()
    {
        cout << "Constructor of Car" << endl;
        name = new char[100];
    }

    // Car(int horsePower, int torque)
    // {
    //     this->horsePower = horsePower;
    //     this->torque = torque;
    // }

    int setHorsePower(int value)
    {
        horsePower = value;
    }
    int setTorque(int value)
    {
        torque = value;
    }
    int getHorsePower()
    {
        return horsePower;
    }
    int getTorque()
    {
        return torque;
    }

    void setName(char name[])
    {
        strcpy(this->name,name);
    }

    string getName()
    {
        return name;
    }

    // our copy constructor
    Car(Car& temp)//pass by reference and also saves from infinite loop of calling C
    {


        //Deep copy constructor
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name = ch;

        this->horsePower = temp.horsePower+1;
        this->torque = temp.torque+2;
    }
};

int main()
{
    // Car a1;
    // Car *a2 = new Car;
    // a.setHorsePower(75);
    // a.setTorque(200);
    // cout<<a1.getHorsePower()<<endl;
    // cout<<a1.getTorque()<<endl;
    // Car a3(80,250);
    // cout<<a3.getHorsePower()<<endl;
    // cout<<a3.getTorque()<<endl;

    // copy constructor
    // Car a4;
    // a4.setHorsePower(90);
    // a4.setTorque(80);

    // Car a5(a4);//the object is copied to the other object
    // // Car a5 = a4;
    // //internally a5.setHorsePower(a4.getHorsePower) and a5.setTorque(a4.getTorque)
    // cout << a5.getHorsePower() << endl;
    // cout << a5.getTorque() << endl;


    // Shallow(if one is changed then other changes too) for ***default constructor***
    Car a6;
    char name[10] = "Eminem";
    a6.setName(name);
    cout<<a6.getName()<<endl;

    Car a7(a6);
    cout<<a7.getName()<<endl;

    a6.name[0] = 'M';
    cout<<a6.getName()<<endl;
    cout<<a7.getName()<<endl;

    // Deep copy(copy is proper) we use our own copy constructor
}
