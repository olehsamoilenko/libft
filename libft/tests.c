/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:19:50 by rmalyavc          #+#    #+#             */
/*   Updated: 2017/11/21 17:37:24 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

/*void	atoi_test(void)
{
	char *test[] =	{
						"2147483647",
						"-2147483648",
						"-210",
						"-2147bbb483648",
						"+2",
						"0",
						"-0",
						"+0",
						"++20",
						"--2",
						"\r\f\v\t\n 567 567 ",
						"922337203685477580",
						"-922337203685477580",
						"9223372036854775807",
						"9223372036854775808",
						"-9223372036854775807",
						"-9223372036854775808",
						"19223372036854775807",
						"-19223372036854775808",
						0
					};

	int i = -1;
	while (test[++i])
	{
		if (atoi(test[i]) != ft_atoi(test[i]))
			printf("     Fail! ft_atoi(%s): %d atoi(%s): %d\n", test[i], ft_atoi(test[i]), test[i], atoi(test[i]));
	}
}

void	bzero_test(void)
{
	struct example
	{
		char	*s;
		int		len;
	};
	struct example test[] =	{
								"abcdefgh", 9,
								"", 1,
								"\0", 1,
								"\0\0\0", 3,
								"\0\0abc\0", 6
							};
	int count = sizeof(test) / sizeof(test[0]);
	int i = -1;
	char *buf;
	while (++i < count)
	{
		buf = ft_strdup(test[i].s);
		bzero(buf, test[i].len);
		int j = -1;
		while (++j < test[i].len)
			if (buf[j] != 0)
			{
				printf("     Fail! ft_bzero(%s) => %s\n", test[i].s, buf);
				break ;
			}
	}
}

void	isalnum_test(void)
{
	int i = -1000;
	while (++i < 1000)
		if (isalnum(i) != ft_isalnum(i))
			printf("     Fail! ft_isalnum(%i): %i isalnum(%i):    %i\n", i, isalnum(i), i, ft_isalnum(i));
}

void	isalpha_test(void)
{
	int i = -1000;
	while (++i < 1000)
		if (isalpha(i) != ft_isalpha(i))
			printf("     Fail! ft_isalpha(%i): %i isalpha(%i):    %i\n", i, isalpha(i), i, ft_isalpha(i));
}

void	isascii_test(void)
{
	int i = -1000;
	while (++i < 1000)
		if (isascii(i) != ft_isascii(i))
			printf("     Fail! ft_isascii(%i): %i isascii(%i):    %i\n", i, isascii(i), i, ft_isascii(i));
}

void	isdigit_test(void)
{
	int i = -1000;
	while (++i < 1000)
		if (isdigit(i) != ft_isdigit(i))
			printf("     Fail! ft_isdigit(%i): %i isdigit(%i):    %i\n", i, isdigit(i), i, ft_isdigit(i));
}

void	isprint_test(void)
{
	int i = -1000;
	while (++i < 1000)
		if (isprint(i) != ft_isprint(i))
			printf("     Fail! ft_isprint(%i): %i isprint(%i):    %i\n", i, isprint(i), i, ft_isprint(i));
}

void	itoa_test(void)
{
	int test[] = 	{
						-2147483648,
						-2147483647,
						-1234567
						-123,
						-0,
						0,
						123,
						123456,
						2147483647
					};

	int i = -1;
	int count = sizeof(test) / sizeof(test[0]);
	while (++i < count)
	{
		if (atoi(ft_itoa(test[i])) != test[i])
			printf("     Fail! ft_itoa(%i): %s\n", test[i], ft_itoa(i));
	}
}

void	lstadd_test(void)
{
	t_list	*elem;

	elem = ft_lstnew("String1", 10);
	ft_lstadd(&elem, ft_lstnew("String2", 10));
	ft_lstadd(&elem, ft_lstnew("String3", 10));
	if (strcmp(elem->content, "String3") != 0 ||
			strcmp(elem->next->content, "String2") ||
			strcmp(elem->next->next->content, "String1") ||
			elem->next->next->next != NULL)
		printf("     Fail! %s->%s->%s->%s\n", elem->content, elem->next->content, elem->next->next->content,
				(char *)elem->next->next->next);
}
*/
static void	ft_memset_test(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n - 1)
	{
		ptr[i] = '\0';
		i++;
	}
}

void	lstdel_test(void)
{
	t_list	*ptr1 = ft_lstnew("String1", 16);
	ptr1->next = ft_lstnew("String2", 16);
	ptr1->next->next = ft_lstnew("String3", 16);
	t_list *ptr2 = ptr1->next;
	t_list *ptr3 = ptr1->next->next;
	ft_lstdel(&ptr1, &ft_memset_test);
	if (ptr1 != NULL)
		printf("     Fail! ft_lstdel(String1->String2->String3): %p -> %p -> %p\n", ptr1, ptr2, ptr3);
}

void	lstdelone_test(void)
{
	t_list	*ptr;
	t_list	*curr;

	ptr = ft_lstnew("String1", 16);
	ptr->next = ft_lstnew("String2", 16);
	curr = ptr;
	ft_lstdelone(&ptr, &ft_memset_test);
	if (ptr != NULL || strcmp(curr->next->content, "This is string2") != 0)
		printf("Fail! Ptr = %s Ptr->next->content = %s\n", (char *)curr, (char *)curr->next->content);
}

static void	change_list(t_list *elem)
{
	char	*ptr;

	ptr = elem->content;
	ptr[14] = '9';
}

void	lstiter_test(void)
{
	t_list	*elem;
	t_list	*curr;

	elem = ft_lstnew("This is string1", 16);
	elem->next = ft_lstnew("This is string2", 16);
	elem->next->next = ft_lstnew("This is string3", 16);
	curr = elem;
	ft_lstiter(curr, &change_list);
	if (strcmp(curr->content, curr->next->content) != 0 || strcmp(curr->content, curr->next->next->content) != 0 || strcmp(curr->next->content, curr->next->next->content) != 0)
		printf("Fail! elem1 = %s elem2 = %s elem3 = %s\n", (char *)curr->content, (char *)curr->next->content, (char *)curr->next->next->content);
	else
		printf("Success!\n");
}

