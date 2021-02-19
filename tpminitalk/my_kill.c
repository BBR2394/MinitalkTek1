/*
** my_kill.c for "tp du minitalk" in /home/bertra_l//minitalk/tpminitalk
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Mar 15 16:35:23 2013 baptiste bertrand-rapello
** Last update Tue Mar 19 17:37:24 2013 baptiste bertrand-rapello
*/

#include <sys/types.h>
#include <signal.h>

int	my_kill(int ac, char **av, int pid)
{
  kill( pid, SIGKILL);
}

int	main(int ac, char **av)
{
  pid_t	pid;

  pid = atoi(av[1]);

  my_kill(ac, av, pid);

}
