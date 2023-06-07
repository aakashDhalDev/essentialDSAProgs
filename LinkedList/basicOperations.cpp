#include <iostream>
#include <list>

using namespace std;

void print(list<int> numbers)
{
    // display the elements of the list
    cout << "List Elements: ";
    for (int number : numbers)
    {
        cout << number << "->";
    }
    cout << endl;
}

int main()
{

    // create the list
    list<int> numbers{1, 2, 3, 4};

    print(numbers);

    // adds new elemrnt to the beginning of list
    numbers.push_front(0);
    cout << "adds new element to the beginning of list" << endl;
    print(numbers);
    cout << endl;

    // adds element to the end of list
    numbers.push_back(5);
    cout << "adds element to the end of list" << endl;
    print(numbers);
    cout << endl;

    // remove first element of the  list
    numbers.pop_front();
    cout << "remove first element of the  list" << endl;
    print(numbers);
    cout << endl;

    // remove last element of the  list
    numbers.pop_back();
    cout << "remove last element of the  list" << endl;
    print(numbers);
    cout << endl;

    // insert element at a specified position in a list
    auto it = numbers.begin();
    advance(it, 2);
    numbers.insert(it, 2, 7);
    cout << "insert element at a specified position in a list" << endl;
    print(numbers);
    cout << endl;

    // remove all nodes that have a specific value
    numbers.remove(7);
    cout << "remove all nodes that have a specific value" << endl;
    print(numbers);
    cout << endl;

    // delete nodes in a range
    auto start = numbers.begin();
    advance(start, 1);
    auto end = numbers.begin();
    advance(end, 3);
    numbers.erase(start, end);
    cout << "delete nodes in a range" << endl;
    print(numbers);
    cout << endl;
    return 0;
}