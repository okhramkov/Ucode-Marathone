NAME 	:= minilibmx.a
FUN		:= 	mx_atoi.c mx_isdigit.c mx_isspace.c mx_printchar.c \
			mx_printint.c mx_printstr.c mx_strlen.c mx_strcpy.c \
			mx_strcmp.c
SRC		:= ./src/
CC		:= clang
FLAGS	:= -std=c11 -Wall -Wextra -Werror -Wpedantic -c -Ofast
INC 	:= $(addprefix -I, ./inc/)
OBJDIR	:= ./obj/
OBJS	:= $(FUN:.c=.o) 
OBJ		:= $(addprefix $(OBJDIR), $(OBJS))

all: $(NAME)

$(NAME): ./inc/header.h $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo $(NAME) "\033[0;33m reaby"

$(OBJDIR)%.o: $(SRC)%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(FLAGS) $(INC) -o $@ $<

clean: 
	rm -rf $(OBJDIR)
	@echo "Objects deleted"

uninstall:
	rm -rf $(NAME)
	@echo $(NAME) "deleted"

reinstall: uninstall all

.PHONY: clean uninstall reinstall all
