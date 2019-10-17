#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many numbers do you want ? ";
    cin >> n;
    int a[n];

    cout << "\nPlease input the data you want as a below"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Data["<<i<<"]: ";
        cin>>a[i];

    }

    int max_count = 0;

    for(int i = 0; i<n;i++)
    {
        int count = 1;
        for(int j = i+1;j<n;j++)
            if(a[i]==a[j])
            count++;
        if(count>max_count)
            max_count = count;

    }

    cout << "\nThe most frequent number/s is/are "<<endl;
    for(int i = 0; i<n;i++)
    {
        int count = 1;
        for(int j = i+1;j<n;j++)
            if(a[i]==a[j])
            count++;
        if(count==max_count)
        {
            cout << a[i] << endl;
        }
    }
    return 0;
}
