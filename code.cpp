# include <iostream>
# include <vector>
using namespace std;
void  merge(int arr[],int si, int ei, int mid)  
{
           int i = si;
           int j = mid+1;
          vector<int>v ;
           while ( i <= mid && j <= ei)
           {
               if ( arr[i] < arr[j])
               {
                   v.push_back(arr[i]);
                   i++;
               }
               else
               {
                   v.push_back(arr[j]);
                   j++;
               }

           }

           if ( i <= mid)
           {
                  for ( int k = i; k <= mid; k++)
                  v.push_back(arr[k]);
           }

           if ( j <= ei)
           {
                 for ( int k = j; k <= ei; k++)
                  v.push_back(arr[k]);
           }

            //conquer 
            for ( int i = si,idx = 0; i <= ei; i++)
            {
                  arr[i] = v[idx++];
            }
}
void mergeSort(int arr[],int si, int ei)
{
    if (si >= ei)
    return;
            int mid = (si+ ei)/2;
       //left
            mergeSort(arr,si,mid);
        //right
            mergeSort(arr,mid+1,ei);
        
            merge(arr,si,ei,mid);
}
int main()
{
    int arr[] = {4,3,5,1,8};
    int n = sizeof(arr)/sizeof(int);

    mergeSort(arr,0,n-1);
    for ( int i  = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
   

}