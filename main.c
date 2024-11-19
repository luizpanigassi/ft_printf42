// ISSO É SÓ UM ARQUIVO DE TESTE, NÃO ENVIAR

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int count;

    // Testing basic strings
    count = ft_printf("Hello, world!\n");
    printf("ft_printf output count: %d\n\n", count);

    // Testing integers
    count = ft_printf("Integer: %d\n", 123);
    printf("ft_printf output count: %d\n", count);
    count = ft_printf("Negative Integer: %d\n", -456);
    printf("ft_printf output count: %d\n\n", count);

    // Testing unsigned integers
    count = ft_printf("Unsigned Integer: %u\n", 789);
    printf("ft_printf output count: %d\n", count);
    count = ft_printf("Zero Unsigned Integer: %u\n", 0);
    printf("ft_printf output count: %d\n\n", count);

    // Testing hexadecimal (lowercase)
    count = ft_printf("Hexadecimal (lowercase): %x\n", 255);
    printf("ft_printf output count: %d\n", count);
    count = ft_printf("Zero Hexadecimal (lowercase): %x\n", 0);
    printf("ft_printf output count: %d\n\n", count);

    // Testing hexadecimal (uppercase)
    count = ft_printf("Hexadecimal (uppercase): %X\n", 255);
    printf("ft_printf output count: %d\n", count);
    count = ft_printf("Zero Hexadecimal (uppercase): %X\n", 0);
    printf("ft_printf output count: %d\n\n", count);

    // Testing pointers (address of a variable)
    int a = 42;
    count = ft_printf("Pointer address: %p\n", &a);
    printf("ft_printf output count: %d\n\n", count);

    // Testing strings (null and regular strings)
    count = ft_printf("String: %s\n", "Hello");
    printf("ft_printf output count: %d\n", count);
    count = ft_printf("Null String: %s\n", NULL);
    printf("ft_printf output count: %d\n\n", count);

    // Testing characters
    count = ft_printf("Character: %c\n", 'A');
    printf("ft_printf output count: %d\n", count);
    count = ft_printf("Character: %c\n", 'z');
    printf("ft_printf output count: %d\n\n", count);

    // Testing percentage symbol
    count = ft_printf("Percentage: %%\n");
    printf("ft_printf output count: %d\n\n", count);

    // Edge case: Multiple format specifiers in one string
    count = ft_printf("Mixed: %d, %u, %x, %X, %s, %c, %p, %%\n", 123, 456, 789, 789, "Test", 'A', &a);
    printf("ft_printf output count: %d\n\n", count);

    // Edge case: Empty string
    count = ft_printf("");
    printf("ft_printf output count: %d\n\n", count);

    // Edge case: Large number (testing integer limits)
    count = ft_printf("Large Number: %d\n", 2147483647);
    printf("ft_printf output count: %d\n", count);
    count = ft_printf("Negative Large Number: %d\n", -2147483648);
    printf("ft_printf output count: %d\n\n", count);

    return 0;
}
