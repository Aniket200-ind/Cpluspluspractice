#include <iostream>
using namespace std;

// Syntax for inheriting multiple inheritance
// class Derived : visibility-mode base1, visibility-mode base2{
//  class body
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base 1 is " << base1int << endl;
        cout << "The value of Base 2 is " << base2int << endl;
        cout << "The sum of these values is " << (base1int + base2int) << endl;
    }
};

int main()
{
    Derived obj;
    obj.set_base1int(25);
    obj.set_base2int(5);
    obj.show();

    return 0;
}