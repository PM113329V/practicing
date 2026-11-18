# include <iostream>
# include <climits>
# include <algorithm>
using namespace std;

int main()
{
    int arr[] = {5,4,2,6};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr + n,greater<int>());

    for (int i=0; i < n; i++)
     cout<<arr[i]<<" ";


     return 0;
    


}