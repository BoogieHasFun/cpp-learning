#include <iostream>
#include <vector>

// typedef can be used to shorten datatypes, it has the syntax: typedef [datatype] [newName_t];

int main()
{
    using std::string;
    using std::cout;

    string name; // name variable :D

    cout << "input yo name please: ";
    std::cin >> name; // take terminal / console input and store that into the variable name

    cout << "hey " << name; // outputs "hey [name]" to console

}