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
	//calloc
	char *ptr = ft_calloc(4, 5);
	for (int i = 0; i < 20; i++)
		printf("%d", *ptr);

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
	int *array1 = {1, 2, 3};
	int *array2 = {4, 5, 6};
	int *array3 = {7, 8, 9};
	memcpy(array1, array2, 12);
	ft_memcpy(array1, array3, 12);
	if (memcmp(array2, array3, 12))
		printf("[KO] memcpy\n");
	else
		printf("[OK] ft_memcpy\n");

	//memchr
	char str7[] = "hello";
	printf("%s\n", str7);
	printf("%s\n", (char *)memchr(str7, 'o', 5));
	printf("%s\n", str7);

	//memcmp
	char str8[] = "hello";
	char str9[] = "hellZ";
	printf("%d\n", memcmp(str8, str9, 5));

	//strlen
	if (ft_strlen("Hello World!") != 12)
		printf("incorrect return on strlen's test 1\n");
	else if (ft_strlen("") != 0)
		printf("incorrect return on strlen's test 2\n");
	else
		printf("[OK] ft_strlen\n");

	//strdup
	char *teste15 = "oi";
	if (ft_strdup(teste15) == teste15)
		printf("[KO] address of strdup is the same as original string\n");
	else
		printf("[OK] ft_strdup\n");

	//strcpy
	// char teste7[] = "Don't Panic! :)";
	// char teste8[] = "teste";
	// if (ft_strcpy(teste8, teste7) != strcpy(teste8, teste7))
	// 	printf("[KO] strcpy fails on test 1\n");
	// else
	// 	printf("[OK] ft_strcpy\n");

	//strncpy
	// if (ft_strncpy(teste8, teste7, 5) != strncpy(teste8, teste7, 5))
	// 	printf("[KO] strncpy fails on test 1\n");
	// else if (ft_strncpy(teste8, teste7, 25) != strncpy(teste8, teste7, 25))
	// 	printf("[KO] strncpy fails on test 1\n");
	// else
	// 	printf("[OK] ft_strncpy\n");

	//strlcpy

	//strcat?????????
	// char teste3[50] = "i like what?";
	// char teste4[10] = "bananas";
	// char teste5[] = "i like what?bananas";
	// printf("%s\n", teste3);
	// printf("%s\n", teste4);
	// printf("%s\n", teste5);
	// printf("%s\n", ft_strcat(teste3, teste4));
	// char *teste6 = ft_strcat(teste3, teste4);
	// printf("%d = b\n", strcmp (ft_strcat(teste3, teste4), teste5));
	// printf("%d = b\n", strcmp (teste6, teste5));
	// if (strcmp (ft_strcat(teste3, teste4), teste5))
	// 	printf("[KO] strcat fails on test 1\n");
	// else
	// 	printf("[OK] ft_strcat\n");

	//strncat ??????????

	//strlcat ???????


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

	//strstr
	char teste1[] = "i like what? Bananas and strawberries";
	// if (ft_strstr(teste1, "Bananas") != &teste1[13])
	// 	printf("[KO] strstr fail on test 1\n");
	// else
	// 	printf("[OK] ft_strstr\n");

	//strnstr
	if (ft_strnstr(teste1, "Bananas", 25) != &teste1[13])
		printf("[KO] strnstr fail on test 1\n");
	if (ft_strnstr(teste1, "Bananas", 10) != 0)
		printf("[KO] strnstr does not return null\n");
	else
		printf("[OK] ft_strnstr\n");

	//strcmp
	// if (ft_strcmp("A", "B") >= 0)
	// 	printf("[KO] strcmp fail on test 1\n");
	// else if (ft_strcmp("A", "") <= 0)
	// 	printf("[KO] strcmp fail on test 2\n");
	// else if (ft_strcmp("", "") != 0)
	// 	printf("[KO] strcmp fail on test 2\n");
	// else if (ft_strcmp("Norm", "Norm") != 0)
	// 	printf("[KO] strcmp fail on test 4\n");
	// else
	// 	printf("[OK] ft_strcmp\n");

	//strncmp
	if (ft_strncmp("A", "B", 2) >= 0)
		printf("[KO] strncmp fail on test 1\n");
	else if (ft_strncmp("A", "", 1) <= 0)
		printf("[KO] strncmp fail on test 2\n");
	else if (ft_strncmp("A", "AB", 2) >= 0)
		printf("[KO] strncmp fail on test 2\n");
	else if (ft_strncmp("Norm", "Norm", 5) != 0)
		printf("[KO] strncmp fail on test 4\n");
	else
		printf("[OK] ft_strncmp\n");

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

	return (0);

	//itoa
	if(ft_itoa(0) != "0")
		printf("[KO] itoa fails on 0\n");
	else if (ft_itoa(10) != "10")
		printf("[KO] itoa fails on test 1\n");
	else if (ft_itoa(-10) != "-10")
		printf("[KO] itoa fails on negative\n");
	else if (ft_itoa(2147483647) != "2147483647")
		printf("[KO] itoa fails on INT_MAX\n");
	else if (ft_itoa(2147483647) != "-2147483648")
		printf("[KO] itoa fails on INT_MIN\n");
	else
		printf("[OK] ft_itoa");
}
