#include <iostream>
#include <vector>
#include <string>
// #include "./Gun/Gun.h"

using namespace std;

class Gun {
    public:
        int damage = 42;
        void fire() {
            cout << "Bang" <<endl;
        }
};

int main()
{
    // Did this work
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extenstion!", "This is Drew Wintjen"};
    
    for (const string& word: msg) {
        cout << word << " ";
    }
    cout << endl; 

    Gun myGun;

    myGun.fire();

    cout << myGun.damage <<endl;
}


/*
Parts of the gun
Rarity
Type (Base)
Gun Stats
Perks
*/