# include <iostream>
using namespace std;

    int main()
    {
        int dividend = 7;
        int divisor = -3;
        int count = 0;
        int cn=0;
        int sign = 1;
        
        if (dividend < 0 && divisor < 0)
        {
        sign = 1;
          dividend = -dividend;
          divisor = -divisor;
        }
        else if ( dividend <0)
        {
        dividend = -dividend;
          sign = -1;
        }
        else if ( divisor < 0)
        {
        divisor = -divisor;
          sign = -1;
        }
        else
        sign = 1;
        // cout << divisor;
        while (dividend >= divisor)
        {
            dividend -= divisor;
             cn++;
        }

          if ( sign == 1)
            count = cn;
          else
            count = -cn;


        cout << count;





            

    }
