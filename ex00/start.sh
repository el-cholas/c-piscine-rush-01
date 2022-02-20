# norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o rush-01 *.c
echo -n "Input: "
read input
./a.out $input
