/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** all the functions
*/
#include <stdarg.h>

int my_octal(char const *str);
int test_stock(int stock, va_list param);
int decimal_int(va_list param);
int unsigned_decimal(va_list param);
int octal(va_list param);
int hexadecimal(va_list param);
int hexadecimal_upp(va_list param);
int character(va_list param);
int string(va_list param);
int string_string(va_list param);
int pointer(va_list param);
int binaries(va_list param);
int my_printf(char *str, ...);
int my_put_nbr_base(int nb, char *base);
int my_put_unsignednbr(unsigned int nb);
int test_stock1(int stock, va_list param);
int test_stock3(int stock, va_list param);
int test_stock4(int stock, va_list param);

int test_stock2(int stock, va_list param);
void my_putchar (char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int find_square(int nb, int bi, int bf);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int find_rounded_square(int nb, int bi, int bf);
int my_rounded_square_root(int nb);
int eratosthene(int nb, int *primes);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_putnbr_base(int nbr, char *base);
int my_showmem(char const *str, int size);
int my_putnbr_base3(int nb, char *base);
void my_verif_printable(int i, char *str);
int my_print_hexa(int i, char *str, int size);
void my_print_adress(int i, char *str, int positive);
char *my_strcat(char *dest, char const *src);
int ma_strlen(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int m_strlen(char *str);
void my_pointer(long long nb);
void my_hexa_add(long long nb);
