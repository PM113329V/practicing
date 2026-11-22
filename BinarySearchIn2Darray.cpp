# include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key = 33;
    
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int si = 0;
    int ei = col-1;
    int i = 0;
    int sign = -1;
    while ( i < row)
    {
        int mid = si + (ei-si)/2;

        if ( arr[i][mid] == key)
        {
            cout<<"found";
            sign = 1;
            break;
        }
        else if (arr[i][mid] > key)
        {
            ei = mid-1;
        }
        else
        si = mid + 1;

        if ( si > ei)
        {
           i++;
           si = 0;
           ei = col-1;

        }
    }

    if ( sign == -1)
    cout<<"key not found ";
   
    


    return 0; 


}