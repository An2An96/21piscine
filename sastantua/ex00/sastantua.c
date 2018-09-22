/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 12:23:01 by rschuppe          #+#    #+#             */
/*   Updated: 2018/09/22 17:36:45 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	display_block(int block_num, int block_counts);

void	sastantua(int size)
{
	if (size <= 0)
	{
		return;
	}

	int cur_block;
	
	int line_count;
	int cur_line;

	line_count = 0;
    cur_block = 0;
	while (cur_block < size)
	{
		display_block(cur_block, size);
		cur_block++;
	}
}

void	display_block(int block_num, int block_counts)
{
    int i = 0;
    int j = 0;
    int width;
	int start_pos = 0;
	int str_length = 0;

	//	определяем позицию начала "рисования" первой строки блока   OK
    i = block_counts - 1;
    while (i >= block_num)
    {
        start_pos += 3 + i + 2;
        i--;
    }

	//	определяем длинну строки    OK
	i = 0;
	str_length = 3;
	while (i < block_num)
	{
        j = 0;
		while (j < (3 + i - 1))
		{
			str_length += 1 * 2;
			j++;
		}
		str_length += 3 * 2;
		i++;
	}

    //  рисуем  OK
	i = 3 + block_num;
	while (i > 0)
	{
        j = 0;
		while (j < start_pos + str_length)
		{
            if (j < start_pos)
            {
                write(1, " ", 1);
            }
            else if (j == start_pos)
            {
                write(1, "/", 1);
            }
            else if (j == start_pos + str_length - 1)
            {
                write(1, "\\", 1);
            }
            else
            {
                if ((block_num + 1) % 2)
                {
                    width = block_num + 1;
                }
                else
                {
                    width = block_num;
                }
                if ((block_num == block_counts - 1) && (i <= block_num + 1) && ((j - start_pos) >= (str_length / 2 - width / 2)) && ((j - start_pos) <= (str_length / 2 + width / 2)))
                {
                    if ()
                    
                    write(1, "|", 1);
                }
                else
                {
                    write(1, "*", 1);
                }
            }
			j++;
		}
		write(1, "\n", 1);
        str_length += 2;
        start_pos--;
		i--;
	}
}
