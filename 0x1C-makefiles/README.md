# Makefile
***

A Makefile can be used to automate tasks to be executed in C.
In this project, we used the make syntax to compile files and execute them.
Tasks 0-3 implememnts the requirements in bits, while task 4 implements the
full Makefile requirements.

## Requirements
***
* name of the executable: school
* rules: all, clean, fclean, oclean, re
	* all: builds your executable
	* clean: deletes all Emacs and Vim temporary files along with the executable
	* oclean: deletes the object files
	* fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
	* re: forces recompilation of all source files
* variables: CC, SRC, OBJ, NAME, RM, CFLAGS
	* CC: the compiler to be used
	* SRC: the .c files
	* OBJ: the .o files
	* NAME: the name of the executable
	* RM: the program to delete files
	* CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
* The all rule recompiles only the updated source files

### Technologies
***
These versions of technologies were used in the project
* [Make](https://www.gnu.org/software/make/): version 4.2.1
* [gcc](https://gcc.gnu.org/): version 9.4.0
* editor: vim
* OS: ubuntu 20.04 LTS
