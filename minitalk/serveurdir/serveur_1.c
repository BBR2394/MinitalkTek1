/*
** serveur_1.c for  in /home/bertra_l//minitalk/minitalk/serveurdir
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 20 17:52:39 2013 baptiste bertrand-rapello
** Last update Fri Mar 22 18:03:04 2013 baptiste bertrand-rapello
*/

#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_put_nbr(int c)
{
  char  nb;
  int   uni;
  int   stop;

  stop = 0;
  uni = 1000000000;
  if (c < 0)
    {
      write(1, "-", 1);
      c = c * -1;
    }
  while (uni >= 1)
    {
      nb = (c / uni) + 48;
      c = c % uni;
      uni = uni / 10;

      if (nb != '0')
        stop = 1;
      if (stop != 0)
        my_putchar(nb);
    }
}


int     my_pow(int nb, int puis)
{
  int   res;

  res = nb;
  if (puis == 0)
    return (1);
  else if (puis == 1)
    return (res);

  while (puis > 1)
    {
      res = nb * res;
      puis--;
    }
  return (res);
}

int     b_d(int *tab)
{
  int   pui;
  int   res;
  int   c;

  c = 7;
  pui = 0;
  res = 0;

  while (c >=0)
    {
      if (tab[c] == 1)
        res = my_pow(2, pui) + res;
      pui++;
      c--;;
    }
  return (res);
}