static t_list	*change_data(t_list *elem)
{
	char	*ptr;
	t_list	*newelem;

	newelem = ft_lstnew(elem->content, elem->content_size);
	ptr = newelem->content;
	ptr[14] = '9';
	return (newelem);
}

void	lstmap_test(void)
{
	t_list	*elem;
	t_list	*curr;
	t_list	*list;

	elem = ft_lstnew("This is string1", 16);
	elem->next = ft_lstnew("This is string2", 16);
	elem->next->next = ft_lstnew("This is string3", 16);
	curr = elem;
	list = ft_lstmap(curr, &change_data);
	if (strcmp(list->content, list->next->content) != 0 || strcmp(list->content, list->next->next->content) != 0 || strcmp(list->next->content, list->next->next->content) != 0)
		printf("Fail! elem1 = %s elem2 = %s elem3 = %s\n", (char *)list->content, (char *)list->next->content, (char *)list->next->next->content);
	else
		printf("Success!\n");
}

void	lstnew_test(void)
{
	t_list	*elem;

	elem = NULL;
	elem = ft_lstnew("This is string1", 16);
	if (elem == NULL || strcmp(elem->content, "This is string1") != 0 || elem->next != NULL)
		printf("Fail! Elem = %s Content = %s Next = %s\n", (char *)elem, elem->content, (char *)elem->next);
	else
		printf("Success!\n");
}

void	memalloc_test(void)
{
	char	*buffer;
	char	c[2];
	size_t	i;

	i = 0;
	c[1] = '\0';
	while (i <= 100)
	{
		buffer = ft_memalloc(i);	
		c[0] = i + '0';
		buffer[0] = c[0];
		if ((buffer == NULL && i != 0) || (buffer != NULL && strcmp(buffer, c) != 0))
		{
			printf("Fail! Buffer is %s i = %zu\n", buffer, i);
			return ;
		}
		i++;
	}
	printf("Success!\n");
}

void	memccpy_test(void)
{
	char	**buffer;
	int		i;

	i = -1;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (++i < 10)
		buffer[i] = (char *)calloc(1, sizeof(char) * 16);
	memccpy(buffer[0], "This is string1", 's', 15);
	ft_memccpy(buffer[1], "This is string1", 's', 15);
	memccpy(buffer[2], "This is string1", 'r', 15);
	ft_memccpy(buffer[3], "This is string1", 'r', 15);
	memccpy(buffer[4], "This is string1", 'r', 10);
	ft_memccpy(buffer[5], "This is string1", 'r', 10);
	memccpy(buffer[6], "This is string1", '1', 15);
	ft_memccpy(buffer[7], "This is string1", '1', 15);
	memccpy(buffer[8], "This is string1", '1', 14);
	ft_memccpy(buffer[9], "This is string1", '1', 14);
	i = 0;
	while (i < 9)
	{
		if (strcmp(buffer[i], buffer[i + 1]) != 0)
		{
			printf("Fail! buffer[%d] = %s buffer[%d] = %s\n", i, buffer[i], i + 1, buffer[i + 1]);
			return ;
		}
		i += 2;
	}
	printf("Success!\n");
}

void	memchr_test(void)
{
	int		i;

	i = 31;
	while (++i < 256)
	{
		if (memchr("This is string1", i, 15) == NULL || ft_memchr("This is string1", i, 15) == NULL)
		{
			if ((memchr("This is string1", i, 15) == NULL && ft_memchr("This is string1", i, 15) != NULL) ||
				(memchr("This is string1", i, 15) != NULL && ft_memchr("This is string1", i, 15) == NULL))
			{
				printf("Fail! Memchar returns: %s, Ft_memchar returns: %s i = %d\n", memchr("This is string1", i, 15), ft_memchr("This is string1", i, 15), i);
				return ;
			}
		}
		else if (strcmp(memchr("This is string1", i, 15), ft_memchr("This is string1", i, 15)) != 0)
		{
			printf("Fail! strchr returns: %s ft_strchr returns: %s i = %d\n", memchr("This is string1", i, 15), ft_memchr("This is string1", i, 15), i);
			return ;
		}	
	}
	printf("Success!\n");
}

void	memcmp_test(void)
{
	char	**buffer;
	int		i;

	i = -1;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (++i < 10)
		buffer[i] = (char *)calloc(1, sizeof(char) * 16);
	strcpy(buffer[0], "This is string0");
	strcpy(buffer[1], "This is string0");
	strcpy(buffer[2], "This is string2");
	strcpy(buffer[3], "This is string22");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This is string5");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "is string7");
	strcpy(buffer[8], "This is string8test");
	strcpy(buffer[9], "This is string8test");
	i = 0;
	while (i < 9)
	{
		if (memcmp(buffer[i], buffer[i + 1], 15) != ft_memcmp(buffer[i], buffer[i + 1], 15))
		{
			printf("Fail! buffer[%d] = %s buffer[%d] = %s\n", i, buffer[i], i + 1, buffer[i + 1]);
			return ;
		}
		i += 2;
	}
	printf("Success!\n");
}

