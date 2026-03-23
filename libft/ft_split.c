#include "libft.h"
int wordsCounter(char const *s, char c) {
    int count = 0;
    int in_word = 0;
    int i = 0;
    while (s[i]) {
        if (s[i] != c && !in_word) {
            count++;
            in_word = 1;
        }
        if (s[i] == c) {
            in_word = 0;
        }
        i++;
    }
    return count;
}

char **ft_split(char const *s, char c) {
    int word_count = wordsCounter(s, c);
    char **result = malloc((word_count + 1) * sizeof(char *));
    if (!result) return NULL;
    result[word_count] = NULL;
    
    int idx = 0;
    int i = 0;
    while (s[i] && idx < word_count) {
        // Пропустить разделители
        while (s[i] == c) i++;
        if (!s[i]) break;
        
        int start = i;
        // Найти конец слова
        while (s[i] && s[i] != c) i++;
        
        result[idx++] = ft_substr(s, start, i - start);
    }
    return result;
}
