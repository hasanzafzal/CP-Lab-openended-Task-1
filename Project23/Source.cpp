#include <iostream>
#include <string>
using namespace std;

int main()
{
    string opt, bookname;
    int nday, fine;
    cout << "Do you wanna borrow(B) or return(R) the book?" << endl;
    cin >> opt;

    if (opt == "B")
    {
        cout << "Which book do you wanna issue? \n Enter your book name without space: ";
        cin >> bookname;

        cout << bookname << "\n issued! congrats" << endl ;
    }
    else if (opt == "R")
    {
        cout << "Which book do you wanna return? \n Enter your book name without space: ";
        cin >> bookname;
        cout << "How many days ago did you issue the book?" <<endl;
        cin >> nday;
        if (nday > 7)
        {
            fine = (nday - 7) * 1;
            cout << " fine in dollars = " << fine << endl;

        }
        else
        {
            cout << " no fine, good job on returning on time";
        }
        cout << bookname << " returned! congrats youre free now ";
    }
    system("pause");
}

	
