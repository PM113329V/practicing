# include <stdio.h>
# include <string.h>
# include <limits.h>
int main()
{
   char ch[50];
   char ch1[50];
   scanf("%[^\n]s",ch);
    int length = strlen(ch);
    int ll = INT_MIN;
    int sl = INT_MAX;
     int i = 0;
     int count = 0;
    while (i < length)
    {
         if (ch[i] != ' ')
         count++;
         else
         {
            if ( count > ll)
            ll = count;

            if (count < sl)
            sl = count;

            count =0;
         }
         i++;
    }
    char small[sl+1];
    char large[ll+1];
     count =0;
     int z =0;
    for ( int i= 0; i < length; i++)
    {
         if (ch[i] != ' ')
         ch1[z++] = ch[i];
         else
         {
            ch1[z] = '\0';
            if (strlen(ch1) == sl)
            puts(ch1);


            if ( strlen(ch1) == ll)
            puts(ch1);
              z =0;
         }  

    }
   
}