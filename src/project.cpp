#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Did this work
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extenstion!", "This is Drew Wintjen"};
    
    for (const string& word: msg) {
        cout << word << " ";
    }
    cout << endl; 
}