//CS469 - Assignment 2 for Question 1, C++ Code
//by Edmond Hendrik Jacob Ngantung - ID#002258356
#include <iostream>

using namespace std;

class ReversedElements
{
//All the functions below are put in the same Class
    public:
        //Function to input data in numbers (numerical value)
        void input_data(int input_num[], int n)
        {
            for(i=0;i<n;i++)
            {
                cout<<"Input Element["<<i<<"] : ";
                cin>>input_num[i];
            }
        }

        void print_data(int print_num[], int n)
        {
            for(k=0;k<n;k++)
            {
                cout<<"Printed Element["<<k<<"] : ";
                cout<<print_num[k]<<endl;
            }
        }

        void reversed_data(int rev_num[], int n)
        {
            for(j=n-1;j>=0;j--)
            {
                cout<<"Reversed Element["<<j<<"] : ";
                cout<<rev_num[j]<<endl;
            }
        }
    private:
        int i,j,k;
};

int main()
{
    int z;
    ReversedElements re;

    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to show the Reversed Elements from given input numbers. ";
    cout<<"Let's start, Shall we ?"<<endl;
    cout<<"How many numbers do you want ? ";
    cin >> z;

    //Declare array with the given z numbers
    int arr[z];

    cout<<"\nPlease input the numbers such as a below:" <<endl;
    re.input_data(arr,z);

    cout << "\nThe result of "<< z <<" input numbers are such as below" << endl;
    re.print_data(arr, z);

    cout << "\nThe result of "<< z <<" given numbers when they are reversed such as below" << endl;
    re.reversed_data(arr, z);

    return 0;
}
