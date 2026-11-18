# include <iostream>
# include <climits>
using namespace std;

int main()
{
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    
    for ( int i= 1; i < n; i++)
    {
        int curr = arr[i];
        int m = 0;
        for ( int j = i-1; j >= 0;j--)
        {
            if (curr < arr[j])
            swap(arr[i-m],arr[j]);
            m++;
        }
       
    }

    for ( int i= 0; i < n; i++)
    cout<<arr[i]<<" ";


    return 0;
}