#include <iostream> 
#include <string>
using namespace std;

int main()
{
	string advice = "Run";
	string advice2 = "Find a safe house preferably on a deserted island, lock the doors and windows and barricade them. Don't worry about me, I'll be fine. Now go, and don't stop for anything. ";
    string backup = "Grab a very sharp knife and jab it at the bread.";
    
    cout << "Enter some advice: " << endl;
    cin >> advice;
    
    cout << "You want my advice?" << endl;
    cout << "My Advice: " << advice2 << endl;
    cout << backup << endl;
    cout << advice << endl;
   
}
