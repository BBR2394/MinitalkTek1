/*
** stress_test.c for "tp minitalk part3.1" in /home/bertra_l//minitalk/tpminitalk
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Mar 18 16:09:47 2013 baptiste bertrand-rapello
** Last update Mon Mar 18 16:55:02 2013 baptiste bertrand-rapello
*/

#include <sys/types.h>
#include <signal.h>

int	my_send(int ac, char **av, pid_t pid)
{
  int	c;

  c = 0;
  write(1, ":-)\n", 4);

  while (c < 100)
    {
      kill(pid, SIGUSR1);
      usleep(100000);
      c++;
    }
}

int	main(int ac, char **av)
{
  pid_t	pid;

  pid = atoi(av[1]);

  my_send(ac, av, pid);

  write(1, "c'est envoye\n", 13);
}
