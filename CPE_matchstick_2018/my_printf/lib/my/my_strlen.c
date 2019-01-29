/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** a fonction that counts and returns the number of chracters found in the str
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
