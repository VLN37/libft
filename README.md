# Libft - An implementation of the C Standard Library

This is the first project of the 42 Programming School.It is both an introduction to programming in C as well as a basis on which you will build the rest of the school's projects.

- - -

## What i learned?

This project gives an overview of many C programming concepts with a focus in string and memory manipulation, pointers and linked lists. All of which will be very helpful later on the course.

Aside from functions that make system calls everything that we create must be based on functions that we have coded ourselves. Thus this is the most important project in the syllabus and one that we will iterate on over time.

## My badge

![Libft badge](/docs/libftm.png)

## My grade

![Libft badge](/docs/libftgrade.png)

#### Functions from `<ctype.h>`

libft | description
----- | ----------
[ft_isdigit](/ft_isdigit.c) | Checks if a given character is numeric
[ft_isalpha](/ft_isalpha.c) | Checks if a given character is alphabetic
[ft_isalnum](/ft_isalnum.c) | Checks if a given character is alphanumeric
[ft_isprint](/ft_isprint.c) | Checks if a given character is printable
[ft_isascii](/ft_isascii.c) | Checks if a given character belongs in the ASCII table
[ft_tolower](/ft_tolower.c) | If uppercase, returns its lowercase equivalent
[ft_toupper](/ft_toupper.c) | If lowercase, returns its uppercase equivalent

#### Functions from `<string.h>`

libft | description
----- | -----------
[ft_memset](/ft_memset.c) | overwites the next *n* bytes of data with the specified character
[ft_memcpy](/ft_memcpy.c) | copies *n* bytes of data from source to destination
[ft_memmove](/ft_memmove.c) | copies *n* bytes of data from source to destination, with treatment for possibly overlapping addresses
[ft_memchr](/ft_memchr.c) | returns the first ocurrence of *c* in the first *n* bytes of memory
[ft_memcmp](/ft_memcmp.c) | assess whether the first *n* bytes are equal
[ft_strncmp](/ft_strcmp.c) | assess whether the first *n* characters of a string are equal
[ft_strchr](/ft_strchr.c) | returns the first ocurrence of the character *c* in *str*
[ft_strrchr](/ft_strrchr.c) | returns the last ocurrence of the character *c* in *str*
[ft_bzero](/ft_bzero.c) | overwrites the next *n* bytes of data with zeros
[ft_strlen](/ft_strlen.c) | Returns the size of the string passed as argument
[ft_strdup](/ft_strdup.c) | Duplicates a string, returning a new address
[ft_strnstr](/ft_strnstr.c) | finds the first ocurrence of a string within a string

#### Functions from `<stdlib.h>`

libft | description
----- | -----------
[ft_calloc](/ft_calloc.c) | allocates *n* bytes of data and initializes them all with zeros
[ft_atoi](/ft_atoi.c) | Converts a string to an integer

#### Non-standard functions
libft | description
----- | -----------
[ft_substr](/ft_substr.c) | Extract a portion of a string
[ft_strjoin](/ft_strjoin.c) | Concatenates two strings returning a new one
[ft_strtrim](/ft_strtrim.c) | removes a set of characters from the beggining and end of a string
[ft_split](/ft_split.c) | Slices the string into several others delimited by the character *c*
[ft_itoa](/ft_itoa.c) | Converts an integer into a string
[ft_strmapi](/ft_strmapi.c) | Applies a function to every character of the string
[ft_striteri](/ft_striteri.c) | Applies a function to every address of the string
[ft_putchar_fd](/ft_strmapi.c) | Writes a character in the given file descriptor
[ft_putnbr_fd](/ft_strmapi.c) | Writes a number in the given file descriptor
[ft_putstr_fd](/ft_strmapi.c) | Writes a string in the given file descriptor
[ft_putendl_fd](/ft_strmapi.c) | Writes a string in the given file descriptor, followed by a newline

#### Linked-list functions
libft | description
----- | -----------
[ft_lstnew](/ft_lstnew.c) | creates a new struct node
[ft_lstsize](/ft_lstsize.c) | Returns the size of the list
[ft_lstlast](/ft_lstlast.c) | Returns the address of the last element in the list
[ft_lstadd_front](/ft_lstadd_front.c) | adds a new node to the start of the list
[ft_lstadd_back](/ft_lstadd_back.c) | adds a new node to the end of the list
[ft_lstclear](/ft_lstclear.c) | frees the memory of all nodes and their respective contents
[ft_lstiter](/ft_lstiter.c) | applies the function *f* to the contents of every node
[ft_lstmap](/ft_lstmap.c) | copies the entire list and applies the function *f* to the contents of every node

## License

This project is licensed under the BSD Simplified License, [available here](LICENSE)
