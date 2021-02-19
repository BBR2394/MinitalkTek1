/*
** my_signal.c for "tp minitalk part 2" in /home/bertra_l//minitalk/tpminitalk
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Mar 15 16:49:26 2013 baptiste bertrand-rapello
** Last update Fri Mar 15 18:51:15 2013 baptiste bertrand-rapello
*/

// sighandler_t signal(int signum, sighandler_t handler);
#include <signal.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	affi(int sig)
{
  write(1, "bonjour", 7);
}

int	my_signal(int ac, char **av)
{

  signal(SIGINT, affi);
  while (1);
}

int	main(int ac, char **av)
{
  my_signal(ac, av);
}
