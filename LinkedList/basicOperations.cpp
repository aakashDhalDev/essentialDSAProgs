#include <iostream>
#include <list>

using namespace std;

int main()
{

    // create the list
    list<int> numbers{1, 2, 3, 4};

    numbers.push_front(0);
    numbers.push_back(5);

    // display the elements of the list
    cout << "List Elements: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }

    return 0;
}