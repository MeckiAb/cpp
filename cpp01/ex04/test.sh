#!/bin/bash

passed=0 ; failed=0 ; c=0 ;

echo -e -n "\n\t\033[4;97mTESTS : cpp01 / ex04\n"
echo -e -n "\033[0;39m\n"
#echo -e -n "\033[3;97m\tex04 : \t\t\t"

expected="Invalid number of arguments"
result=$(./losers 2>&1)
echo -e -n "Invalid number of arguments \t"
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi



echo -e -n "\033[0;39m\n\n"

# Colors

# DEL_LINE =		\033[2K
# ITALIC =		\033[3m
# BOLD =			\033[1m
# DEF_COLOR = 	\033[0;39m
# GRAY = 			\033[0;90m
# RED = 			\033[0;91m
# GREEN = 		\033[0;92m
# YELLOW = 		\033[0;93m
# BLUE = 			\033[0;94m
# MAGENTA = 		\033[0;95m
# CYAN = 			\033[0;96m
# WHITE = 		\033[0;97m
# BLACK =			\033[0;99m
# ORANGE =		\033[38;5;209m
# BROWN =			\033[38;2;184;143;29m
# DARK_GRAY =		\033[38;5;234m
# MID_GRAY =		\033[38;5;245m
# DARK_GREEN =	\033[38;2;75;179;82m
# DARK_YELLOW =	\033[38;5;143m
