/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:18:34 by gusousa           #+#    #+#             */
/*   Updated: 2022/05/30 09:27:07 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void	test_ft_isalpha()
{
	printf("*************** FT_ISALPHA ***************\n");
	printf("Testando com 4 ---->\t%d\n" , ft_isalpha('4'));
	printf("Original com 4 ---->\t%d\n\n" , isalpha('4'));
	printf("Testando com a ---->\t%d\n" , ft_isalpha('a'));
	printf("Original com a ---->\t%d\n\n" , isalpha('a'));
}

void	test_ft_isdigit()
{
	printf("*************** FT_ISALPHA ***************\n");
	printf("Testando com 4 ---->\t%d\n" , ft_isdigit('4'));
	printf("Original com 4 ---->\t%d\n\n" , isdigit('4'));
	printf("Testando com a ---->\t%d\n" , ft_isdigit('a'));
	printf("Original com a ---->\t%d\n\n" , isdigit('a'));
}

void	test_ft_isascii()
{	
	printf("*************** FT_ISASCII ***************\n");
	printf("Testando com 4 ---->\t%d\n" , ft_isascii('4'));
	printf("Original com 4 ---->\t%d\n\n" , isascii('4'));
	printf("Testando com int 400 ---->\t%d\n" , ft_isascii(400));
	printf("Original com int 400 ---->\t%d\n\n" , isascii(400));
}

void	test_ft_isprint()
{
	printf("*************** FT_ISPRINT ***************\n");
	printf("Testando com 4 ---->\t%d\n" , ft_isprint('4'));
	printf("Original com 4 ---->\t%d\n\n" , isprint('4'));
	printf("Testando com '\\r' ---->\t%d\n" , ft_isprint('\r'));
	printf("Original com '\\r'---->\t%d\n\n" , isprint('\r'));
}

void	test_ft_isalnum()
{
	printf("*************** FT_ALNUM ***************\n");
	printf("Testando com 4 ---->\t%d\n" , ft_isalnum('4'));
	printf("Original com 4 ---->\t%d\n\n" , isalnum('4'));
	printf("Testando com A ---->\t%d\n" , ft_isalnum('A'));
	printf("Original com A---->\t%d\n\n" , isalnum('A'));
	printf("Testando com ! ---->\t%d\n" , ft_isalnum('!'));
	printf("Original com ! ---->\t%d\n\n" , isalnum('!'));
}

void	test_ft_toupper()
{
	printf("*************** FT_TOUPPER ***************\n");
	printf("Testando com 4 ---->\t%c\n" , ft_toupper('4'));
	printf("Original com 4 ---->\t%c\n\n" , toupper('4'));
	printf("Testando com a ---->\t%c\n" , ft_toupper('a'));
	printf("Original com a---->\t%c\n\n" , toupper('a'));
}

void	test_ft_tolower()
{
	printf("*************** FT_TOLOWER ***************\n");
	printf("Testando com 4 ---->\t%c\n" , ft_tolower('4'));
	printf("Original com 4 ---->\t%c\n\n" , tolower('4'));
	printf("Testando com A ---->\t%c\n" , ft_tolower('A'));
	printf("Original com A ---->\t%c\n\n" , tolower('A'));
}

void	test_ft_strlen()
{
	printf("*************** FT_STRLEN ***************\n");
	printf("Testando para 'Tenho 7' ---->\t%zu\n" , ft_strlen("Tenho 7"));
	printf("Gabarito para 'Tenho 7' ---->\t%zu\n\n" , strlen("Tenho 7"));
		
}

void	test_ft_atoi()
{
	printf("*************** FT_ATOI ***************\n");
	printf("Testando com 137 --->\t%d\n" , ft_atoi("137"));
	printf("Gabarito com 137 --->\t%d\n\n" , atoi("137"));
	printf("Testando com   ---337 --->\t%d\n" , ft_atoi("  ---337"));
	printf("Gabarito com   ---337 --->\t%d\n\n" , atoi("  ---337"));
	printf("Testando com -+ 4+37 --->\t%d\n" , ft_atoi("-+ 4+37"));
	printf("Gabarito com -+ 4+37 --->\t%d\n\n" , atoi("-+ 4+37"));
	printf("Testando com -2147483649 --->\t%d\n" , ft_atoi("-2147483650"));
	printf("Gabarito com -2147483649 --->\t%d\n\n" , atoi("-2147483650"));
	printf("Testando com 2147483649 --->\t%d\n" , ft_atoi("2147483649"));
	printf("Gabarito com 2147483649 --->\t%d\n\n" , atoi("2147483649"));
}

void	test_ft_strchr()
{
	printf("*************** FT_STRCHR ***************\n");
	char	c1 = 'o';
	char	c2 = 'p';
	char	c3 = '\0';
	char	s[] = "AlooTohaa";
	printf("Testando 'o' em AlooTohaa --->\t%s\n", ft_strchr(s, c1));
	printf("Gabarito 'o' em aLoTohaa --->\t%s\n\n", strchr(s, c1));
	printf("Testando 'p' em AlooTohaa --->\t%s\n", ft_strchr(s, c2));
	printf("Gabarito 'p' em aLoTohaa --->\t%s\n\n", strchr(s, c2));
	printf("Testando '\\0' em AlooTohaa --->\t%s\n", ft_strchr(s, c3));
	printf("Gabarito '\\0' em aLoTohaa --->\t%s\n\n", strchr(s, c3));
}

void	test_ft_strrchr()
{
	printf("*************** FT_STRRCHR ***************\n");
	char	c11 = 'o';
	char	c22 = 'p';
	char	c33 = '\0';
	char	s[] = "AlooTohaa";
	printf("Testando 'o' em AlooTohaa --->\t%s\n", ft_strchr(s, c11));
	printf("Gabarito 'o' em aLoTohaa --->\t%s\n\n", strchr(s, c11));
	printf("Testando 'p' em AlooTohaa --->\t%s\n", ft_strchr(s, c22));
	printf("Gabarito 'p' em aLoTohaa --->\t%s\n\n", strchr(s, c22));
	printf("Testando '\\0' em AlooTohaa --->\t%s\n", ft_strchr(s, c33));
	printf("Gabarito '\\0' em aLoTohaa --->\t%s\n\n", strchr(s, c33));
}

void	test_ft_strncmp()
{
	printf("*********** FT_STRNCMP **********\n");
	printf("ft_strncmp:\t%d\n", ft_strncmp("ala" , "alb", 3));
	printf("GABARITO:\t%d\n\n", strncmp("ala" , "alb", 3));
	printf("ft_strncmp:\t%d\n", ft_strncmp("aloha" , "alo", 6)); // Está dando 0
	printf("GABARITO:\t%d\n\n", strncmp("aloha" , "alo", 6)); // Está dando 1
	
	printf("ft_strncmp:\t%d\n", ft_strncmp("aloha" , "aloha", 2));
	printf("GABARITO:\t%d\n\n", strncmp("aloha" , "aloha", 2));
}

void	test_ft_memset()
{
	printf("*********** FT_MEMSET **********\n");
	char	b[6];
	char	bu[6];
	ft_memset(b , 'r', sizeof(char) * 5); // Fica um o no final
	printf("ft_memset:\t%s\n", b);
	memset(bu , 'r', sizeof(char) * 5); // Está com o dobro (10)
	printf("GABARITO:\t%s\n\n", bu);
}

void	test_ft_bzero()
{
	printf("*********** FT_BZERO **********\n");
	char	bo[4] = "Alo";
	char	bi[4] = "Alo";
	ft_bzero(bo , sizeof(char) * 3);
	printf("ft_bzero:\t%d%d%d%d\n", bo[0], bo[1], bo[2], bo[3]);
	bzero(bi , sizeof(char) * 3);
	printf("GABARITO:\t%d%d%d%d\n\n", bi[0], bi[1], bi[2], bi[3]);	
	char	bl[4] = "oe";
	char	bp[4] = "oe";
	ft_bzero(bl , 0);
	printf("ft_bzero:\t%d%d%d%d\n", bl[0], bl[1], bl[2], bl[3]);
	bzero(bp , 1);
	printf("GABARITO:\t%d%d%d%d\n\n", bp[0], bp[1], bp[2], bp[3]);	
}

void	test_ft_memcpy()
{

	printf("*********** FT_MEMCPY **********\n");
	char	tra[5] = "Papa";
	char	tor[5] = "gaio";

	printf("%s e %s\n", tra, tor);
	ft_memcpy(tra, tor, 4 * sizeof(char));
	printf("%s e %s\n", tra, tor);
	memcpy(tra, tor, 4 * sizeof(char));
	printf("%s e %s\n", tra, tor);	
}
	
void	test_ft_memchr()
{
	printf("*********** FT_MEMCHR **********\n");
	char	praia[10] = "Aloooha";
	printf("ft_memchr:\t%s\n", ft_memchr(praia, 'o', 6));
	printf("GABARITO:\t%s\n\n", memchr(praia, 'o', 6));	
}

void	test_ft_memcmp()
{
	printf("*********** FT_MEMCMP **********\n");
	printf("ft_strncmp:\t%d\n", ft_memcmp("ala" , "alb", 3));
	printf("GABARITO:\t%d\n\n", memcmp("ala" , "alb", 3));
	
	printf("ft_strncmp:\t%d\n", ft_memcmp("aloha" , "alo", 6)); // Está dando 0
	printf("GABARITO:\t%d\n\n", memcmp("aloha" , "alo", 6)); // Está dando 1	
}

void	test_ft_memmove()
{
	printf("*********** FT_MEMMOVE **********\n");
	char	te[6] = "Barb";
	char	la[60] = "aralene";
	printf("%s%s\n", te, la);
	ft_memmove(te, la, 6 * sizeof(char));
	printf("%s%s\n", te, la);
	memmove(te, la, 6 * sizeof(char));
	printf("%s%s\n\n", te, la);	
}
	
void	test_ft_strlcpy()
{
	printf("*********** FT_STRLCPY **********\n");
	char	bir[6] = "Gaivo";
	char	d[6] = "ta";
	printf("%s%s\n", bir, d);
	ft_strlcpy(bir, d, 6);
	printf("%s%s\n", bir, d);
	strlcpy(bir, d, 6);
	printf("Gabarito: %s%s\n\n", bir, d);
}

void	test_ft_strlcat()
{
	printf("*********** FT_STRLCAT **********\n");
	char	tru[6] = "pon";
	char	ta[6] = "te";
	printf("Concatenando \"pon\" com \"te\"\n");
	size_t numero = ft_strlcat(tru, ta, 6);
	printf("--->%zu\n", numero);
	size_t numero1 = strlcat(tru, ta, 6);
	printf("Gabarito: %zu\n\n", numero1);	
	printf("Gabarito: %s\n\n", tru);	
}
	
void	test_ft_strnstr()
{
	printf("*********** FT_STRNSTR **********\n");
	const char	*test1 = "Abracadabra";
	const char	*test2 = "aca";
	printf("%s\n", ft_strnstr(test1, test2, 7));
	printf("%s\n\n", strnstr(test1, test2, 7));
	
	printf("%s\n", ft_strnstr(test1, test2, 5));
	printf("%s\n\n", strnstr(test1, test2, 5));	
}

void	test_ft_calloc()
{
	printf("*********** FT_CALLOC **********\n");
	printf("%s\n", (char *)ft_calloc(10, sizeof(char)));
	printf("%s\n\n", (char *)calloc(4, sizeof(int)));	
}

void	test_ft_strdup()
{
	printf("*********** FT_STRDUP **********\n");
	char	*carro = "Volkswagem";
	printf("Testando com \"Volkswagem\"\n--->%s\n", ft_strdup(carro));	
	printf("Gabarito: %s\n\n", strdup(carro));
}
	
//################ Parte 2 #############

void	test_ft_substr()
{
	char	*poema = "Na minha terra tem palmeira";
	printf("Testando com \"Na minha terra tem palmeira\". Índice 3. Tamanho 5.\n---> %s\n\n", ft_substr(poema, 3, 5));
}

void	test_ft_strjoin()
{
	printf("*************** FT_STRJOIN ***************\n");
	char	*poema1 = "Batatinha quando nasce";
	char	*poema2 = "Espalha rama pelo chao";

	printf("\"Batatinha quando nasce\" e \"Espalha rama pelo chao\"\n---> %s\n\n", ft_strjoin(poema1, poema2));
}

void	test_ft_strtrim()
{
	printf("*************** FT_STRTRIM ***************\n");
	char	*o_pato = "patpat, sim o pato clapatropat";
	printf("Testando com: \"patpat, sim pato clapatropat\"\n--->%s\n", ft_strtrim(o_pato, "pat"));
	printf("Testando com: \"       \"\n--->%s\n", ft_strtrim("       ", "  "));
	printf("Testando com: \"    A   \"\n--->%s\n\n", ft_strtrim("     A    ", "  "));
}

void	test_ft_split()
{
	printf("*************** FT_STRSPLIT ***************\n");
	char	*verdineas = "Gramas Verdineas e gnomos";
	char	**gramas = ft_split(verdineas, ' ');
	printf("Testando: Gramas Verdineas e gnomos\n--->");
	int	i = -1;
	while (++i < 4)
		printf("%s\n", gramas[i]);
	printf("\n");
	
	char	*cawboi = "Rodeio";
	char	**boi = ft_split(cawboi, ' ');
	printf("Testando: \"Rodeio\"\n--->");
	printf("%s\n", boi[0]);
	printf("\n");
	
	char	**parede = ft_split("", ' ');
	printf("Testando: \"\"\n--->");
	printf("%s\n", parede[0]);
	printf("\n");
	
	char	*laco = "   Galera de cowboy !  ";
	char	**oia = ft_split(laco, ' ');
	printf("Testando: \"   Galera de cowboy !  \"\n--->");
	i = -1;
	while (++i < 5)
		printf("%s\n", oia[i]);
	printf("\n");
	
	char	**month = ft_split("JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC", ',');
	printf("Testando: \"JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC\"\n--->");
	i = -1;
	while (++i < 13)
		printf("%s\n", month[i]);
	printf("\n");
		
	
}

void	test_ft_itoa()
{
	printf("*************** FT_ITOA ***************\n");
	printf("Testando com 1934\n--->%s\n\n", ft_itoa(1934));
	printf("Testando com -784\n--->%s\n\n", ft_itoa(-784));
	printf("Testando com 0\n--->%s\n\n", ft_itoa(0));
	printf("Testando com -2147483648\n--->%s\n\n", ft_itoa(-2147483648));
	printf("Testando com -2147483647\n--->%s\n\n", ft_itoa(-2147483647));
	printf("Testando com \\0\n--->%s\n\n", ft_itoa('\0'));
}

/* void	test_ft_strmapi()
{
	printf("*************** FT_STRMAPI ***************\n");
	char	*sover = "198j-h-k-l";
	printf("Testando com 198j-h-k-l\n-->%s", ft_strmapi(sover, &ft_isalnum));
}

void	test_ft_striteri()
{
	printf("*************** FT_STRTERI ***************\n");
	char	*solver = "198j-h-k-l";
	printf("Testando com 198j-h-k-l\n-->%s", ft_strmapi(solver, &ft_isalnum));
	
} */

void	test_ft_putchar_fd()
{
	printf("*************** FT_ITOA ***************\n");
	
}

void	test_ft_putstr_fd()
{
	printf("*************** FT_ITOA ***************\n");
	
}

void	test_ft_putendl_fd()
{
	printf("*************** FT_ITOA ***************\n");
	
}

void	test_ft_putnbr_fd()
{
	printf("*************** FT_ITOA ***************\n");
	
}

int	main(void)
{
	//iniciais
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_isalnum();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_atoi();
	//String.h
	test_ft_strlen();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strnstr();
	test_ft_strncmp();
	//Mem
	test_ft_memcmp();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memchr();
	test_ft_memmove();
	test_ft_calloc();
	test_ft_strdup();
	// Parte 2
	test_ft_itoa(); 
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	
	test_ft_split();
	//test_ft_strmapi();
	//test_ft_striteri();
	
	return (0);
}
