/*
** EPITECH PROJECT, 2020
** parser_tmx
** File description:
** read_and_open.c
*/

#include "my.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char **getline_file_parser(FILE *fp)
{
    char **array = NULL;
    char *buffer = NULL;
    size_t size = 0;

    while (getline(&buffer, &size, fp) > 0)
        array = append_to_tab(array, buffer);
    return (array);
}