void	memcpy_test(void)
{
	char	buff[100];
	char	buff2[100];
	char	**buffer;
	int		i;

	i = -1;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (++i < 10)
		buffer[i] = (char *)calloc(1, sizeof(char) * 100);
	strcpy(buffer[0], "This is string0rrr");
	strcpy(buffer[1], "This is string0");
	strcpy(buffer[2], "This is string2");
	strcpy(buffer[3], "This is string22");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This is string5");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "is string7");
	strcpy(buffer[8], "This is string8test");
	strcpy(buffer[9], "This is string8test");
	i = -1;
	while (++i < 10)
	{
		ft_memset_test(buff, 100);
		ft_memset_test(buff2, 100);
		if (strcmp(memcpy(buff, buffer[i], strlen(buffer[i])), ft_memcpy(buff2, buffer[i], strlen(buffer[i]))) != 0)
		{
			printf("Fail! \nmemcpy = %s\nft_memcpy = %s\nbuffer = %s\n", memcpy(buff, buffer[i], strlen(buffer[i])), ft_memcpy(buff2, buffer[i], strlen(buffer[i])), buffer[i]);
			return ;
		}
	}
	printf("Success!\n");
}

void	memdel_test(void)
{
	char	**buffer;
	int		i;

	i = -1;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (++i < 10)
		buffer[i] = (char *)calloc(1, sizeof(char) * 100);
	strcpy(buffer[0], "This is string0rrr");
	strcpy(buffer[1], "This is string0");
	strcpy(buffer[2], "This is string2");
	strcpy(buffer[3], "This is string22");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This is string5");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "is string7");
	strcpy(buffer[8], "This is string8test");
	strcpy(buffer[9], "This is string8test");
	i = -1;
	while (++i < 10)
		ft_memdel((void *)&buffer[i]);
	while (--i >= 0)
		if (buffer[i] != NULL)
		{
			printf("Fail! Buffer[%d] = %s\n", i, buffer[i]);
			return ;
		}
	printf("Success!\n");
}

void	memmove_test(void)
{
	char	str1[100] = "This is test string!";
	char	str2[100] = "This is test string!";
	char	buffer[100];
	char	buffer1[100];

	memmove(&str1[20], &str1[6], 15);
	ft_memmove(&str2[20], &str2[6], 15);
	if (strcmp(str1, str2) != 0)
	{
		printf("Fail! Str1 = %s Str2 = %s\n", str1, str2);
		return ;
	}
	memmove(&str1[2], &str1[6], 10);
	ft_memmove(&str2[2], &str2[6], 10);
	if (strcmp(str1, str2) != 0)
	{
		printf("Fail! Str1 = %s Str2 = %s\n", str1, str2);
		return ;
	}
	memmove(&str1[0], &str1[28], 50);
	ft_memmove(&str2[0], &str2[28], 50);
	if (strcmp(str1, str2) != 0)
	{
		printf("Fail! Str1 = %s Str2 = %s\n", str1, str2);
		return ;
	}
	memmove(buffer, str1, 15);
	ft_memmove(buffer1, str2, 15);
	if (strcmp(str1, str2) != 0)
	{
		printf("Fail! Buffer = %s Buffer1 = %s\n", buffer, buffer1);
		return ;
	}
	printf("Success!\n");
}
void	memset_test(void)
{
	int		i;
	char	buffer1[20];
	char	buffer2[20];

	strcpy(buffer1, "This is test string");
	strcpy(buffer2, "This is test string");
	i = -1;
	while (++i < 1300)
	{
		memset(buffer1, i, strlen(buffer1));
		ft_memset(buffer2, i, strlen(buffer2));
		if (strcmp(buffer1, buffer2) != 0)
		{
			printf("Fail! memset = %s ft_memset = %s i = %d", buffer1, buffer2, i);
			return ;
		}
	}
	printf("Success!\n");
}

void	putchar_test(void)
{
	char	buffer[] = "Success!\n";
	int		i;

	i = 0;
	while (buffer[i] != '\0')
	{
		ft_putchar(buffer[i]);
		i++;
	}
}

void	putchar_fd_test(void)
{
	int		fd;
	char	buffer[1];

	fd = open("putchar_fd.txt", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
	{
		printf("Failed to creat a file! Check result is undefined\n");
		return ;
	}
	ft_putchar_fd('S', fd);
	close(fd);
	fd = open("putchar_fd.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Failed to open file! Check result is undefined.\n");
		return ;
	}
	read(fd, buffer, 1);
	if (buffer[0] == 'S')
		printf("Success!\n");
	else
		printf("Fail! File first byte is: %c. Check file 'putchar_fd.txt'\n", buffer[0]);
	close(fd);
}

void	putendl_test(void)
{
	ft_putendl("Success!");
}

void	putendl_fd_test(void)
{
	int		fd;
	char	buffer[10];

	fd = open("putendl_fd.txt", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
	{
		printf("Failed to creat a file! Check result is undefined\n");
		return ;
	}
	ft_putendl_fd("Success!", fd);
	close(fd);
	fd = open("putendl_fd.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Failed to open file! Check result is undefined.\n");
		return ;
	}
	read(fd, buffer, 10);
	if (strcmp(buffer, "Success!\n") == 0)
		printf("Success!\n");
	else
		printf("Fail! file first 10 bytes is: %s. check file 'putendl_fd.txt'\ncompare returns %d", buffer, strcmp(buffer, "success\n"));
	close(fd);
}

void	putnbr_test(void)
{
	ft_putstr("\nTEST1: -2147483648 ");
	ft_putnbr(-2147483648);
	ft_putstr("\nTEST2: 2147483647 ");
	ft_putnbr(2147483647);
	ft_putstr("\nTEST3: -2147 ");
	ft_putnbr(-2147);
	ft_putstr("\nTEST4: 0 ");
	ft_putnbr(0);
	ft_putstr("\nTEST5: 1232147 ");
	ft_putnbr(1232147);
	ft_putstr("\n");
}

void	putnbr_fd_test(void)
{
	int		fd;
	char	buffer[12];

	fd = open("putnbr_fd.txt", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
	{
		printf("Failed to creat a file! Check result is undefined\n");
		return ;
	}
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
	fd = open("putnbr_fd.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Failed to open file! Check result is undefined.\n");
		return ;
	}
	read(fd, buffer, 11);
	if (strcmp(buffer, "-2147483648") == 0)
		printf("Success!\n");
	else
		printf("Fail! File first 11 bytes is: %s. Check file 'putnbr_fd.txt'\ncompare returns %d", buffer, strcmp(buffer, "-2147483648"));
	close(fd);
}

