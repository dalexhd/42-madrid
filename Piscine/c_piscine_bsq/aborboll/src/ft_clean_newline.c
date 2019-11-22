/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_newline.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 10:49:47 by aborboll          #+#    #+#             */
/*   Updated: 2019/09/22 11:41:26 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_clean_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	str[i] = '\0';
}
