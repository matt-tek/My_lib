/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_strstr.c
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    while (to_find[i] != str[i] && to_find[i] != '\0') {
        return (my_strstr(str + 1, to_find));
        i++;
    }
    return (str);
}