void	putstr_test(void)
{
	ft_putstr("Success!\n");
}

void	putstr_fd_test(void)
{
	int		fd;
	char	buffer[9];

	fd = open("putstr_fd.txt", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
	{
		printf("Failed to creat a file! Check result is undefined\n");
		return ;
	}
	ft_putstr_fd("Success!", fd);
	close(fd);
	fd = open("putendl_fd.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Failed to open file! Check result is undefined.\n");
		return ;
	}
	read(fd, buffer, 8);
	if (strcmp(buffer, "Success!") == 0)
		printf("Success!\n");
	else
		printf("Fail! file first 8 bytes is: %s. check file 'putstr_fd.txt'\ncompare returns %d", buffer, strcmp(buffer, "success\n"));
	close(fd);
}

void	strcat_test(void)
{
	char	buffer1[100];
	char	buffer2[100];
	char	buffer[] = "And one more time, this is test string!";

	strcpy(buffer1, "This is test string! ");
	strcpy(buffer2, "This is test string! ");
	if (strcmp(strcat(buffer1, buffer), ft_strcat(buffer2, buffer)) != 0)
		printf("Fail! strcat = %s ft_strcat = %s\n", buffer1, buffer2);
	else
		printf("Success!\n");
}

void	strchr_test(void)
{
	int		i;
	char	buffer[] = "This is test string!";

	i = -1;
	while (++i < 2560)
	{
		if (strchr(buffer, i) == NULL || ft_strchr(buffer, i) == NULL)
		{
			if (!(strchr(buffer, i) == NULL && ft_strchr(buffer, i) == NULL))
			{
				printf("Fail! strchr = %s ft_strchr = %s i = %d\n", strchr(buffer, i), ft_strchr(buffer, i), i);
				return ;
			}
		}
		else if (strcmp(strchr(buffer, i), ft_strchr(buffer, i)) != 0)
		{
			printf("Fail! strchr = %s ft_strchr = %s i = %d\n", strchr(buffer, i), ft_strchr(buffer, i), i);
			return ;
		}
	}
	printf("Success!\n");
}

void	strclr_test(void)
{
	size_t	len;
	size_t	i;
	char	buffer[] = "This is test string!";

	i = 0;
	len = strlen(buffer);
	ft_strclr(buffer);
	while (i < len)
	{
		if (buffer[i] != '\0')
		{
			printf("Fail! Buffer[%zu] = %c\n", i, buffer[i]);
			return ;
		}
		i++;
	}
	printf("Success!\n");
}

void	strcmp_test(void)
{
	char	**buffer;
	int		i;

	i = -1;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (++i < 10)
		buffer[i] = (char *)calloc(1, sizeof(char) * 100);
	strcpy(buffer[0], "This is string0rrr");
	strcpy(buffer[1], "This is string0");
	strcpy(buffer[2], "This is string2");
	strcpy(buffer[3], "This is string22");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This is string5");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "is string7");
	strcpy(buffer[8], "This is string8test");
	strcpy(buffer[9], "This is string8test");
	i = -1;
	while (++i < 9)
	{
		if (strcmp(buffer[i], buffer[i + 1]) != ft_strcmp(buffer[i], buffer[i + 1]))
		{
			printf("Fail! strcmp = %d ft_strcmp = %d i = %d\n", strcmp(buffer[i], buffer[i + 1]), ft_strcmp(buffer[i], buffer[i + 1]), i);
			return ;
		}
	}
	printf("Success!\n");
}

void	strcpy_test(void)
{
	char	buffer1[25];
	char	buffer2[25];

	strcpy(buffer1, "This is test string!");
	ft_strcpy(buffer2, "This is test string!");
	if (strcmp(buffer1, buffer2) != 0)
	{
		printf("Fail! strcpy = %s, ft_strcpy = %s\n", buffer1, buffer2);
		return ;
	}
	strcpy(buffer1, "This");
	ft_strcpy(buffer2, "This");
	if (strcmp(buffer1, buffer2) != 0)
	{
		printf("Fail! strcpy = %s, ft_strcpy = %s\n", buffer1, buffer2);
		return ;
	}
	strcpy(buffer1, "Just one more test");
	ft_strcpy(buffer2, "Just one more test");
	if (strcmp(buffer1, buffer2) != 0)
	{
		printf("Fail! strcpy = %s, ft_strcpy = %s\n", buffer1, buffer2);
		return ;
	}
	printf("Success!\n");
}

void	strdel_test(void)
{
	char	**buffer;
	int		i;

	i = -1;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (++i < 10)
		buffer[i] = (char *)calloc(1, sizeof(char) * 100);
	strcpy(buffer[0], "This is string0rrr");
	strcpy(buffer[1], "This is string0");
	strcpy(buffer[2], "This is string2");
	strcpy(buffer[3], "This is string22");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This is string5");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "is string7");
	strcpy(buffer[8], "This is string8test");
	strcpy(buffer[9], "This is string8test");
	i = -1;
	while (++i < 10)
		ft_strdel(&buffer[i]);
	while (--i >= 0)
	{
		if (buffer[i] != NULL)
		{
			printf("Fail! Buffer[%d] = %s\n", i, buffer[i]);
			return ;
		}
	}
	printf("Success!\n");
}

void	strdup_test(void)
{
	char	*buffer;

	buffer = ft_strdup("This is test string!");
	if (strcmp(buffer, "This is test string!") != 0)
		printf("Fail! strdup = %s\n", buffer);
	else
		printf("Success!\n");
}

