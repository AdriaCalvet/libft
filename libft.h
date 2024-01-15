/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:08:15 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/09 17:08:28 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT
# define LIBFT

/* typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
 */
//Parte 1
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *s);
void *ft_memset(void *b, int c, int len);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, int n);



//Parte 2


//Funciones bonus
#endif