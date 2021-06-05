#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    if (str[0] != '\0')
    {
        int i = 0;
        while (str[i] != '\0')
        {
            if (str[i - 1] < '0' || (str[i-1] > '9' && str[i-1] < 'A') )
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                // {
                    str[i] -= 32;
                // }
            }
            else if (( str[i-1] > 'Z' && str[i-1] < 'a' )|| str[i -1] > 'z')
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                // {
                    str[i] -= 32;
                // }
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            // {
                str[i] += 32;
            // }
            i++;
        }
    }
    return (str);
}