void	strequ_test(void)
{
	if (ft_strequ("This is test string", "This is test string") == 0)
		printf("Fail! Strings are 'This is test string' & 'This is test string'\n");
	else if (ft_strequ("This is test string1", "This is test string") == 1)
		printf("Fail! Strings are 'This is test string1' & 'This is test string'\n");
	else if (ft_strequ("This is test string1", "This is test strings") == 1)
		printf("Fail! Strings are 'This is test string1' & 'This is test strings'\n");
	else if (ft_strequ("\220This", "\220This") == 0)
		printf("Fail! Strings are '\220This' & '\220This'\n");
	else if (ft_strequ("\220This", "\222This") == 1)
		printf("Fail! Strings are '\220This' & '\222This'\n");
	else
		printf("Success!\n");
}

static void	iter_action(char *c)
{
	if (((int)c[0] % 2) != 0)
		c[0] += 1;
}

static void	iteri_action(unsigned int i, char *c)
{
	if (i % 2 != 0)
		c[0] +=2;
}


void	striter_test(void)
{
	char	*buffer;

	buffer = (char *)calloc(1, sizeof(char) * 100);
	strcpy(buffer, "abcdefghijklmnopqrstuvwxyz");
	ft_striter(buffer, &iter_action);
	if (strcmp(buffer, "bbddffhhjjllnnpprrttvvxxzz") != 0)
		printf("Fail! striter = %s\n", buffer);
	else
		printf("Success!\n");
	free(buffer);
}

void	striteri_test(void)
{
	char	*buffer;

	buffer = (char *)calloc(1, sizeof(char) * 100);
	strcpy(buffer, "abcdefghijklmnopqrstuvwxyz");
	ft_striteri(buffer, &iteri_action);
	if (strcmp(buffer, "adcfehgjilknmporqtsvuxwzy|") != 0)
		printf("Fail! striter = %s\n", buffer);
	else
		printf("Success!\n");
	free(buffer);
}

void	strjoin_test(void)
{
	if (strcmp(ft_strjoin("Test ", "Test"), "Test Test") != 0)
		printf("Fail! strjoin = %s\n", ft_strjoin("Test ", "Test"));
	else
		printf("Success!\n");
}

void	strlcat_test(void)
{
	char	**buffer;
	int		res1;
	int		res2;
	int		i;

	i = -1;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (++i < 10)
		buffer[i] = (char *)calloc(1, sizeof(char) * 26);
	strcpy(buffer[0], "This is string1");
	strcpy(buffer[1], "This is string1");
	strcpy(buffer[2], "This is string2abcdefghi");
	strcpy(buffer[3], "This is string2abcdefghi");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "This is ");
	strcpy(buffer[8], "test");
	strcpy(buffer[9], "test");

	res1 = strlcat(buffer[0], "This is string1", 25);
	res2 = ft_strlcat(buffer[1], "This is string1", 25);
	if (strcmp(buffer[0], buffer[1]) != 0 || res1 != res2)
	{
		printf("Fail! Strlcat = %d Ft_strlcat = %d, buffer0 = %s, buffer1 = %s\n", res1, res2, buffer[0], buffer[1]);
		return ;
	}
	res1 = strlcat(buffer[2], "This is string1", 20);
	res2 = ft_strlcat(buffer[3], "This is string1", 20);
	if (strcmp(buffer[2], buffer[3]) != 0 || res1 != res2)
	{
		printf("Fail! Strlcat = %d Ft_strlcat = %d, buffer2 = %s, buffer3 = %s\n", res1, res2, buffer[2], buffer[3]);
		return ;
	}
	res1 = strlcat(buffer[4], "This is string1", 30);
	res2 = ft_strlcat(buffer[5], "This is string1", 30);
	if (strcmp(buffer[4], buffer[5]) != 0 || res1 != res2)
	{
		printf("Fail! Strlcat = %d Ft_strlcat = %d, buffer4 = %s, buffer5 = %s\n", res1, res2, buffer[4], buffer[5]);
		return ;
	}
	res1 = strlcat(buffer[6], "This is string1", 26);
	res2 = ft_strlcat(buffer[7], "This is string1", 26);
	if (strcmp(buffer[6], buffer[7]) != 0 || res1 != res2)
	{
		printf("Fail! Strlcat = %d Ft_strlcat = %d, buffer6 = %s, buffer7 = %s\n", res1, res2, buffer[6], buffer[7]);
		return ;
	}
	res1 = strlcat(buffer[8], "This is string1", 0);
	res2 = ft_strlcat(buffer[9], "This is string1", 0);
	if (strcmp(buffer[8], buffer[9]) != 0 || res1 != res2)
	{
		printf("Fail! Strlcat = %d Ft_strlcat = %d, buffer8 = %s, buffer9 = %s\n", res1, res2, buffer[8], buffer[9]);
		return ;
	}
	printf("Success!\n");
}

void	strlen_test(void)
{
	if (strlen("This is test string!") != ft_strlen("This is test string!"))
		printf("Fail! strlen = %zu, ft_strlen = %zu\n", strlen("This is test string!"), ft_strlen("This is test string!"));
	else if (strlen("This") != ft_strlen("This"))
		printf("Fail! strlen = %zu, ft_strlen = %zu\n", strlen("This"), ft_strlen("This"));
	else if (strlen("") != ft_strlen(""))
		printf("Fail! strlen = %zu, ft_strlen = %zu\n", strlen(""), ft_strlen(""));
	else if (strlen(" \t\022") != ft_strlen(" \t\220"))
		printf("Fail! strlen = %zu, ft_strlen = %zu\n", strlen(" \t\022"), ft_strlen(" \t\022"));
	else
		printf("Success!\n");
}

static char	map_action(char c)
{
	c += 1;
	return (c);
}

static char	mapi_action(unsigned int i, char c)
{
	if (i % 2 == 0)
		c += 1;
	return (c);
}

