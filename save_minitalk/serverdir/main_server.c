/*
** main_serveur.c for  in /home/bertra_l//minitalk/minitalk
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Mar 19 10:35:20 2013 baptiste bertrand-rapello
** Last update Sun Mar 24 16:09:31 2013 baptiste bertrand-rapello
*/

#include	<signal.h>
#include	<sys/types.h>
#include	<unistd.h>
#include	"serveur.h"

int	c_glo;

int	affi(int sig)
{
  c_glo = 0;
  return (0);
}

int	affi2(int sig)
{
  c_glo = 1;
  return (1);
}

int	traitement()
{
  char	car;
  int	char_int;
  int	d;
  int	tab[8];

  char_int = 1;
  d = 0;
  while (char_int != 0)
    {
      char_int = 0;
      while (d <= 7)
        {
          pause();
          tab[d] = c_glo;
          d++;
        }
      d = 0;
      char_int = b_d(tab);
      car = char_int;
      my_putchar(car);
    }
}

int	main(int ac, char **av)
{
  pid_t	pid;

  pid = getpid();
  write(1, "pid = ", 6);
  my_put_nbr(pid);
  write(1, "\n", 1);
  signal(SIGUSR1, &affi);
  signal(SIGUSR2, &affi2);
  traitement();
}
