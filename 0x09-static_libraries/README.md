## 0x09-static_libraries

0. A library is not a luxury but one of the necessities of life
Create the static library libmy.a with a list of given functions.

1. Without libraries what have we? We have no past and no future
Create a script called create_static_lib.sh that creates a static
library called liball.a from all the .c files that are in the current directory.
Note: while creating the object files, the flags -Wall, -Werror, -Wextra and -pedantic 
was not used because some of the sample functions are empty.
Therefore the approprate script should be
gcc -c -Wall -Werror -Wextra -pedantic *.c
ar -rc liball.a *.o

