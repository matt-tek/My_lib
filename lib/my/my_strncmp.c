/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_strncmp.c
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n == 0)
        return (0);

    while (i < n) {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    return (1);
}
