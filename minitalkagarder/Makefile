##
## Makefile for  in /home/bertra_l//minitalk/minitalk
## 
## Made by baptiste bertrand-rapello
## Login   <bertra_l@epitech.net>
## 
## Started on  Fri Mar 22 14:53:04 2013 baptiste bertrand-rapello
## Last update Fri Mar 22 17:07:23 2013 baptiste bertrand-rapello
##

SRC1 =	clientdir/main_client.c \
	clientdir/client_1.c

SRC2 =	serveurdir/main_serveur.c \
	serveurdir/ serveur_1.c

OBJS1 = $(SRC1:.c=.o)

OBJS2 = $(SRC2:.c=.o)

NAME1 = client

NAME2 = server 

all: $(NAME)

$(NAME): $(OBJS1) $(OBJS2)
	gcc -o $(NAME1) $(OBJS1) 
	gcc -o $(NAME2) $(OBJS2)

clean:
	rm -f $(OBJS1)
	rm -f $(OBJS2)

fclean: clean
	rm -f $(NAME1) $(NAME2)

re: fclean all