void	strmap_test(void)
{
	char	buffer[] = "abcdefghijklmnopqrstuvwxyz";

	if (strcmp(ft_strmap(buffer, &map_action), "bcdefghijklmnopqrstuvwxyz{") != 0 ||
			ft_strmap(NULL, &map_action) != NULL || ft_strmap(buffer, NULL) != NULL || ft_strmap(NULL, NULL) != NULL)
		printf("Fail! strmap = %s buffer = %s\n", ft_strmap(buffer, &map_action), buffer);
	else
		printf("Success!\n");
}

void	strmapi_test(void)
{
	char	buffer[] = "abcdefghijklmnopqrstuvwxyz";

	if (strcmp(ft_strmapi(buffer, &mapi_action), "bbddffhhjjllnnpprrttvvxxzz") != 0 ||
			ft_strmapi(NULL, &mapi_action) != NULL || ft_strmapi(buffer, NULL) != NULL || ft_strmapi(NULL, NULL) != NULL)
		printf("Fail! strmap = %s buffer = %s\n", ft_strmapi(buffer, &mapi_action), buffer);
	else
		printf("Success!\n");
}

void	strncat_test(void)
{
	char	**buffer;
	size_t	i;

	i = 0;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (i < 10)
	{
		buffer[i] = (char *)calloc(1, sizeof(char) * 26);
		i++;
	}
	strcpy(buffer[0], "This is string1");
	strcpy(buffer[1], "This is string1");
	strcpy(buffer[2], "");
	strcpy(buffer[3], "");
	strcpy(buffer[4], "This is");
	strcpy(buffer[5], "This is");
	strcpy(buffer[6], "abcdefghijklmnopqrstuvwxyz");
	strcpy(buffer[7], "abcdefghijklmnopqrstuvwxyz");
	strcpy(buffer[8], "		");
	strcpy(buffer[9], "		");
	i = 0;
	while (i < 9)
	{
		if (strcmp(strncat(buffer[i], "TEST", i), ft_strncat(buffer[i + 1], "TEST", i)) != 0)
		{
			printf("Fail! strncat = %s ft_strncat = %s\n", strncat(buffer[i], "TEST", i), ft_strncat(buffer[i + 1], "TEST", i));
			return ;
		}
		i += 2;
	}
	printf("Success!\n");
}

void	strncmp_test(void)
{
	char	**buffer;
	int		i;

	i = 0;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (i < 10)
	{
		buffer[i] = (char *)calloc(1, sizeof(char) * 100);
		i++;
	}
	strcpy(buffer[0], "This is string0rrr");
	strcpy(buffer[1], "This is string0");
	strcpy(buffer[2], "This is string2");
	strcpy(buffer[3], "This is string22");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This is string5");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "is string7");
	strcpy(buffer[8], "This is string8test");
	strcpy(buffer[9], "This is string8test");
	i = 0;
	while (i < 9)
	{
		if (strncmp(buffer[i], buffer[i + 1], i + 10) != ft_strncmp(buffer[i], buffer[i + 1], i + 10))
		{
			printf("Fail! strcmp = %d ft_strcmp = %d i = %d\n", strncmp(buffer[i], buffer[i + 1], i + 10), ft_strncmp(buffer[i], buffer[i + 1], i + 10), i);
			return ;
		}
		i++;
	}
	printf("Success!\n");
}

void	strncpy_test(void)
{
	char	*buffer1;
	char	*buffer2;

	buffer1 = (char *)calloc(1, sizeof(char) * 26);
	buffer2 = (char *)calloc(1, sizeof(char) * 26);
	strncpy(buffer1, "This is test string!", 25);
	ft_strncpy(buffer2, "This is test string!", 25);
	if (strcmp(buffer1, buffer2) != 0)
	{
		printf("Fail! Strncpy = %s, Ft_strncpy = %s\n", buffer1, buffer2);
		return ;
	}
	strncpy(buffer1, "This", 2);
	ft_strncpy(buffer2, "This", 2);
	if (strcmp(buffer1, buffer2) != 0)
	{
		printf("Fail! strncpy = %s, ft_strncpy = %s\n", buffer1, buffer2);
		return ;
	}
	strncpy(buffer1, "Just one more test", 0);
	ft_strncpy(buffer2, "Just one more test", 0);
	if (strcmp(buffer1, buffer2) != 0)
	{
		printf("Fail! strncpy = %s, ft_strncpy = %s\n", buffer1, buffer2);
		return ;
	}
	printf("Success!\n");
}

void	strnequ_test(void)
{
	if (ft_strnequ("This is test string", "This is test string", 19) == 0)
		printf("Fail! Strings are 'This is test string' & 'This is test string' len = 19\n");
	else if (ft_strnequ("This is test string1", "This is test string", 20) == 1)
		printf("Fail! Strings are 'This is test string1' & 'This is test string' len = 20\n");
	else if (ft_strnequ("This is test string1", "This is test strings", 19) == 0)
		printf("Fail! Strings are 'This is test string1' & 'This is test strings' len = 19\n");
	else if (ft_strnequ("\220This", "\220This", 3) == 0)
		printf("Fail! Strings are '\220This' & '\220This' len = 3\n");
	else if (ft_strnequ("\220This", "\222This", 5) == 1)
		printf("Fail! Strings are '\220This' & '\222This' len = 5\n");
	else
		printf("Success!\n");
}

void	strnew_test(void)
{
	char	*buffer;

	buffer = ft_strnew(100);
    strcpy(buffer, "This is test string");
    if (buffer == NULL || strcmp(buffer, "This is test string") != 0)
		printf("Fail! buffer = %s strnew = %s\n", buffer, ft_strnew(0));
	else
		printf("Success!\n");
}

