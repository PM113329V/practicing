# include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key = 33;
    
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
     int r,c;
     int sign = -1;
     r = 0;
     c = col-1;
    int ptr = arr[r][c];
    while (!(                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     r == row-1 && c == 0))
    {
        if (key == arr[r][c])
        {
            cout<<"found";
            sign = 1;
            break;
        }
        else if ( key < arr[r][c])
        {
            c--;
        }
        else
        r++;
    }
   

    if ( sign == -1)
    cout<<"not found ";


    return 0;

}