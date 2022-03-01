//polymorphism
// compile time polymorphism :
// function overloading(function signature should be different) and operator overloading

// run time polymorphism :
// method polymorphism(Inheritance is must)


// Abstraction(Implementation hiding)
// showing only essential information only the outer stuffs


#include <iostream>
using namespace std;

class A{
    public:
    int a;

    void sayHello(){
        cout<<"Hello Neo\n";
    }

    void sayHello(string name)//function overloading
    {
        cout<<"Hello "<<name<<" in class A"<<endl;
    }

    void operator +(A &obj){
        int v1 = this->a;
        int v2 = obj.a;
        cout<<"sum:"<<v1+v2<<endl;
    }

    void operator() (){
        cout<<this->a<<endl;
    }
};

class B:public A{
    public:
    void sayHello(string name)
    {
        cout<<"Hello "<<name<<" in class B"<<endl;
    }
};

int main()
{
    //for function overloading
    // A a;
    // a.sayHello();
    // a.sayHello("Nidhin");
    
    //for operator overloading
    A obj1;
    A obj2;


    obj1.a = 3;
    obj2.a = 6;

    obj1 + obj2;//we can make operators to work for user defined classes(addition can be manipulatedas substraction alsooo)
    obj2();//another operator overloading

    B obj;
    obj1.sayHello("Nidhin");
    obj.sayHello("Nidhin");
}


