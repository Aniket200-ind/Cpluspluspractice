#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void onesComplement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::onesComplement(void)
{
    chk_bin(); // Nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        switch (s.at(i))
        {
        case '0':
            s.at(i) = '1';
            break;

        case '1':
            s.at(i) = '0';
            break;

        default:
            break;
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // Oops -Classes and objects
    /*
    C++ was initially called as C with classes
    Classes are nothing but extension of structures (in C)
    Structures had some limitations like:-
        -->Members are public
        -->No functions can be included

    Classes can have methods and properties
    You can declare objects  along with the class declaration like this:
        class Emp{
            Class definition
        } aniket, harry, hrishi;
    */

    // Nesting of member functions
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.onesComplement();
    b.display();

    return 0;
}