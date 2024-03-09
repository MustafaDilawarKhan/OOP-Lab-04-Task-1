#include <iostream>
#include <list>

using namespace std;

class LinkedList {
public:
    list<int> lst;

   
    void append(int data) {
        lst.push_back(data);
    }

    //search
    bool search(int value) {
        for (int val : lst) {
            if (val == value) {
                return true; 
            }
        }
        return false;
    }

    
    bool contain(int value) {
        return search(value);
    }

    //reverse
    void reverse() {
        lst.reverse();
    }

    
    void print() {
        for (int val : lst) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;
    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);
    myList.append(5);

    cout << "the list: ";
    myList.print();

    int choice;
    cout << "enter 1 to reverse the list  \nenter 2 to search from the list: ";
    cin >> choice;

    if (choice == 1) {
        myList.reverse();
        cout << "REVERSED LIST: ";
        myList.print();
    }
    else if (choice == 2) {
        int searchNumber;
        cout << "enter the number you want to search for : ";
        cin >> searchNumber;
        if (myList.contain(searchNumber)) {
            cout << "yes, " << searchNumber << " is present in the list." << endl;
        }
        else {
            cout << "No, " << searchNumber << " is not present in the list." << endl;
        }
    }

    return 0;
}
