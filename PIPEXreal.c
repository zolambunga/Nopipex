/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PIPEXreal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:06:33 by zombunga          #+#    #+#             */
/*   Updated: 2024/09/13 09:10:01 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/wait.h>
#include "Libft/libft.h"

void	error(const char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

void	execute(const char *cmd)
{
	char	*path;
	char	**command;

	command = ft_split(cmd, ' ');
	if (command == NULL || command[0] == NULL)
		error("\033[31mft_split failed miserably!\033[0m");
	path = ft_strjoin("/bin/", command[0]);
	if (path == NULL)
		error("\033[31mft_strjoin failed miserably!\033[0m");
	if (execve(path, command, NULL) < 0)
		error("\033[31mExecve failed!!\033[0m");
}

void	child_process(const char *cmd, const char *file, int *fd)
{
	int	file_fd;

	file_fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_fd < 0)
		error("\033[31mUnable to open file\033[0m");
	if (dup2(fd[0], STDIN_FILENO) < 0 || dup2(file_fd, STDOUT_FILENO) < 0)
		error("\033[31mDup2 son failed!\033[0m");
	close (file_fd);
	close (fd[1]);
	close (fd[0]);
	execute(cmd);
}

void	parent_process(const char *file, const char *cmd, int *fd)
{
	int	file_fd;

	file_fd = open(file, O_RDONLY, 0644);
	if (file_fd < 0)
		error("\033[31mUnable to open file\033[0m");
	if (dup2(fd[1], STDOUT_FILENO) < 0 || dup2(file_fd, STDIN_FILENO) < 0)
		error("\033[31mDup2 failed!\003[0m");
	close(file_fd);
	close(fd[0]);
	close(fd[1]);
	execute(cmd);
}

int	main(int ac, char **av)
{
	int		fd[2];
	pid_t	pid;

	if (ac == 5)
	{
		if (pipe(fd) < 0)
			error("\033[31mPipe failed!\033[0m");
		pid = fork();
		if (pid < 0)
			error("\033[31mFork failed!\033[0m");
		if (pid == 0)
			child_process(av[3], av[4], fd);
		else
		{
			waitpid(pid, NULL, 0);
			parent_process(av[1], av[2], fd);
		}
	}
	return (EXIT_SUCCESS);
}
