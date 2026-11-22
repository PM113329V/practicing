# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
    int arr[] = {3,2,3};
    int n = sizeof(arr)/sizeof(int);
    int ans;
    int freq;
    if ( n% 2 == 0)
    freq = n/2;
    else
    freq = n/2 + 1;     //4
   // 1,1,1,2,2,2,2           
    sort(arr,arr+n);
    int count =1;
    for ( int i= 0; i < n-1; i++)
    {
         if (arr[i] == arr[i+1])
         {
            count++;
            if ( count == freq)
            {
                ans = arr[i];
                break;
            }
         }
         else
         {
            count = 1;
         }
    }

    cout<<ans;

    return 0;

}