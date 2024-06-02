/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:16:57 by agallon           #+#    #+#             */
/*   Updated: 2024/04/09 23:07:19 by agallon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PIPEX_H
# define PIPEX_H
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>		// open
# include <errno.h>
# include <signal.h>
# include <string.h>

# include "colors.h"
# include "libft.h"

typedef struct s_pip {
    int num_cmd;
    int (*fd)[2];
    pid_t   *pid;
	int		fd1;
	int		fd2;
    char **path;
}   t_pip;



void    free_tab(char **tab);
void    free_tab_i(int (*tab)[2], int size);
char	**parse_path(char **env);
int	ini_pip(t_pip *pip, int ac, char **av, char **env);
void	exit_all(t_pip *pip, int exit_code);

#endif
