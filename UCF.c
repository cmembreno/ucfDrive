#include <stdio.h>
#include <string.h>

int main()
{
    char str[1024];
    char sub[50] = "Undefeated 2018 National Champions UCF";
    char result[1024] = "";
    int i, j =0;

    //strcat(str,sub);

    printf("Enter your string\n");
    fgets(str, 1024 , stdin);

    for(i = 0; i<strlen(str) &&  j<1024;i++)
    {
        if(tolower(str[i]) == 'u' && tolower(str[i+1]) == 'c' && tolower(str[i+2]) == 'f')
        {
            strcat(result,sub);
            i = i +2;
            //printf("i is %d and j is %d\n", i , j);
            j = j + (strlen(sub)) ;

            /*
            if(tolower(str[i+1]) == 'c')
            {
                if(tolower(str[i+2]) == 'f')
                {
                    strcat(result,sub);
                }
            }
            */
        }
        else
        {
            //printf("i is %d and j is %d\n", i , j);
            result[j] = str[i];
            j++;
        }
    }

    printf("Your string is %s\n",result);

    return 0;
}
