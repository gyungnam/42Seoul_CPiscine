#include <unistd.h>

void	xy_putchar(char c)
{
	write(1, &c, 1);
}

void    *ft_print_memory(void *addr, unsigned int size)
{
	int				i;
    unsigned char	*cursor;
	char			*hex_symbols;

	cursor = (unsigned char*)addr;
	hex_symbols = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		xy_putchar(hex_symbols[cursor[i] / 16]);
        xy_putchar(hex_symbols[cursor[i] % 16]);
		if ((i + 1) % 2 == 0)
			xy_putchar(' ');
		i++;
	}
	return (addr);
}

int     main(void)
{
	int i;

	char str[] = "Bonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	i = 150;
	ft_print_memory(str, i);
}
