#include "libft.h"
int wordsCounter(char const *s, char c)
{
    int word_count;
    int i;

    word_count = 0;
    i = 0;
    while (s[i])
    {
        if(s[i] == c  || s[i + 1] == '\0')
            word_count++;
        i++;
    }
    return (word_count);
}

char	**ft_split(char const *s, char c)
{
    char **result;
    int i;
    int strlen;
    int word_index;
    int start;

    word_index = wordsCounter(s, c);
    result = malloc((word_index + 1) * sizeof(char *));
    result[word_index] = NULL;

    strlen = 0;
    i = 0;
    start = 0;
        while (s[strlen] && i < word_index)
        {
            if (s[strlen] == c || s[strlen + 1] == '\0')
            {
                strlen++; 
                result[i] = ft_substr(s, start, strlen - start - 1);
                start = strlen;
              i++;
            }
            else
                strlen++;
        }
    return (result);
}