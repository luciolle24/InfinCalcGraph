##
## EPITECH PROJECT, 2021
## infinadd
## File description:
## Makefile
##

cyan = /bin/echo -e "\x1b[36m $1\x1b[0m"

SRC = main.c\
	  reading_from_input.c\
	  logo/logo.c\
	  handling_things/handling_users.c\
	  handling_things/error_handling.c\
	  logo/error_logo.c\
	  logo/error_logo2.c\
	  getting_calc.c\
	  checks/ops_parsing.c\
	  logo/secret_logo.c\
	  checks/checking_if_correct_calc.c\
	  checks/check_if_in_base_or_ops.c\
	  easter_eggs/secret_bases.c

NAME = a.out

INCLUDELIB = -I./include/ -L./lib/ -lmy
all:
	@$(call cyan,"Compiling... Please wait a bit")
	@$(call cyan, "-----------------------------")
	@cd lib/my && make && cd ../..
	@$(call cyan,"Found lib...")
	@gcc ${SRC} ${INCLUDELIB} -o ${NAME} -g3
	@$(call cyan, "-----------------------------")
clean:
	rm -f ../lib/my/*.o

fclean: clean
	rm -f ${NAME}

re: fclean all