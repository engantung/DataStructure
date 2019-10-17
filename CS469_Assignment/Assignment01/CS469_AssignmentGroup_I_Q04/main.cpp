//CS469 - Assignment 1 for Question 4, C++ Code
//by Edmond Hendrik Jacob Ngantung - ID#002258356
#include <iostream>

using namespace std;

class SelectionSort
{
//All the functions below are put in the same Class
    public:
        //Function to input data in numbers (numerical value)
        void input_data(int num[], int n)
        {
            for(i=0;i<n;i++)
            {
                cout<<"Element["<<i<<"] : ";
                cin>>num[i];
            }
        }

        void print_data(int num[], int n)
        {
            for(i=0;i<n;i++)
            {
                cout<<"Element["<<i<<"] : ";
                cout<<num[i]<<endl;
            }
        }

        void copy_data(int num[], int new_num[], int n)
        {
            for(i=0;i<n;i++)
            {
                new_num[i] = num[i];
            }
        }

        //Function to sort by using Selection Sort
        //Source: Algoritma & Struktur Data dalam Bahasa C/C++, Wantoro J and Sukirman
        void selection_sort(int num[], int n)
        {
            for(i=0;i<n; i++)
            {
                min = i;
                for(j=i+1;j<n;j++)
                {
                    if(num[j]<num[min])
                    {
                        min =j;
                    }
                }
                temp = num[i];
                num[i]=num[min];
                num[min] = temp;
            }
        }
    private:
        int i,j,m;
        int temp, min;
};

int main()
{
    int new_member,z;
    SelectionSort ss;

    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to show the Sorting Result from given numbers. ";
    cout<<"Let's start, Shall we ?"<<endl;
    cout<<"How many numbers do you want ? ";
    cin >> z;
    int arr[z];

    cout<<"Please input the number as a below:" <<endl;
    ss.input_data(arr,z);

    cout << "\nThe result of "<< z <<" input numbers after selection sort such as below" << endl;

    ss.selection_sort(arr, z);

    ss.print_data(arr, z);

    cout<<"\nPlease input single number you want to add : ";
    cin>>new_member;

    int y = z+1;
    int new_array[y];

    new_array[z] = new_member;

    ss.copy_data(arr,new_array, z);

    ss.selection_sort(new_array, y);

    cout << "\nThe result of "<< y <<" numbers after adding single extra number such as below" << endl;

    ss.print_data(new_array, y);
    //Finished
    return 0;
}
