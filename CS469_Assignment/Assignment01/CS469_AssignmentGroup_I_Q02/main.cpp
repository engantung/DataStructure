//CS469 - Assignment 1 for Question 2, C++ Code
//by Edmond Hendrik Jacob Ngantung - ID#002258356
#include <iostream>
using namespace std;

int main()
{
    int i, j,n;
    int target;
    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to find the value from the given numbers then delete it, then adding zeros at the back. ";
    cout<<"Let's start, Shall we ?"<<endl;
    cout << "How many numbers do you want ? (Up to 10)  ";
    cin >>n;
    if (n>10)
    {
        cout << "\nSorry, the number you entered was above 10, the program will be aborted"<<endl;
        return -1;
    }
    int data[n];
    cout <<"\nStarting to display all data we will input as below "<<endl<<endl;

    for(i=1;i<=n;i++)
    {
        cout<<"DATA["<<i<<"]= ";
        cin>>data[i];
        cout<<endl;
    }

    cout <<"The data you input (from left to right) "<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<data[i]<<"  ";

    }
    cout <<endl<<"Select data,v, that you want to remove. ";
    cout <<"Please choose one of the following ( " ;
    for(i=1;i<=n;i++)
    {
        cout<<data[i]<<" ";

    }
    cout<<"): ";
    cin >> target;
    cout<<"\nFound the target, v, then apply shifting each following element left and adding a zero at the end of the array." <<endl;
    for(i=1;i<=n;i++)
    {
        if(data[i]==target)
        {
            j=i;
            for(j=i;j<=n;j++)
            {
                data[j] = data[j+1];
                data[j+1] = data[j+2];
            }
        }
        if(i==n) data[i]=0;

    }
    for(i=1;i<=n;i++)
    {
        cout <<data[i]<<" ";;

    }
    cout <<"\n\nThis is The End of the Program. Thank you, come back again next time !! ^_^"<<endl;
    return 0;
}