void	strnstr_test(void)
{
	char	buffer[] = "This is test string";

	if (strnstr(buffer, "is", 19) != ft_strnstr(buffer, "is", 19) && strcmp(strnstr(buffer, "is", 19), ft_strnstr(buffer, "is", 19)) != 0)
	   printf("Fail! strnstr = %s ft_strnstr = %s len = 19\n", strnstr(buffer, "is", 19), ft_strnstr(buffer, "is", 19));
	else if (strnstr(buffer, "is", 19) != ft_strnstr(buffer, "is", 19) && strcmp(strnstr(buffer, "test", 12), ft_strnstr(buffer, "test", 12)) != 0)
	   printf("Fail! strnstr = %s ft_strnstr = %s len = 12\n", strnstr(buffer, "test", 12), ft_strnstr(buffer, "test", 12));
	else if (strnstr(buffer, "is", 19) != ft_strnstr(buffer, "is", 19) && strcmp(strnstr(buffer, "test", 11), ft_strnstr(buffer, "test", 11)) != 0)
		printf("Fail! strnstr = %s ft_strnstr = %s len = 11\n", strnstr(buffer, "test", 11), ft_strnstr(buffer, "test", 11));
	else if (strnstr(buffer, "is", 19) != ft_strnstr(buffer, "is", 19) && strcmp(strnstr(buffer, "This is test strin1", 18), ft_strnstr(buffer, "This is test strin1", 18)) != 0)
	   printf("Fail! strnstr = %s ft_strnstr = %s len = 18\n", strnstr(buffer, "This is test strin1", 18), ft_strnstr(buffer, "This is test strin1", 18));
	else if (strnstr(buffer, "is", 19) != ft_strnstr(buffer, "is", 19) && strcmp(strnstr(buffer, "This is test strin1", 19), ft_strnstr(buffer, "This is test strin1", 19)) != 0)
	   printf("Fail! strnstr = %s ft_strnstr = %s len = 19\n", strnstr(buffer, "This is test strin1", 19), ft_strnstr(buffer, "This is test strin1", 19));
	else if (strnstr(buffer, "is", 19) != ft_strnstr(buffer, "is", 19) && strcmp(strnstr(buffer, "", 20), ft_strnstr(buffer, "", 20)) != 0)
		printf("Fail! strnstr = %s ft_strnstr = %s len = 20\n", strnstr(buffer, "", 20), ft_strnstr(buffer, "", 20));
	else
		printf("Success!\n");
}

void	strrchr_test(void)
{
	int		i;
	char	buffer[] = "This is test string";

	i = -100;
	while (++i < 2300)
		if (strrchr(buffer, i) != ft_strrchr(buffer, i) && strcmp(strrchr(buffer, i), ft_strrchr(buffer, i)) != 0)
		{
			printf("Fail! strrch = %s ft_strrchr = %s i = %d\n", strchr(buffer, i), ft_strchr(buffer, i), i);
			return ;
		}
	printf("Success!\n");
}

void	strsplit_test(void)
{
	char	**buffer;
	int		i;

	i = 0;
	buffer = ft_strsplit("***This*is***test******string*******", '*');
	if (buffer != NULL && strcmp(buffer[0], "This") != 0)
	{
		printf("Fail! buffer0 = %s\n", buffer[0]);
		return ;
	}
	else if (buffer != NULL && strcmp(buffer[1], "is") != 0)
	{
		printf("Fail! buffer1 = %s\n", buffer[1]);
		return ;
	}
	else if (buffer != NULL && strcmp(buffer[2], "test") != 0)
	{
		printf("Fail! buffer2 = %s\n", buffer[2]);
		return ;
	}
	else if (buffer != NULL && strcmp(buffer[3], "string") != 0)
	{
		printf("Fail! buffer3 = %s\n", buffer[3]);
		return ;
	}
	else if (buffer[4] != 0)
	{
		printf("Fail! buffer4 = %s\n", buffer[4]);
		return ;
	}
	else if (ft_strsplit("**********", '*')[0] != NULL)
	{
		printf("Fail! Strsplit = %s String = '**********'\n", ft_strsplit("**********", '*')[0]);
		return ;
	}
	else
		printf("Success!\n");
}

void	strstr_test(void)
{
	char	**buffer;
	int		i;

	i = 0;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buffer[10] = NULL;
	while (i < 10)
	{
		buffer[i] = (char *)calloc(1, sizeof(char) * 100);
		i++;
	}
	strcpy(buffer[0], "This is string0rrr");
	strcpy(buffer[1], "This is string0");
	strcpy(buffer[2], "This is string2");
	strcpy(buffer[3], "This is string22");
	strcpy(buffer[4], "This");
	strcpy(buffer[5], "This is string5");
	strcpy(buffer[6], "This is ");
	strcpy(buffer[7], "is string7");
	strcpy(buffer[8], "This is string8test");
	strcpy(buffer[9], "This is string8test");
	i = -1;
	while (++i < 9)
	{
		if ((strstr(buffer[i], buffer[i + 1]) == NULL && ft_strstr(buffer[i], buffer[i + 1]) != NULL) ||
				(strstr(buffer[i], buffer[i + 1]) != NULL && ft_strstr(buffer[i], buffer[i + 1]) == NULL))
		{
			printf("Fail! strstr = %s ftstrstr = %s i = %d\n", strstr(buffer[i], buffer[i + 1]), ft_strstr(buffer[i], buffer[i + 1]), i);
			return ;
		}
		else if ((strstr(buffer[i], buffer[i + 1]) != NULL && ft_strstr(buffer[i], buffer[i + 1]) != NULL) &&
		strcmp(strstr(buffer[i], buffer[i + 1]), ft_strstr(buffer[i], buffer[i + 1])) != 0)
		{
			printf("Fail! strstr = %s ft_strstr = %s i = %d\n", strstr(buffer[i], buffer[i + 1]), ft_strstr(buffer[i], buffer[i + 1]), i);
			return ;
		}
	}
	printf("Success!\n");
}

