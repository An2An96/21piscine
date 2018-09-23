/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 21:25:38 by rschuppe          #+#    #+#             */
/*   Updated: 2018/09/23 21:56:54 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int l, int ilb, int *s, int d)
{
	int j;

	j = -1;
	while (++j < s[0] + s[1])
	{
		if (j < s[0])
			ft_putchar(' ');
		else if (j == s[0])
			ft_putchar('/');
		else if (j == s[0] + s[1] - 1)
			ft_putchar('\\');
		else if (ilb && (l <= d) && ((j - s[0]) >= (s[1] / 2 - d / 2))
			&& ((j - s[0]) <= (s[1] / 2 + d / 2)))
		{
			if (d > 3 && (l == d / 2 + 1)
				&& (j - s[0]) == (s[1] / 2 + d / 2) - 1)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
	}
}

int		get_pos_start_draft(int block_num, int block_counts)
{
	int i;
	int pos;
	int offset;

	i = block_counts - 1;
	pos = i + 2;
	offset = block_counts / 2;
	while (i > block_num)
	{
		pos += 3 + i + offset;
		if (i % 2)
		{
			offset--;
		}
		i--;
	}
	return (pos);
}

int		get_length_first_line(int block_num)
{
	int i;
	int j;
	int length;
	int offset;

	i = 0;
	length = 3;
	offset = 0;
	while (i < block_num)
	{
		j = 0;
		while (j < (3 + i - 1))
		{
			length += 1 * 2;
			j++;
		}
		if ((i + 1) % 2)
			offset++;
		length += (2 + offset) * 2;
		i++;
	}
	return (length);
}

void	sastantua(int size)
{
	int	i;
	int	cur_block;
	int	door_size;
	int	str_params[2];

	cur_block = 0;
	while (cur_block < size)
	{
		str_params[0] = get_pos_start_draft(cur_block, size);
		str_params[1] = get_length_first_line(cur_block);
		door_size = cur_block;
		if ((cur_block + 1) % 2)
			door_size++;
		i = 3 + cur_block + 1;
		while (--i > 0)
		{
			print_line(i, (cur_block == size - 1), str_params, door_size);
			ft_putchar('\n');
			str_params[1] += 2;
			str_params[0]--;
		}
		cur_block++;
	}
}
