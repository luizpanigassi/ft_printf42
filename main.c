// ISSO É SÓ UM ARQUIVO DE TESTE, NÃO ENVIAR

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>

int main()
{
	int a = 42;
	char *str = "Hello, World!";

	// Test 1: Basic string test
	prinft("Testing basic stuff");
	printf("Standard printf: ");
	printf("%s\n", str);

	printf("My ft_printf: ");
	ft_printf("%s\n", str); // Replace with your ft_printf function

	// Test 2: Integer test
	printf("Testing integer printing");
	printf("Standard printf: ");
	printf("%d\n", a);

	printf("My ft_printf: ");
	ft_printf("%d\n", a);

	// Test 3: Multiple formats
	printf("Testing multiple formats");
	printf("Standard printf: ");
	printf("Integer: %d, String: %s\n", a, str);

	printf("My ft_printf: ");
	ft_printf("Integer: %d, String: %s\n", a, str);

	return 0;
}


// int main(void) {
//     int a = 42;
//     char *str = "Hello, World!";
//     char c = 'A';
//     unsigned int u = 4294967295;
//     void *ptr = &a;

//     // 1. Test standard conversions
//     printf("\n-- Test 1: Basic integer (%d) conversion --\n");
//     printf("Standard printf: %d\n", a);
//     ft_printf("My ft_printf: %d\n", a);

//     printf("\n-- Test 2: Basic string (%s) conversion --\n");
//     printf("Standard printf: %s\n", str);
//     ft_printf("My ft_printf: %s\n", str);

//     printf("\n-- Test 3: Basic character (%c) conversion --\n");
//     printf("Standard printf: %c\n", c);
//     ft_printf("My ft_printf: %c\n", c);

//     // 2. Test unsigned numbers
//     printf("\n-- Test 4: Unsigned integer (%u) conversion --\n");
//     printf("Standard printf: %u\n", u);
//     ft_printf("My ft_printf: %u\n", u);

//     // 3. Test pointer printing (NULL and non-NULL)
//     printf("\n-- Test 5: Pointer (%p) conversion --\n");
//     printf("Standard printf: %p\n", ptr);
//     ft_printf("My ft_printf: %p\n", ptr);

//     printf("\n-- Test 6: Pointer with NULL (%p) conversion --\n");
//     printf("Standard printf: %p\n", NULL);
//     ft_printf("My ft_printf: %p\n", NULL);

//     // 4. Test hexadecimal and octal
//     printf("\n-- Test 7: Hexadecimal (%x) conversion --\n");
//     printf("Standard printf: %x\n", a);
//     ft_printf("My ft_printf: %x\n", a);

//     printf("\n-- Test 8: Uppercase Hexadecimal (%X) conversion --\n");
//     printf("Standard printf: %X\n", a);
//     ft_printf("My ft_printf: %X\n", a);

//     printf("\n-- Test 9: Octal (%o) conversion --\n");
//     printf("Standard printf: %o\n", a);
//     ft_printf("My ft_printf: %o\n", a);

//     // 5. Test precision and width specifiers
//     printf("\n-- Test 10: Precision with integer (%.5d) --\n");
//     printf("Standard printf: %.5d\n", a);  // Precision
//     ft_printf("My ft_printf: %.5d\n", a);

//     printf("\n-- Test 11: Left-aligned width (%-10d) --\n");
//     printf("Standard printf: %-10d\n", a);  // Left-alignment width
//     ft_printf("My ft_printf: %-10d\n", a);

//     printf("\n-- Test 12: Right-aligned width (%10d) --\n");
//     printf("Standard printf: %10d\n", a);   // Right-alignment width
//     ft_printf("My ft_printf: %10d\n", a);

//     printf("\n-- Test 13: Precision for strings (%.3s) --\n");
//     printf("Standard printf: %.3s\n", str);  // Precision for strings
//     ft_printf("My ft_printf: %.3s\n", str);

//     printf("\n-- Test 14: Width for strings (%10s) --\n");
//     printf("Standard printf: %10s\n", str);  // Width for strings
//     ft_printf("My ft_printf: %10s\n", str);

//     // 6. Test special cases
//     printf("\n-- Test 15: Integer max (INT_MAX) --\n");
//     printf("Standard printf: %d\n", INT_MAX);  // Edge case for integer max
//     ft_printf("My ft_printf: %d\n", INT_MAX);

//     printf("\n-- Test 16: Integer min (INT_MIN) --\n");
//     printf("Standard printf: %d\n", INT_MIN);  // Edge case for integer min
//     ft_printf("My ft_printf: %d\n", INT_MIN);

//     printf("\n-- Test 17: Zero precision (%.0f) --\n");
//     printf("Standard printf: %.0f\n", 0.0);   // Zero precision
//     ft_printf("My ft_printf: %.0f\n", 0.0);

//     // 7. Test '0' flag for padding with zeros
//     printf("\n-- Test 18: Padding with zeros (%010d) --\n");
//     printf("Standard printf: %010d\n", a);  // Padding with zeros
//     ft_printf("My ft_printf: %010d\n", a);

//     // 8. Test '0' flag and width with strings
//     printf("\n-- Test 19: Zero padding for strings (%010s) --\n");
//     printf("Standard printf: %010s\n", str);  // Zero padding for strings
//     ft_printf("My ft_printf: %010s\n", str);

//     // 9. Test the '##' flag (alternate form)
//     printf("\n-- Test 20: Alternate form for hex (%#x) --\n");
//     printf("Standard printf: %#x\n", a);  // Alternate form for hex
//     ft_printf("My ft_printf: %#x\n", a);

//     printf("\n-- Test 21: Alternate form for uppercase hex (%#X) --\n");
//     printf("Standard printf: %#X\n", a);  // Alternate form for uppercase hex
//     ft_printf("My ft_printf: %#X\n", a);

//     // 10. Test percentage sign
//     printf("\n-- Test 22: Printing a percentage sign (%%) --\n");
//     printf("Standard printf: %%\n");
//     ft_printf("My ft_printf: %%\n");

//     // 11. Test long numbers
//     printf("\n-- Test 23: Long long integer (%lld) --\n");
//     printf("Standard printf: %lld\n", 9223372036854775807LL);  // Long long int
//     ft_printf("My ft_printf: %lld\n", 9223372036854775807LL);

//     // 12. Test small floating-point numbers (if supported)
//     printf("\n-- Test 24: Small floating-point number (%.2f) --\n");
//     printf("Standard printf: %.2f\n", 3.14159);  // Floating-point precision
//     ft_printf("My ft_printf: %.2f\n", 3.14159);

//     // 13. Test large floating-point numbers (if supported)
//     printf("\n-- Test 25: Small fractional floating-point number (%.2f) --\n");
//     printf("Standard printf: %.2f\n", 1.0 / 3.0);  // Small fractional number
//     ft_printf("My ft_printf: %.2f\n", 1.0 / 3.0);

//     // 14. Test very large numbers for width/precision
//     printf("\n-- Test 26: Large number with width (%50d) --\n");
//     printf("Standard printf: %50d\n", 9876543210);  // Width with a large number
//     ft_printf("My ft_printf: %50d\n", 9876543210);

//     return 0;
// }
