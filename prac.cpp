# include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    int sumM = 0;
    for ( int i = 0; i < n; i++)
    {
          sum += arr[i];
          if(sumM < sum)
          sumM = sum;
          if ( sum < 0)
          sum = 0;
    }


    cout<<sumM<<endl;

    return 0;
}