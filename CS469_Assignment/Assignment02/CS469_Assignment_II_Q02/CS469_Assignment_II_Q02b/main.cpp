//CS469 - Assignment 2 for Question 2, QUICKSORT in C++ Code
//by Edmond Hendrik Jacob Ngantung - ID#002258356

#include <iostream>

using namespace std;

class QuickSorting
{
//All the functions below are put in the same Class
    public:

    void input_data(int input_num[], int n)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Input Element["<<j<<"] : ";
            cin>>input_num[j];
        }
    }

    void print_data(int print_num[], int n)
    {
        for(k=0;k<n;k++)
        {
            cout<<print_num[k]<<"  ";
        }
    }

    //These functions below is to sort numbers by using QuickSort
    //Source: Algoritma & Struktur Data dalam Bahasa C/C++, Wantoro J and Sukirman
    void swap(int &a, int &b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    void swapNoTemp(int &a, int &b)
    {
        a -=b;
        b +=a;
        a = (b-a);
    }

    int pivot(int a[],int first, int last)
    {
        p = first;
        pivotElement = a[first];

        for(int i = first + 1 ; i<=last ;i++)
        {
            if(a[i]<=pivotElement)
            {
                p++;
                swap(a[i],a[p]);
            }
        }
        swap(a[p],a[first]);

        return p;
    }

    void quickSort(int a[], int first, int last)
    {
        pivotElement;
        if(first<last)
        {
            pivotElement = pivot(a,first,last);
            quickSort(a,first,pivotElement-1);
            quickSort(a,pivotElement+1,last);
        }
    }

    //This function below is to check if the array is sorted or not
    //Source: https://www.geeksforgeeks.org/program-check-array-sorted-not-iterative-recursive/
    bool arraySortedOrNot(int check_arr[],int n)
    {
        //Array has one or no element
        if(n==0 || n==1)
            return true;
        for(r=1;r<n;r++)
        {
            //Unsorted pair found
            if(check_arr[r-1]>check_arr[r])
                return false;
        }
        //No unsorted pair found
        return true;
    }

    private:
        int i,j,k,p,r;
        int temp, pivotElement;
};

int main()
{
    int z,s;
    QuickSorting qs;

    cout<<"BIENVENUE to CS Bishops C++"<<endl;
    cout<<"This simple program is to show the QUICK SORT from given input numbers. ";
    cout<<"Let's start, Shall we ?"<<endl;
    cout<<"How many numbers do you want ? ";
    cin >> z;
    //Declare array with the given z numbers
    int arr[z];
    qs.input_data(arr, z);

    cout<<"\nBefore SORTED : ";
    qs.print_data(arr, z);
    cout<<endl;

    //Check whether the elements in the array are sorted or not. If not, then Apply QuickSorting
    s=0;
    while(qs.arraySortedOrNot(arr,z)==false)
    {
        cout<<endl;
        qs.quickSort(arr,0,z);
        qs.print_data(arr, z);
        if(qs.arraySortedOrNot(arr,z)==true)
            cout<<"Sorted At Last\n";
        else
            cout<<"Not Sorted Yet, then do Quick Sorting again";
        s++;
        //If too many trials, then the System will be Aborted
        if(s>20)
        {
            cout<<"\n\nCannot be Sorted as the result is not being converged,";
            cout<<" unfortunately the system will be aborted as too many iterations and save your memory\n";
            return -1;
        }
    }

    cout<<"\nAfter SORTED  : ";
    qs.print_data(arr, z);
    cout<<"\nSorted in only " <<s<<" time quick sorting. Awesome, Quite stable, Isn't it !!!\n";

    return 0;
}