void	strsub_test(void)
{
	char			**buffer;
	char			*buff;
	char			string[] = "This is fucking test string!";
	unsigned int	i;
	char			*ptr;

	i = 0;
	buffer = (char **)malloc(sizeof(char *) * 11);
	buff = (char *)calloc(1, sizeof(char) * 11);
	ptr = &string[0];
	buffer[10] = NULL;
	while (i < 10)
	{
		buff = strncpy(buff, ptr, 10);
		buffer[i] = ft_strsub(string, i, 10);
		if (buffer[i] != NULL && strcmp(buffer[i], buff) != 0)
		{
			printf("Fail! strsub = %s i = %u len = 10\n", buffer[i], i);
			return ;
		}
		ptr += 1;
		i++;
	}
	printf("Success!\n");
}

void	strtrim_test(void)
{
	char	*buffer;

	buffer = ft_strtrim("  \t\t\t\n\n\t   \t\nThis is test string!  \t\t\t\n\n\t   \t\n  ");
	if (strcmp(buffer, "This is test string!") != 0)
		printf("Fail! buffer = %s\n", buffer);
	else
		printf("Success!\n");
}

void	tolower_test(void)
{
	int		i;

	i = -1001;
	while (++i < 3000)
	{
		if (tolower(i) != ft_tolower(i))
		{
			printf("Fail! tolower = %d ft_tolower = %d i = %d\n", tolower(i), ft_tolower(i), i);
			return ;
		}
	}
	printf("Success!\n");
}

void	toupper_test(void)
{
	int i = -1000;
	while (++i < 1000)
		if (toupper(i) != ft_toupper(i))
			printf("     Fail! ft_toupper(%c): %c toupper(%c):    %c\n", i, isdigit(i), i, ft_isdigit(i));
}

int		main(void)
{
	/*printf("ATOI TESTING...\n");
	atoi_test();
	printf("BZERO TESTING...\n");
	bzero_test();
	printf("ISALNUM TESTING...\n");
	isalnum_test();
	printf("ISALPHA TESTING...\n");
	isalpha_test();
	printf("ISASCII TESTING...\n");
	isascii_test();
	printf("ISDIGIT TESTING...\n");
	isdigit_test();
	printf("ISPRINT TESTING...\n");
	isprint_test();
	printf("ITOA TESTING...\n");
	itoa_test();
	printf("LSTADD TESTING...\n");
	lstadd_test();*/
	printf("LSTDEL TESTING...\n");
	lstdel_test();
	system("leaks a.out");
	/*printf("LSTDELONE TESTING...\n");
	lstdelone_test();
	printf("LSTITER TESTING...\n");
	lstiter_test();
	printf("LSTMAP TESTING...\n");
	lstmap_test();
	printf("LSTNEW TESTING...\n");
	lstnew_test();
	printf("MEMALLOC TESTING...\n");
	memalloc_test();
	printf("MEMCCPY TESTING...\n");
	memccpy_test();
	printf("MEMCHR TESTING...\n");
	memchr_test();
	printf("MEMCMP TESTING...\n");
	memcmp_test();
	printf("MEMCPY TESTING...\n");
	memcpy_test();
	printf("MEMDEL TESTING...\n");
	memdel_test();
	printf("MEMMOVE TESTING...\n");
	memmove_test();
	printf("MEMSET TESTING...\n");
	memset_test();
	ft_putstr("PUTHCAR TESTING...\n");
	putchar_test();
	printf("PUTCHAR_FD TESTING...\n");
	putchar_fd_test();
	ft_putstr("PUTENDL TESTING...\n");
	putendl_test();
	printf("PUTENDl_FD TESTING...\n");
	putendl_fd_test();
	ft_putstr("PUTNBR TESTING (Manually)...\n");
	putnbr_test();
	printf("PUTNBR_FD TESTING...\n");
	putnbr_fd_test();
	ft_putstr("PUTSTR TESTING...\n");
	putstr_test();
	printf("PUTSTR_FD TESTING...\n");
	putstr_fd_test();
	printf("STRCAT TESTING...\n");
	strcat_test();
	printf("STRCHR TESTING...\n");
	strchr_test();
	printf("STRCLR TESTING...\n");
	strclr_test();
	printf("STRCMP TESTING...\n");
	strcmp_test();
	printf("STRCPY TESTING...\n ");
	strcpy_test();
	printf("STRDEL TESTING...\n");
	strdel_test();
	printf("STRDUP TESTING...\n");
	strdup_test();
	printf("STREQU TESTING...\n");
	strequ_test();
	printf("STRITER TESTING...\n");
	striter_test();
	printf("STRITERI TESTING...\n");
	striteri_test();
	printf("STRJOIN TESTING...\n");
	strjoin_test();
	printf("STRLCAT TESTING...\n");
	strlcat_test();
	printf("STRLEN TESTING...\n");
	strlen_test();
	printf("STRMAP TESTING...\n");
	strmap_test();
	printf("STRMAPI TESTING...\n");
	strmapi_test();
	printf("STRNCAT TESTING...\n");
	strncat_test();
	printf("STRNCMP TESTING...\n");
	strncmp_test();
	printf("STRNCPY TESTING...\n");
	strncpy_test();
	printf("STRNEQU TESTING...\n");
	strnequ_test();
	printf("STRNEW TESTING...\n");
	strnew_test();
	printf("STRNSTR TESTING...\n");
	strnstr_test();
	printf("STRRCHR TESTING...\n");
	strrchr_test();
	printf("STRSPLIT TESTING...\n");
	strsplit_test();
	printf("STRSTR TESTING...\n");
	strstr_test();
	printf("STRSUB TESTING...\n");
	strsub_test();
	printf("STRTRIM TESTING...\n");
	strtrim_test();
	printf("TOLOWER TESTING...\n");
	tolower_test();
	printf("TOUPPER TESTING...\n");
	toupper_test();*/
	return (1);
}
