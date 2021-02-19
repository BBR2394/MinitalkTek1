/*
** serveur_1.c for  in /home/bertra_l//minitalk/minitalk/serveurdir
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 20 17:52:39 2013 baptiste bertrand-rapello
** Last update Wed Mar 20 18:08:32 2013 baptiste bertrand-rapello
*/

#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_put_nbr(int  nb)
{
  int   nb2;
  char  res;
  int   stock;
  int   nega;

  nb2 = 1000000000;
  nega = 0;

  if (nb == 0)
    {
      my_putchar('0');
      my_putchar('\n');
      return (0);
    }
  if (nb < 0)
    {
      nb = nb * (-1);
      nega = 1;
    }

  while (nb / nb2 == 0 && nb != 0)
    {
      nb2 = nb2 / 10;
    }
  if (nega == 1)
    my_putchar('-');

  while (nb2 >= 1)
    {
      stock = nb / nb2;
      nb = nb % nb2;
      res = stock + 48;
      my_putchar(res);
      nb2 = nb2 / 10;
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

