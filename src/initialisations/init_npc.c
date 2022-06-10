/*
** EPITECH PROJECT, 2022
** npc
** File description:
** init_npc
*/

#include "character.h"

char *npc_name(int i)
{
    if (i == 0)
        return (alloc_insert("Andy"));
    if (i == 1)
        return (alloc_insert("Tracie"));
    if (i == 2)
        return (alloc_insert("Rargmus"));
    if (i == 3)
        return (alloc_insert("Morine"));
    if (i == 4)
        return (alloc_insert("Wensley"));
    if (i == 5)
        return (alloc_insert("Raye"));
    if (i == 6)
        return (alloc_insert("Pouhnita"));
    if (i == 7)
        return (alloc_insert("So'ria"));
}

char *npc_text(int i)
{
    if (i == 0)
        return ("Hello stranger. I have a quest for you.\n"
        "I saw something strange. where there are the"
        "three trees with Morine.\n I think a big monster is hiding.");
    if (i == 1)
        return ("Hi, you want buy somethings ? (press E)");
    if (i == 2)
        return ("JIJIJAJA !");
    if (i == 3)
        return ("Hello, i saw a dragon last time");
    if (i == 4)
        return ("Life is a mystery to be lived, not a problem to be solved.");
    if (i == 5)
        return ("There are something in the lake.\nI'm afraid, "
        "please can you check ?\nBefore you need a key");
    if (i == 6)
        return ("I am lost ... EHO is anyone there?");
    if (i == 7)
        return ("I'm soooooooooo tired !");
}

char *texture(int i)
{
    if (i == 0)
        return ("assets/NPC/BLUE.png");
    if (i == 1)
        return ("assets/NPC/marchand.png");
    if (i == 2)
        return ("assets/NPC/PABLO.png");
    if (i == 3)
        return ("assets/NPC/PINK.png");
    if (i == 4)
        return ("assets/NPC/PURPLE.png");
    if (i == 5)
        return ("assets/NPC/VERT.png");
    if (i == 6)
        return ("assets/NPC/YELLO.png");
    if (i == 7)
        return ("assets/NPC/PIK.png");
}

sfVector2f npc_pos(int i)
{
    if (i == 0)
        return ((sfVector2f){1000, 1350});
    if (i == 1)
        return ((sfVector2f){1600, 950});
    if (i == 2)
        return ((sfVector2f){1160, 2300});
    if (i == 3)
        return ((sfVector2f){3010, 5410});
    if (i == 4)
        return ((sfVector2f){1920, 2980});
    if (i == 5)
        return ((sfVector2f){3800, 3050});
    if (i == 6)
        return ((sfVector2f){5850, 5200});
    if (i == 7)
        return ((sfVector2f){2600, 240});
}
