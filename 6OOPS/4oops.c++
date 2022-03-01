// Encapsulation(Information hiding or just wrapping of data members and functions)
// Inheritance
// Access modifiers and inheritance(protected is like private but can be accessed by child class)

// types of inheritance(single,multi-level,multiple,heirarchical,hybrid)
// inheritance ambiguity(   obj.A::func()   )


// #include <iostream>
// using namespace std;

// //parent class
// class Human{
//     public:
//     int height;
//     int weight;
//     int age;

//     void setAge(int age)
//     {
//         this->age = age;
//     }

// };

// //sub class
// class Male : public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male is sleeo\n";
//     }
//     int getAge(){
//         return this->age;
//     }
// };

// class Male2: public Male{

// };

// int main()
// {
//     Male2 a1;
//     // a1.setAge(20);
//     // cout<<a1.age<<endl;
//     cout<<a1.height<<endl;

// }

// multiple inheritance

#include <iostream>
using namespace std;

class A{
    public:
    int a;
};

class B{
    public:
    int b;
};

class C:public A,public B{

};

int main()
{
    C c;
    cout<<c.a<<" "<<c.b<<endl;
}


