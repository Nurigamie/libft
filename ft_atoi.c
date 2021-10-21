/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:41:24 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/20 11:51:33 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		signe;
	int		res;

	i = 0;
	signe = 0;
	res = 0;
	while (str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
		if (signe % 2 != 0 )
			signe = -1;
		else
			signe = +1 ;
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		res =	res * 10 + str[i] - '0';
		i++;
	}
	return (res * signe);
}

#include <stdio.h>
#include <stdlib.h>
int main ()
 {
	printf("\nTest de ft_atoi :\n");
	printf(" \n\n 1");
	printf("\nFT_ATOI = %d\n", ft_atoi("                                                                        1"));
	printf("REAL_ATOI = %d\n", atoi("                                                                        1"));
	printf(" \n\n test2 \n");
	printf("\nFT_ATOI  = %d\n", ft_atoi("9999999999999999999"));
	printf("REAL ATOI = %d\n", atoi("9999999999999999999"));
	printf("\n\n 3");
	printf("\nFT_ATOI  = %d\n", ft_atoi("-99999999999999999999999999"));
	printf("REAL ATOI = %d\n", atoi("-99999999999999999999999999"));
	printf("\n\n 4");
	printf("\nFT_ATOI = %d\n", ft_atoi("1"));
	printf("REAL_ATOI = %d\n", atoi("1"));
	printf("\n\n5");
	printf("\nFT_ATOI  = %d\n", ft_atoi("19223372036854775807"));
	printf("REAL ATOI = %d\n", atoi("19223372036854775807"));
	printf("\n\n6");
	printf("\nFT_ATOI = %d\n", ft_atoi("18446744073709552000"));
	printf("REAL_ATOI = %d\n", atoi("18446744073709552000"));
	printf("\n\n7");
	printf("\nFT_ATOI  = %d\n", ft_atoi("18446744073709551999"));
	printf("REAL ATOI = %d\n", atoi("18446744073709551999"));
	printf("\n\n8");
	printf("\nFT_ATOI = %d\n", ft_atoi("-0"));
	printf("REAL_ATOI = %d\n", atoi("-0"));
	printf("\n\n9");
	printf("\nFT_ATOI  = %d\n", ft_atoi("++5"));
	printf("REAL ATOI = %d\n", atoi("++5"));
	printf("\n\n10");
	printf("\nFT_ATOI = %d\n", ft_atoi("+-5"));
	printf("REAL_ATOI = %d\n", atoi("+-5"));
	printf("\n\n11");
	printf("\nFT_ATOI  = %d\n", ft_atoi("--5"));
	printf("REAL ATOI = %d\n", atoi("--5"));
	printf("\n\n12");
	printf("\nFT_ATOI = %d\n", ft_atoi("00512"));
	printf("REAL_ATOI = %d\n", atoi("00512"));
	printf("\n\n13");
	printf("\nFT_ATOI  = %d\n", ft_atoi(""));
	printf("REAL ATOI = %d\n", atoi(""));
	printf("\n\n14");
	printf("\nFT_ATOI = %d\n", ft_atoi("23058430092136939529"));
	printf("REAL_ATOI = %d\n", atoi("23058430092136939529"));
	printf("\n\n15");
	printf("\nFT_ATOI  = %d\n", ft_atoi("\t\v\r\n\f -5"));
	printf("REAL ATOI = %d\n", atoi("\t\v\r\n\f -5"));
	printf("\n\n16");
	printf("\nFT_ATOI = %d\n", ft_atoi("-9223372036854775808"));
	printf("REAL_ATOI = %d\n", atoi("-9223372036854775808"));
	printf("\n\n test17 \n");
	printf("\nFT_ATOI  = %d\n", ft_atoi("-9223372036854775809"));
	printf("REAL ATOI = %d\n", atoi("-9223372036854775809"));
	printf("\n\n test18 \n");
	printf("\nFT_ATOI = %d\n", ft_atoi("9223372036854775808"));
	printf("REAL_ATOI = %d\n", atoi("9223372036854775808"));
	printf("\n\n19");
	printf("\nFT_ATOI = %d\n", ft_atoi("2147484160"));
	printf("REAL_ATOI = %d\n", atoi("2147484160"));
	printf("\n\n20");
	printf("\nFT_ATOI  = %d\n", ft_atoi("6q"));
	printf("REAL ATOI = %d\n", atoi("6q"));
	printf("\n\n21");
	printf("\nFT_ATOI = %d\n", ft_atoi("2147483648"));
	printf("REAL_ATOI = %d\n", atoi("2147483648"));
	printf("\n\n22");
	printf("\nFT_ATOI  = %d\n", ft_atoi("-2147483648"));
	printf("REAL ATOI = %d\n", atoi("-2147483648"));
	printf("\n\n23");
	printf("\nFT_ATOI = %d\n", ft_atoi("2147483647"));
	printf("REAL_ATOI = %d\n", atoi("2147483647"));
	printf("\n\n24");
	printf("\nFT_ATOI  = %d\n", ft_atoi("-4294967296"));
	printf("REAL ATOI = %d\n", atoi("-4294967296"));
	printf("\n\n25");
	printf("\nFT_ATOI = %d\n", ft_atoi("4294967296"));
	printf("REAL_ATOI = %d\n", atoi("4294967296"));
	printf("\n\n26");
	printf("\nFT_ATOI  = %d\n", ft_atoi("4294967295"));
	printf("REAL ATOI = %d\n", atoi("4294967295"));
	printf("\n\n27");
	printf("\nFT_ATOI = %d\n", ft_atoi("-1"));
	printf("REAL_ATOI = %d\n", atoi("-1"));
	printf("\n\n28");
	printf("\nFT_ATOI = %d\n", ft_atoi("0"));
	printf("REAL_ATOI = %d\n", atoi("0"));
	printf("\n\n29");
	printf("FT_ATOI  = %d\n", ft_atoi("19223372036854775807"));
	printf("REAL ATOI = %d\n", atoi("19223372036854775807"));
	printf("\n\n29");
	printf("FT_ATOI = %d\n", ft_atoi("18446744073709552000"));
	printf("REAL_ATOI = %d\n", atoi("18446744073709552000"));
	printf("\n\n30");
	printf("FT_ATOI  = %d\n", ft_atoi("18446744073709551999"));
	printf("REAL ATOI = %d\n", atoi("18446744073709551999"));
	printf("\n\n31");
	printf("FT_ATOI = %d\n", ft_atoi("-0"));
	printf("REAL_ATOI = %d\n", atoi("-0"));
	printf("\n\n32");
	printf("FT_ATOI = %d\n", ft_atoi("23058430092136939529"));
	printf("REAL_ATOI = %d\n", atoi("23058430092136939529"));
}