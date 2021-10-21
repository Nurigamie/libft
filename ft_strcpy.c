/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:38:36 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 17:04:28 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


#include <stdio.h>


int main()
{
    char dst[15] = "yeti";
    char src[] = "salut";
	char dstft[15] = "yeti";
    char srcft[] = "salut";
    int size = strlcpy(dst, src, 3);
	int sizeft = ft_strlcpy(dstft, srcft, 3);
	printf("TEST 1 SYS");
	printf("return value = %d - ", size);
	printf("dst : %s \n ", dst);
	printf("TEST 1 FT");
	printf("return value = %d - ", sizeft);
	printf("dst : %s \n ", dstft);

	printf("\n\n");

    char dst1[15] = "yeti";
    char src1[] = "";
	char dstft1[15] = "yeti";
    char srcft1[] = "";
    int size1 = strlcpy(dst1, src1, 4);
	int sizeft1 = ft_strlcpy(dstft1, srcft1, 4);
	printf("TEST 2 (src = "") SYS");
	printf("return value = %d - ", size1);
	printf("dst : %s \n ", dst1);
	printf("TEST 2 FT");
	printf("return value = %d - ", sizeft1);
	printf("dst : %s \n ", dstft1);

	printf("\n\n");

	char dst2[15] = "";
    char src2[] = "coucou";
	char dstft2[15] = "";
    char srcft2[] = "coucou";
    int size2 = strlcpy(dst2, src2, 10);
	int sizeft2 = ft_strlcpy(dstft2, srcft2, 10);
	printf("TEST 3 (dst = "") SYS");
	printf("return value = %d - ", size2);
	printf("dst : %s \n ", dst2);
	printf("TEST 3 FT");
	printf("return value = %d - ", sizeft2);
	printf("dst : %s \n ", dstft2);

	printf("\n\n");

	char dst3[15] = "yolo";
    char src3[] = "#it's_snowing";
	char dstft3[15] = "yolo";
    char srcft3[] = "#it's_snowing";
    int size3 = strlcpy(dst3, src3, 15);
	int sizeft3 = ft_strlcpy(dstft3, srcft3, 15);
	printf("TEST 4a SYS");
	printf("return value = %d - ", size3);
	printf("dst : %s \n ", dst3);
	printf("TEST 4a FT");
	printf("return value = %d - ", sizeft3);
	printf("dst : %s \n ", dstft3);

	printf("\n\n");

	char dst4[15] = "chapichapo";
    char src4[] = "yodl";
	char dstft4[15] = "chapichapo";
    char srcft4[] = "yodl";
    int size4 = strlcpy(dst4, src4, 4);
	int sizeft4 = ft_strlcpy(dstft4, srcft4, 4);
	printf("TEST 4 SYS");
	printf("return value = %d - ", size4);
	printf("dst : %s \n ", dst4);
	printf("TEST 4 FT");
	printf("return value = %d - ", sizeft4);
	printf("dst : %s \n ", dstft4);

	printf("\n\n");

	char dst5[15] = "chapichapo";
    char src5[] = "yodl";
	char dstft5[15] = "chapichapo";
    char srcft5[] = "yodl";
    int size5 = strlcpy(dst5, src5, 8);
	int sizeft5 = ft_strlcpy(dstft5, srcft5, 8);
	printf("TEST 5 SYS");
	printf("return value = %d - ", size5);
	printf("dst : %s \n ", dst5);
	printf("TEST 5 FT");
	printf("return value = %d - ", sizeft5);
	printf("dst : %s \n ", dstft5);


	printf("\n\n");

    return (0);
}