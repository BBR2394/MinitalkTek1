/*
** main_client.c for  in /home/bertra_l//minitalk/minitalk
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Mar 19 10:50:17 2013 baptiste bertrand-rapello
** Last update Sun Mar 24 15:29:46 2013 baptiste bertrand-rapello
*/

#include	<sys/types.h>
#include	<signal.h>
#include	"client.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	c;

  c = 0;

  while (str[c] != '\0')
    {
      my_putchar(str[c]);
      c++;
    }
}

int	traitement(char **av, pid_t pid)
{
  int	*tab;
  int	c;
  int	d;
  int	nb;

  c = 0;
  while (av[2][c] != '\0')
    {
      nb = av[2][c];
      tab = convert_binaire(nb);
      d = 0;
      while (d <= 7)
        {
          if (tab[d] == 0)
	    kill(pid, SIGUSR1);
          else if (tab[d] == 1)
	    kill(pid, SIGUSR2);
          usleep(1000);
          d++;
        }
      c++;
    }
}

int	main(int ac, char **av)
{
  pid_t	pid;

  if (ac < 3)
    {
      my_putstr("usage : ./client [pid's server]");
      my_putstr(" [string of character to send]\n");
      return (-1);
    }
  pid = my_getnbr(av[1]);
  if (pid <= 1)
    {
      my_putstr("bad PID\n");
      my_putstr("it must be bigger or equal than 2\n");
      return (-1);
    }
  traitement(av, pid);
}
