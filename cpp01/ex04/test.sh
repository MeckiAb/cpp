#!/bin/bash

passed=0 ; failed=0 ; c=0 ;

echo -e -n "\n\t\033[4;97mTESTS : cpp01 / ex04\n"

# #echo -e -n "\033[3;97m\tex04 : \t\t\t"

echo -e -n "\033[0;39m\n" "Invalid number of arguments \t"
expected="Invalid number of arguments"

result=$(./losers 2>&1)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi

result=$(./losers hola hola 2>&1)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi

result=$(./losers hola hola hola hola 2>&1)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e -n "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi

echo -e -n "\033[0;39m\n" "Empty search string\t\t"
expected="Empty search string"

echo "Texto de prueba 42" > test.txt
result=$(./losers test.txt "" "43" 2>&1)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e -n "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi
rm test.txt

echo -e -n "\033[0;39m\n" "Error opening input file\t"
expected="Error opening input file"

echo "Texto de prueba 42" > test.txt
chmod 000 test.txt
result=$(./losers test.txt "42" "43" 2>&1)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi
rm -f test.txt

result=$(./losers nonexistant.txt "42" "43" 2>&1)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e -n "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi

echo -e -n "\033[0;39m\n" "Error opening output file\t"
expected="Error opening output file"

echo "Texto de prueba 42" > test.txt
echo "" > test.txt.replace
chmod 000 test.txt.replace
result=$(./losers test.txt "42" "43" 2>&1)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi
rm -f test.txt test.txt.replace

echo -e -n "\033[0;39m\n" "No errors\t\t\t"

echo "Texto de prueba 42" > test.txt
./losers test.txt "42" "43"
expected="Texto de prueba 43"
result=$(cat test.txt.replace)
if [[ "$result" == "$expected" ]]; then echo -e -n "\033[1;92m\U2714 "; ((passed += 1)); ((c += 1));
else echo -e "\033[1;91m\U2716 "; ((failed += 1)); ((c += 1));
fi
rm -f test.txt test.txt.replace


echo -e -n "\n\n\033[1;97mtests realizados : $c ( \033[0;92m$passed ok"
if [[ $failed > 0 ]]; then echo -e -n " \033[1;97m/ \033[0;91m$failed ko\033[1;97m)";
else echo -e -n "\033[1;97m )";
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
