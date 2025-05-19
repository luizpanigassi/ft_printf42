# ft_printf

Another project for 42SP. This is straightforward, it's simply a recreation of the function `printf` in C.

---

So this was kind of a journey. There's a lot of back and forth when handling the formats, and `printf` can be a stickler for rules sometimes. But all in all, it's a great exercise for learning about **VARIADIC FUNCTIONS**.

And what the hell are those? Those are functions that can accept a variable number of arguments. The syntax is pretty simple. You initialize the list with `va_start(args, format);`, and end it with `va_end(args);`. Each variable type will have to be initialized using `va_arg(args, whatevervariabletype)` every time you want to use one. That being said, let's explain how things work here:

So the main function (`printf`, of course) will initialize the count and `va_list` variables. Remember, `printf` returns the number of characters printed on the terminal, so count is important. There's a check for errors in the format argument, then the magic begins. I call `va_start` to initialize the variadic part of the function, and start to iterate through the string presented. If a `%` is found, we go for the handlers, so we can see each case individually (in a minute, young padawan). If there's not percentage, we keep iterating and printing each character until the end, then close the variadic part with `va_end` and return the count. Now, for the handlers:

Ok, so you found a `%`. What comes after it is important. We have 9 cases, so we need if blocks to identify each case. Pointers, integers, hexadecimals, unsigned ints, characters, strings, and a simple `%`. Those babies will be individually printed using the handler functions you can find on `ft_handlers` and `ft_handlers2`. We convert hexadecimals, print numbers one by one, everything there. Also, each handler will have a counter, so we can see how many characters were printed, which will then be added to the pile on the `handle_everything` function. That will be passed to the `printf`, which will, after printing everything, return the count.

TADA! All is well, everything works, check my code if you must, but try to understand it, not copy it. It's not a complicated function, but it's... tricky. All the best.

---

## Features

- Supports `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%s`, `%c`, and `%%` formats
- Handles variadic arguments using `<stdarg.h>`
- Returns the number of characters printed, just like the original `printf`

## Build

To build the library, simply run:

```sh
make
```

This will produce `libftprintf.a`.

## Usage

Include `ft_printf.h` in your project and link against `libftprintf.a`.

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d, Hex: %x\n", "world", 42, 42);
    return 0;
}
```

## File Structure

- `ft_printf.c`: Main `ft_printf` logic and dispatcher
- `ft_printf_utils.c`: Helper functions for printing
- `ft_handlers.c`, `ft_handlers2.c`: Format specifier handlers
- `ft_printf.h`: Header file
- `Makefile`: Build instructions

---

Feel free to explore the code and learn from it!
