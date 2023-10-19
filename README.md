
# 42Porto_ft_printf

Record function printf.  
Main concept: 
- variadic functions.  

The function has to handle following conversions: cspdiuxX%  

|Specifier             | Description                                                                |
| ----------------- | ------------------------------------------------------------------ |
| %c | Prints a single character.  |
| %s | Prints a string (as defined by the common C convention). |
| %p | The void * pointer argument has to be printed in hexadecimal format. |
| %d  | Prints a decimal (base 10) number. |
| %i  | Prints an integer in base 10.   |
| %u  | Prints an unsigned decimal (base 10) number. |
| %x  | Prints a number in hexadecimal (base 16) lowercase format. |
| %X  | Prints a number in hexadecimal (base 16) uppercase format.  |
| %%  | Prints a percent sign. |  

Please, refer to the subject pdf for more info.

## Norminette

This project has to be written in accordance with the Norm, which is the coding standard of the school 42.

The Norm includes:
- Forbidden: for, do...while, switch, case, goto, ternary operators and variable-length arrays 
- Maximum of 25 lines per function
- Maximum line length: 80 columns
- Maximum 4 parameters per function 
- Variable assignments and declarations must be on separate lines
- etc...
  

## Create library

Create the lib libftprintf.a with make

```bash
  make
```


## Useful links

 - [ft_printf explained - nikito](https://www.youtube.com/watch?v=Hb2m7htiKWM)
 - [Variadic functions - Code Vault](https://www.youtube.com/watch?v=oDC208zvsdg)


