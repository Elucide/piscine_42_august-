#include "rush02.h"

int	print_val_from_char_key(t_d dict, char *key, int len)
{
	int	i;

	i = -1;
	while (dict[++i].int_str)
	{
		if (! ft_strncmp(dict[i].int_str, key, len))
		{
			ft_putstr(dict[i].nb_out);
			return (i);
		}
	}
	return (i);
}

int	print_val_from_int_key(t_d dict, int key)
{
	int	i;

	i = -1;
	while (dict[++i].int_str)
	{
		if (key == dict[i].nb_int)
		{
			ft_putstr(dict[i].nb_out);
			return (i);
		}
	}
	return (i);
}
