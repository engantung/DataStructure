//CS469 - Assignment 1 for Question 3, C++ Code
//by Edmond Hendrik Jacob Ngantung - ID#002258356
#include <iostream>

using namespace std;

int main()
{
    int i,n;
    int MaxValue = 0;
    int MaxPos = 0;
    int MinPos = 0;
    int MinValue = 0;

    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to find the Maximum/Minimum from given numbers. ";
    cout<<"Let's start, Shall we ?"<<endl;
    cout << "How many numbers you need to input ? ";
    cin >> n;
    int value[n];

    cout << "\nSet all the datas you want to input as a below "<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"Data["<<i<<"]: ";
        cin>> value[i];
    }
    cout << "\nConfirming all the datas you have input as a below "<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"Data["<<i<<"]: ";
        cout<< value[i]<<endl;
    }
    cout << "\nSearch the Maximum and Minimum below from given above values "<<endl;
    MaxValue = value[0];
    for (i=0;i<n;i++)
    {
        if(MaxValue < value[i])
        {
            MaxPos=i;
            MaxValue = value[i];
        }

    }
    MinValue = value[0];
    for (i=0;i<n;i++)
    {
        if(MinValue > value[i])
        {
            MinPos = i;
            MinValue = value[i];
        }
    }

    cout << "Maximum value is " << MaxValue <<" which is at the position of Data[" <<MaxPos <<"]"<<endl;
    cout << "Minimum value is " << MinValue <<" which is at the position of Data[" <<MinPos <<"]"<<endl<<endl;

    return 0;
}
