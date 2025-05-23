/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:25:48 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/21 14:37:54 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>



int ft_strln(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int ft_error(char str)
{
    return (write(2, str, ft_strlen(str)), 1);
}
int ft_cd(char **av, int i)
{
    if(i != 2)
        return ft_error("err");
    if(chdir(av[1]) == -1)
        return(ft_error("err"));
    return 0;
}

int exec(char **av, char **env, int i)
{
    pid_t pid;
    int fd[2];
    int pflag;

    pflag = 0;
    if(av[i] && !strcmp(av[i], "|"))
        pflag = 1;
    if(pipe(fd) == -1)
        exit(ft_error("err"));
    pid = fork();
    if(pid == -1)
        exit(ft_error("err"));
    if(pid == 0)
    {
        av[i] = NULL;
        if(pflag && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
            exit(ft_error("err"));
        execve(av[0], av, env);
        return(ft_error("err"));
    }
    waitpid(pid, NULL, 0);
    if(pflag && (dup2(fd[0], 0) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
        exit(ft_error("err"));
    return 0;
}

int main(int ac, char **av, char **env)
{
    int i = 0;
    if(ac >=2)
    {
        while(av[i] && av[i+1])
        {
            av += i +1;
            i = 0;
            while(av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
                i++;
            if(!strcmp(av[0], "cd"))
                ft_cd(av, i);
            else if (i)
                exec(av, env, i);
        }
    }
}