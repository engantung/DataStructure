//CS469 - Assignment 1 for Question 1, C++ Code
//by Edmond Hendrik Jacob Ngantung - ID#002258356
#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int d=0;
    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to display the value of the given element of 1 up to 100, then count the value between 15 and 65 ";
    cout<<"Let's start, Shall we ?"<<endl;
    cout << "How many numbers do you want ? (Up to 100)  ";
    cin >>n;
    if (n>100)
    {
        cout << "Sorry, the number you entered was above 100, the program will be aborted";
        return -1;
    }
    int value[n];
    cout <<"Starting to display element of i and the value (value[i] = 2*i + 1)"<<endl;
    cout <<"Then search through the array and count the number of elements that are between 15 and 65" << endl<<endl;

    for(i=1;i<=n;i++)
    {
        value[i] = 2*i + 1;
        cout<<"Element["<<i<<"]= "<<value[i];
        if(value[i]>15 && value[i]<65)
        {
            cout<<" FOUNDED as between 15 and 65";
            d++;
        }
        else
        {
            cout<<" NO COMMENT";
        }
        cout<<endl;
    }
    cout << endl<< "The number of Value founded as between 15 and 65 is "<<d <<endl;
    return 0;
}
