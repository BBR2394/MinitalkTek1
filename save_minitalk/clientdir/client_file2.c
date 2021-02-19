/*
** client_1.c for  in /home/bertra_l//minitalk/minitalk/clientdir
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 20 17:30:07 2013 baptiste bertrand-rapello
** Last update Sun Mar 24 15:31:34 2013 baptiste bertrand-rapello
*/

#include	<sys/types.h>
#include	<signal.h>
#include	<stdlib.h>

int	*my_malloc_int(int *tab, int nb)
{
  tab = malloc(nb * sizeof(int));
  if (tab == 0)
    {
      write(1, "problem with malloc\n", 20);
      exit (36);
    }
  return (tab);
}

int	my_getnbr(char  *str)
{
  int	nb;
  int	t;
  int	nbsave;

  nb = 0;
  t = 0;
  nbsave = 0;
  while (str[t] != '\0')
    {
      if (str[t] >= '0' && str[t] <= '9')
        {
          nb = str[t] - 48;
          nbsave = nbsave + nb;
          nbsave = nbsave * 10;
        }
      t++;
      if (str[t] > '9' || str[t] < '0')
        {
          nb = nbsave / 10;
          return(nb);
        }
    }
  nb = nbsave / 10;
  return(nb);
}

int	*convert_binaire(char c)
{
  int	reste;
  int	nb;
  int	car;
  int	*tab;
  int	d;

  d = 7;
  car = c;
  tab = my_malloc_int(tab, 8);
  while (car > 0)
    {
      reste = car % 2;
      nb = car / 2;
      tab[d] = reste;
      car = nb;
      d--;
    }
  while (d >= 0)
    {
      tab[d] = 0;
      d--;
    }
  return (tab);
}
