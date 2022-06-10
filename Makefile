##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## to complete
##

ECHO		=	/bin/echo -e
DEFAULT		=	"\e[0m"
BOLD		=	"\e[1m"
DIM_T		=	"\e[2m"
UNDLN_T		=	"\e[4m"
BLACK_C		=	"\e[30m"
RED_C		=	"\e[31m"
GREEN_C		=	"\e[32m"
YELLOW_C	=	"\e[33m"
BLUE_C		=	"\e[34m"
MAGEN_C		=	"\e[35m"
CYAN_C		=	"\e[36m"
WHITE_C		=	"\e[97m"
DEFAULT_C	=	"\e[39m"
LINE_RETURN	=	$(ECHO) ""

# ======= COLORS AND TEXTURE ======== #

SRC			=	src/initialisations/ini_menu.c				\
				src/windows/menu.c							\
				src/windows/start_of_game.c					\
				src/grouped_functions/draw.c				\
				src/basic_functions/my_put.c				\
				src/windows/close_windows.c					\
				src/windows/draw_npc.c						\
				src/mouse_keyboard/mouse_menu.c				\
				src/initialisations/ini_vectors_menu.c		\
				src/initialisations/init_game.c				\
				src/initialisations/init_text_npc.c			\
				src/initialisations/init_lutin.c			\
				src/initialisations/set_stat_mob.c			\
				src/initialisations/set_stat_boss.c			\
				src/initialisations/init_monster.c			\
				src/initialisations/init_rect.c				\
				src/initialisations/init_man.c				\
				src/initialisations/init_woman.c			\
				src/basic_functions/int_to_char.c			\
				src/grouped_functions/destroy.c				\
				src/mouse_keyboard/change_color.c			\
				src/mouse_keyboard/move_player.c			\
				src/mouse_keyboard/move_map_with_player.c	\
				src/mouse_keyboard/move_hitbox_npc.c		\
				src/mouse_keyboard/detect_option.c			\
				src/music_sound/music.c						\
				src/initialisations/ini_menu_2.c			\
				src/mouse_keyboard/change_color_2.c			\
				src/mouse_keyboard/change_color2.c			\
				src/mouse_keyboard/check_perm.c				\
				src/mouse_keyboard/check_perm2.c			\
				src/mouse_keyboard/choose_perso.c			\
				src/windows/choose_perso.c					\
				src/mouse_keyboard/choose_perso_2.c			\
				src/initialisations/ini_modu.c				\
				src/gameplay/display_text.c					\
				src/initialisations/ini_quete.c				\
				src/initialisations/set_cpt2.c				\
				src/initialisations/set_cpt.c				\
				src/animations/anim_player.c				\
				src/interactions/menu_quete.c				\
				src/initialisations/ini_stats.c				\
				src/initialisations/ini_stats_2.c			\
				src/mouse_keyboard/change_color_stat.c		\
				src/mouse_keyboard/choose_upgrades.c		\
				src/mouse_keyboard/verif_color_frame.c		\
				src/initialisations/ini_col.c				\
				src/initialisations/init_npc.c				\
				src/grouped_functions/draw_game.c			\
				src/grouped_functions/draw_game_2.c			\
				src/grouped_functions/destroy_game.c		\
				src/grouped_functions/destroy_game_2.c		\
				src/gameplay/put_to_inventory.c				\
				src/initialisations/ini_competence.c		\
				src/mouse_keyboard/change_color_comp.c		\
				src/initialisations/ini_competences_2.c		\
				src/fight/fight_loop.c			         	\
				src/fight/init_porcent.c	         		\
				src/fight/reward.c	         			\
				src/fight/init_struct_fight.c         		\
				src/mouse_keyboard/choose_comp.c			\
				src/mouse_keyboard/change_color_comp_2.c	\
				src/initialisations/ini_shop_pnj.c			\
				src/initialisations/init_particle.c			\
				src/mouse_keyboard/change_color_key.c		\
				src/mouse_keyboard/choose_key.c				\
				src/mouse_keyboard/detect_option_in_game.c	\
				src/mouse_keyboard/detect_option_2.c		\
				src/mouse_keyboard/detect_option_3.c		\
				src/mouse_keyboard/choose_perso_3.c			\
				src/mouse_keyboard/choose_perso_4.c			\
				src/mouse_keyboard/change_color_stat_2.c	\
				src/mouse_keyboard/choose_upgrades_2.c		\
				src/initialisations/ini_col_2.c				\
				src/grouped_functions/draw_howto.c			\
				src/mouse_keyboard/detect_menu_howto.c		\
				src/mouse_keyboard/detect_option_in_game_2.c\
				src/initialisations/ini_menu_3.c			\
				src/initialisations/booses.c				\
				src/fight/init_all_pos.c					\
				src/fight/init_struct_attack.c				\
				src/fight/set_rect.c						\
				src/fight/set_stat_comp.c					\
        		src/mouse_keyboard/detect_option_in_game_3.c\
				src/particles/draw_part.c					\
				src/particles/appendix.c					\
				src/fight/attack.c							\
				src/fight/fight_loop_2.c					\

