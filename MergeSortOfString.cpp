# include <iostream>
# include <vector>
using namespace std;

void combine(string arr[],int si, int ei,int mid)
{
    int i = si;
    int j= mid+1;
    int dummy = 0;

    vector<string>v;
    
    while (i <= mid && j <= ei)
    {
        int ithL = arr[i].length();
        int jthL = arr[j].length();
        int small = ithL >= jthL ? jthL : ithL;
        bool iL = true;
        int k ;
        for (  k = 0; k < small; k++)
        {
             if (arr[i][k] < arr[j][k])
             {
                iL = false;
                break;
             }
             else if ( arr[i][k] > arr[j][k])
             break;
             else
             {
                dummy = 1;
             }
             
        }
        if(k == small)  // means full loop executes till shorter wla length
        {
             if (ithL != small)
             {
             v.push_back(arr[j]);
              j++;
             }
             else
             {
             v.push_back(arr[i]);
               i++;
             }
        }
       else if (iL == false)
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

    while ( i <= mid)
    {
        v.push_back(arr[i]);
        i++;
    }

    while(j <= ei)
    {
        v.push_back(arr[j]);
        j++;
    }


    for ( int i= si,idx = 0; i <= ei; i++)
    {
        arr[i] = v[idx++];
    }

}
void sorting(string arr[],int si,int ei)
{
          int mid = (si+ei)/2;
           if ( si >= ei)
           return;
          sorting(arr,si,mid);    //left
          sorting(arr,mid+1,ei);

          combine(arr,si,ei,mid);

}
int main()
{
    string arr[] = {"sun","earth","mars","mercury"};
    
         sorting(arr,0,3);
         for (int i = 0; i < 4; i++)
         cout<<arr[i]<<" ";

         return 0;

}