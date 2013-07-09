#include <iostream>
using namespace std;

int main(){
    cout << "\n?ducks fucks? \n"; // yes they do 
    
    cout << "char sizeof:           " << sizeof(char) << endl;
    cout << "int sizeof:            " << sizeof(int) << endl;
    cout << "short int sizeof:      " << sizeof(short int) << endl;
    cout << "long int sizeof:       " << sizeof(long int) << endl;
    cout << "float sizeof:          " << sizeof(float) << endl;
    cout << "double sizeof:         " << sizeof(double) << endl;
    cout << "wchar_t sizeof:        " << sizeof(wchar_t) << endl;
    cout << endl;
    
    typedef int gram;
    gram d = 500;
    cout << d << " gram" << endl << endl;

    enum color { red, green, blue };

    return 0;
}

