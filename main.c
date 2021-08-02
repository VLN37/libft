#include"libft.h"
#include <stdio.h>
#include <string.h>

int	isalphasupport(void)
{
	for (int i = 65; i <= 90; i++)
	{
		if(!(ft_isalpha(i)))
			return(0);
	}
	for (int i = 97; i <= 121; i++)
	{
		if(!(ft_isalpha(i)))
			return(0);
	}
	return (1);
}

int	isdigitsupport(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (!ft_isdigit(i))
			return (0);
	}
	return (1);
}

int	isalnumsupport(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		if (!ft_isalnum(i))
			return (0);
	}
	for (int i = 65; i <= 90; i++)
	{
		if(!(ft_isalnum(i)))
			return(0);
	}
	for (int i = 97; i <= 121; i++)
	{
		if(!(ft_isalnum(i)))
			return(0);
	}
	return (1);
}

int	isasciisupport(void)
{
	for (int i = 0; i <= 127; i++)
	{
		if (!ft_isascii(i))
			return (0);
	}
	return (1);
}

int	isprintsupport(void)
{
	for (int i = 32; i < 127; i++)
	{
		if(!ft_isprint(i))
			return (0);
	}
	return (1);
}

int	touppersupport(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		if (ft_toupper(i) != i - 32)
			return (0);
	}
	return (1);
}

int	tolowersupport(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		if (ft_tolower(i) != i + 32)
			return (0);
	}
	return (1);
}

