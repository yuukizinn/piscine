/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:47:27 by aokubo            #+#    #+#             */
/*   Updated: 2021/09/19 18:21:59 by tmasaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>

typedef struct s_dict
{
	char	*index;
	char	*word;
}	t_dict;

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			**split_thousand(char *str);
int				ft_isspace(char c);
char			*fileopen(int argc, char **argv);
char			*put_dict_word(char *buf, t_dict *dict);
char			*put_dict_index(char *buf, t_dict *dict);
int				count_dictsize(char *buf);
t_dict			*dict_init(char *buf);
int				ft_strcmp(char *s1, char *s2);
void			ft_putstr(char *str);
char			*find_dict_1000_while(t_dict *dict, char *str);
char			*find_dict_1000(int digit, t_dict *dict);
char			*find_dict_10(char c, t_dict *dict);
char			*find_dict_20up(char c, t_dict *dict);
char			*find_dict_100(t_dict *dict);
char			*find_dict_1(char c, t_dict *dict);
int				print_number(char *num, int digit, t_dict *dict);
int				cheack_dict(char *num, int digit, t_dict *dict);
int				num_len(char *str, int i);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				cheack_dict_2(char *num, int digit, t_dict *dict);
char			**split_thousand_2(char *str);
void			free_num_dict(char **num, t_dict *dict);
char			*filesize_check(char *buf, int fd, int argc, char *argv);
int				skip_space(char *buf);
void			free_num(char **num);
void			free_dict(t_dict *dict);
char			**split_thousand_3(char **num, int j);
char			*put_dict_index_0(int g_k, t_dict *dict);
void			put_dict_index_while(char *buf, t_dict *dict);
int				main_argc(int argc);
char			*main_fileopen(int argc, char **argv);
t_dict			*main_dict_init(char *buf);
char			**main_sp_thousand(t_dict *dict, char **argv, int argc);
int				main_check_dict(char **num, t_dict *dict, int digit);
int				main_print_number(char **num, t_dict *dict, int digit);

#endif
