/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:28:26 by kchiang           #+#    #+#             */
/*   Updated: 2025/06/08 18:43:23 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts string digits to integer */
/* only handles one sign character */
/* the moment it hits a non digit, return nbr */
long long	ft_atoi(const char *nptr)
{
	int			sign;
	long long	nbr;

	sign = 1;
	nbr = 0;
	if (!nptr)
		return (0);
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr *= 10;
		nbr += *nptr - '0';
		nptr++;
	}
	return (nbr * sign);
}
