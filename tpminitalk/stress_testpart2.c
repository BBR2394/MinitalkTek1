/*
** stress_testpart2.c for "tp minitalk part3.2" in /home/bertra_l//minitalk/tpminitalk
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Mar 18 16:15:36 2013 baptiste bertrand-rapello
** Last update Mon Mar 18 16:56:28 2013 baptiste bertrand-rapello
*/

#include <signal.h>
#include <stdio.h>

int	affi(int sig)
{
  static char c = 'A';
  c++;
  write(1, &c, 1);

}

int	main()
{
  int	c;

  c = 0;

  signal(SIGUSR1, affi);

  while (1)
    c++;

}