MAIN		=	src/main.c

SRCT		=

# ======= SOURCES ======== #

OBJ			=	$(SRC:%.c=%.o)

OBJM		=	$(MAIN:%.c=%.o)

OBJT		=	$(SRCT:%.c=%.o)

# ======= OBJECTS ======== #

CC			=	gcc

MAKE		=	make

INCLUDES	=	-I./includes

# ======= INIT ======== #

NAME		=	my_rpg

NAMET		=	unit_tests

# ======= NAME ======== #

CFLAGS		=	-Wunknown-pragmas
CFLAGS		+=	$(INCLUDES)
LDFLAGS		=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

# ======= FLAGS ======== #

all:		$(NAME) message

$(NAME):	$(OBJ) $(OBJM)
	$(CC) -o $(NAME) $(OBJ) $(OBJM) $(LDFLAGS)

tests_run:	CFLAGS += --coverage
tests_run:	LDFLAGS += -lcriterion
tests_run:
	$(CC) -o $(NAMET) $(SRCT) $(SRC) $(LDFLAGS) -I./includes

unit_test: tests_run
	./unit_test

coverage:	unit_test
	gcovr

clean:
	$(RM) *~
	$(RM) *#
	$(RM) *.gc*
	$(RM) src/*.o
	$(RM) src/grouped_functions/*.o
	$(RM) src/windows/*.o
	$(RM) src/particles/*.o
	$(RM) src/initialisations/*.o
	$(RM) src/mouse_keyboard/*.o
	$(RM) src/fight/*.o
	$(RM) src/basic_functions/*.o
	$(RM) src/music_sound/*.o
	$(RM) src/initialisations/*.o
	$(RM) src/gameplay/*.o
	$(RM) src/interactions/*.o
	$(RM) src/animations/*.o

fclean:		clean
	$(RM) $(NAME)

debug: CFLAGS += -g
debug: re

message:
	@$(LINE_RETURN)
	@$(ECHO) $(BOLD)""$(RED_C)
	@$(ECHO) $(BOLD)"                                          \c"$(RED_C)
	@$(ECHO) $(BOLD)"                                  \c"$(RED_C)
	@$(ECHO) $(BOLD)"                                          "$(RED_C)
	@$(ECHO) $(BOLD)"MMMMMMMM               MMMMMMMMYYYYYYY    \c"$(RED_C)
	@$(ECHO) $(BOLD)"   YYYYYYY     RRRRRRRRRRRRRRRRR  \c"$(RED_C)
	@$(ECHO) $(BOLD)" PPPPPPPPPPPPPPPPP           GGGGGGGGGGGGG"$(RED_C)
	@$(ECHO) $(BOLD)"M:::::::M             M:::::::MY:::::Y    \c"$(RED_C)
	@$(ECHO) $(BOLD)"   Y:::::Y     R::::::::::::::::R \c"$(RED_C)
	@$(ECHO) $(BOLD)" P::::::::::::::::P       GGG::::::::::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::::M           M::::::::MY:::::Y    \c"$(RED_C)
	@$(ECHO) $(BOLD)"   Y:::::Y     R::::::RRRRRR:::::R\c"$(RED_C)
	@$(ECHO) $(BOLD)" P::::::PPPPPP:::::P    GG:::::::::::::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M:::::::::M         M:::::::::MY::::::Y   \c"$(RED_C)
	@$(ECHO) $(BOLD)"  Y::::::Y     RR:::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"RPP:::::P     P:::::P  G:::::GGGGGGGG::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::::::M       M::::::::::MYYY:::::Y  \c"$(RED_C)
	@$(ECHO) $(BOLD)" Y:::::YYY       R::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"R  P::::P     P:::::P G:::::G       GGGGGG"$(RED_C)
	@$(ECHO) $(BOLD)"M:::::::::::M     M:::::::::::M   Y:::::Y \c"$(RED_C)
	@$(ECHO) $(BOLD)"Y:::::Y          R::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"R  P::::P     P:::::PG:::::G              "$(RED_C)
	@$(ECHO) $(BOLD)"M:::::::M::::M   M::::M:::::::M    Y:::::Y\c"$(RED_C)
	@$(ECHO) $(BOLD)":::::Y           R::::RRRRRR:::::R\c"$(RED_C)
	@$(ECHO) $(BOLD)"   P::::PPPPPP:::::P G:::::G              "$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M M::::M M::::M M::::::M     Y:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"::::Y            R:::::::::::::RR \c"$(RED_C)
	@$(ECHO) $(BOLD)"   P:::::::::::::PP  G:::::G    GGGGGGGGGG"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M  M::::M::::M  M::::::M      Y::::\c"$(RED_C)
	@$(ECHO) $(BOLD)":::Y             R::::RRRRRR:::::R\c"$(RED_C)
	@$(ECHO) $(BOLD)"   P::::PPPPPPPPP    G:::::G    G::::::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M   M:::::::M   M::::::M       Y:::\c"$(RED_C)
	@$(ECHO) $(BOLD)"::Y              R::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"R  P::::P            G:::::G    GGGGG::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M    M:::::M    M::::::M       Y:::\c"$(RED_C)
	@$(ECHO) $(BOLD)"::Y              R::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"R  P::::P            G:::::G        G::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M     MMMMM     M::::::M       Y:::\c"$(RED_C)
	@$(ECHO) $(BOLD)"::Y              R::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"R  P::::P             G:::::G       G::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M               M::::::M       Y:::\c"$(RED_C)
	@$(ECHO) $(BOLD)"::Y            RR:::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"RPP::::::PP            G:::::GGGGGGGG::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M               M::::::M    YYYY:::\c"$(RED_C)
	@$(ECHO) $(BOLD)"::YYYY         R::::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"RP::::::::P             GG:::::::::::::::G"$(RED_C)
	@$(ECHO) $(BOLD)"M::::::M               M::::::M    Y::::::\c"$(RED_C)
	@$(ECHO) $(BOLD)":::::Y         R::::::R     R:::::\c"$(RED_C)
	@$(ECHO) $(BOLD)"RP::::::::P               GGG::::::GGG:::G"$(RED_C)
	@$(ECHO) $(BOLD)"MMMMMMMM               MMMMMMMM    YYYYYYY\c"$(RED_C)
	@$(ECHO) $(BOLD)"YYYYYY         RRRRRRRR     RRRRRR\c"$(RED_C)
	@$(ECHO) $(BOLD)"RPPPPPPPPPP                  GGGGGG   GGGG"$(RED_C)
	@$(ECHO) $(BOLD)"                                          \c"$(RED_C)
	@$(ECHO) $(BOLD)"                                  \c"$(RED_C)
	@$(ECHO) $(BOLD)"                                          "$(RED_C)
	@$(ECHO) $(BOLD)""$(DEFAULT)
	@$(LINE_RETURN)

re:		fclean all

.PHONY= clean fclean re all tests_run coverage
