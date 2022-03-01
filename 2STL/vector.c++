// vector is used as a dynamic array (if the vector gets full then a new vector of double size is created and the value are poured in it and dumps the old vector that got full)
// capacity means the space assigned to allocate elements
// size means the elements assigned in the given space
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "capacity :" << v.capacity() << endl;
    v.push_back(1); // inserting 1
    cout << "capacity :" << v.capacity() << endl;
    v.push_back(2); // inserting 2
    cout << "capacity :" << v.capacity() << endl;
    v.push_back(3); // inserting 3
    cout << "capacity :" << v.capacity() << endl;
    cout << "size :" << v.size() << endl;

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    sort(v.begin(),v.end());

}