int	main(void)
{

	//ft_isalpha
	if (ft_isalpha(EOF))
		printf("[KO] Isalpha returns 1 on EOF\n");
	else if(ft_isalpha('\0'))
		printf("[KO] Isalpha returns 1 on NULL\n");
	else if(ft_isalpha('@'))
		printf("[KO] Isalpha returned 1 on @\n");
	else if(ft_isalpha('['))
		printf("[KO] Isalpha returned 1 on [\n");
	else if(ft_isalpha(96))
		printf("[KO] Isalpha returned 1 on 96\n");
	else if(ft_isalpha(123))
		printf("[KO] Isalpha returned 1 on 123\n");
	else if(!isalphasupport())
		printf("[KO] isalpha returned 0 on alphabetical\n");
	else
		printf("[OK] ft_isalpha\n");

	//ft_isdigit
	if (isdigitsupport())
		printf("[KO] digit returns 0\n");
	else if(ft_isdigit(11))
		printf("[KO] is digit returned 1 on 11\n");
	else if(ft_isdigit(0))
		printf("[KO] is digit returned 1 on 0\n");
	else
		printf("[OK] ft_isdigit\n");

	//ft_isalnum
	if (ft_isalnum(EOF))
		printf("[KO] Isalpha returns 1 on EOF\n");
	else if(ft_isalnum('\0'))
		printf("[KO] Isalpha returns 1 on NULL\n");
	else if(ft_isalnum('@'))
		printf("[KO] Isalpha returned 1 on @\n");
	else if(ft_isalnum('['))
		printf("[KO] Isalpha returned 1 on [\n");
	else if(ft_isalnum(96))
		printf("[KO] Isalpha returned 1 on 96\n");
	else if(ft_isalnum(123))
		printf("[KO] Isalpha returned 1 on 123\n");
	else if(ft_isalnum(11))
		printf("[KO] is digit returned 1\n");
	else if(ft_isalnum(0))
		printf("[KO] is digit returned 1\n");
	else if(!isalnumsupport())
		printf("[KO] alnum returns 0 on alphanumeric\n");
	else
		printf("[OK] ft_isalnum\n");

	//isascii
	if (ft_isascii(-1))
		printf("[KO] isascii returns 1 on negative\n");
	else if (ft_isascii(128))
		printf("[KO] isascii returns 1 over 127\n");
	else if (!isasciisupport())
		printf("[KO] isascii returns 0 in ascii range\n");
	else
		printf("[OK] ft_isascii\n");

	//isprint
	if (ft_isprint(19))
		printf("[KO] isprint returns 1 on 19\n");
	if (ft_isprint(127))
		printf("[KO] isprint returns 1 on 127\n");
	if (!isprintsupport())
		printf("[KO] isprint returns 0 on printable characters\n");

	//strlen
	if (ft_strlen("Hello World!") != 12)
		printf("incorrect return on strlen's test 1\n");
	else if (ft_strlen("") != 0)
		printf("incorrect return on empty string\n");
	else
		printf("[OK] ft_strlen\n");

	//memset
	char str1[] = "";
	char str2[] = "";
	char str3[] = "123123123123";
	char str4[] = "123123123123";
	char str5[] = "justtestingthisfornopurposeatall";
	char str6[] = "justtestingthisfornopurposeatall";
	memset(str1, '$', 1);
	ft_memset(str2, '$', 1);
	memset(str3, '$', 9);
	ft_memset(str4, '$', 9);
	memset(str5, '$', 15);
	ft_memset(str6, '$', 15);
	if (strncmp(str1, str2, 1))
		printf("[KO] memset fails on test 1\n");
	else if (strncmp(str3, str4, 9))
		printf("[KO] memset fails on test 2\n");
	else if (strncmp(str5, str6, 15))
		printf("[KO] memset fails on test 3\n");
	else
		printf("[OK] ft_memset\n");

	//bzero
	bzero(str1, 1);
	ft_bzero(str2, 1);
	bzero(str3, 9);
	ft_bzero(str4, 9);
	bzero(str5, 15);
	ft_bzero(str6, 15);
	if (strncmp(str1, str2, 1))
		printf("[KO] bzero fails on test 1\n");
	else if (strncmp(str3, str4, 9))
		printf("[KO] bzero fails on test 2\n");
	else if (strncmp(str5, str6, 15))
		printf("[KO] bzero fails on test 3\n");
	else
		printf("[OK] ft_bzero\n");

	//memcpy

	//memmove

	//strlcpy

	//strlcat

	//toupper
	if (ft_toupper(123) != 123)
		printf("[KO] toupper modifies non-alphabetic chars\n");
	else if (ft_toupper(75) != 75)
		printf("[KO] toupper modifies uppercase chars\n");
	else if (ft_toupper(96) != 96)
		printf("[KO] toupper modifies non-alphabetic chars\n");
	else if (!touppersupport())
		printf("[KO] toupper does not uppercase all lowercase characters\n");
	else
		printf("[OK] ft_toupper\n");

	//tolower
	if (ft_tolower(64) != 64)
		printf("[KO] tolower modifies non-alphabetic chars\n");
	else if (ft_tolower(110) != 110)
		printf("[KO] tolower modifies lowercase chars\n");
	else if (ft_tolower(91) != 91)
		printf("[KO] tolower modifies non-alphabetic chars\n");
	else if (!tolowersupport())
		printf("[[KO] tolower does not lowercase all uppercase characters\n");
	else
		printf("[OK] ft_tolower\n");

	//strchr
	char *teste2 = "abccdefg";
	if (ft_strchr(teste2, 'c') != &teste2[2])
		printf("[KO] strchr returns different addresses\n");
	else if (ft_strchr(teste2, 'h') != 0)
		printf("[KO] strchr returns does not return NULL\n");
	else
		printf("[OK] ft_strchr\n");

	//strrchr
	if (ft_strrchr(teste2, 'c') != &teste2[3])
		printf("[KO] strchr returns different addresses\n");
	else if (ft_strrchr(teste2, 'h') != 0)
		printf("[KO] strchr returns does not return NULL\n");
	else
		printf("[OK] ft_strchr\n");

	//strncmp
	if (ft_strncmp("A", "B", 2) >= 0)
		printf("[KO] strncmp fail on test 1\n");
	else if (ft_strncmp("A", "", 1) <= 0)
		printf("[KO] strncmp fail on test 2\n");
	else if (ft_strncmp("A", "AB", 2) >= 0)
		printf("[KO] strncmp fail on test 3\n");
	else if (ft_strncmp("Norm", "Norm", 5) != 0)
		printf("[KO] strncmp fail on test 4\n");
	else
		printf("[OK] ft_strncmp\n");

	//memchr
	char str7[] = "hello";
	if ((char *)memchr(str7, 'o', 5) != &str7[4])
		printf("[KO] memchr fails test 1\n");
	else if((char *)memchr(str7, 'p', 5))
		printf("[KO] memchr does not return NULL\n");
	else
		printf("[OK] ft_memchr\n");

	//memcmp
	char str8[] = "hello";
	char str9[] = "hellZ";
	if (memcmp(str8, str9, 4) != ft_memcmp(str8, str9, 4))
		printf("[KO] memcmp does not return 0 as expected\n");
	else if (memcmp(str8, str9, 5) < 0)
		printf("[KO] memcmp does not return a difference as expected\n");
	else
		printf("[OK] ft_memcmp\n");

	//strnstr
	char teste1[] = "i like what? Bananas and strawberries";
	if (ft_strnstr(teste1, "Bananas", 25) != &teste1[13])
		printf("[KO] strnstr fail on test 1\n");
	if (ft_strnstr(teste1, "Bananas", 10) != 0)
		printf("[KO] strnstr does not return null\n");
	else
		printf("[OK] ft_strnstr\n");

	//atoi
	if (ft_atoi("      -2147483648") != -2147483648)
		printf("[KO] atoi fails MIN_INT\n");
	else if (ft_atoi("      +2147483647") != 2147483647)
		printf("[KO] atoi fails MAX_INT\n");
	else if (ft_atoi("    a  -++-+----2147483648") != 0)
		printf("[KO] atoi fails test 3\n");
	else if (ft_atoi("      -++-+s----1337") != 0)
		printf("[KO] atoi fails test 4\n");
	else if (ft_atoi("   -1337s1337") != -1337)
		printf("[KO] atoi fails test 5\n");
	else if (ft_atoi("-70703") != -70703)
		printf("[KO] atoi fails test 6\n");
	else if (ft_atoi("1231a1") != 1231)
		printf("[KO] atoi fails test 7\n");
	else
		printf("[OK] ft_atoi\n");

	//calloc
	char *ptr = ft_calloc(4, 5);
	if (memcmp(ptr, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20))
		printf("[KO] ft_calloc\n");
	else
		printf("[OK] ft_calloc\n");
	free(ptr);

	//strdup
	char *str10 = "string to be duped";
	char *str11 = ft_strdup(str10);
	if(&str10 == &str11)
		printf("[KO] ft_strdup addresses are the same\n");
	else if (memcmp(str10, str11, ft_strlen(str3) + 1))
		printf("[KO] ft_strdup contents are not the same\n");
	else
		printf("[OK] ft_strdup\n");

	printf ("\n----- Part 2-----\n");

	//itoa
	if(strncmp(ft_itoa(0), "0", 2) != 0)
		printf("[KO] itoa fails on 0\n");
	else if (strncmp(ft_itoa(10), "10", 3) != 0)
		printf("[KO] itoa fails on test 1\n");
	else if (strncmp(ft_itoa(-10), "-10", 4) != 0)
		printf("[KO] itoa fails on negative\n");
	else if (strncmp(ft_itoa(2147483647), "2147483647", 11) != 0)
		printf("[KO] itoa fails on INT_MAX\n");
	else if (strncmp(ft_itoa(-2147483648), "-2147483648", 12) != 0)
		printf("[KO] itoa fails on INT_MIN\n");
	else
		printf("[OK] ft_itoa\n");

	printf ("\n----- Bonus part-----\n");
}
