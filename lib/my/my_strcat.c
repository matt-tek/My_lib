/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_strcat.c
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i + j] = src[k];
        j++;
        k++;
    }
    dest[i + j] = '\0';
    return (dest);
}