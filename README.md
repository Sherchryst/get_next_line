# Get_next_line

This projects is about creating a function that, allows to read a line ending
with a newline character ('\\n') from a file descriptor, without knowing its
size beforehand. One of the goal of this project is to learn a highly
interesting new concept in C programming: static variables, and to gain a deeper
understanding of allocations, whether they happen on the stack memory or in the
heap memory, the manipulation and the life cycle of a buffer, the unexpected
complexity implied in the use of one or many static variables.

Ce projet consiste à créer une fonction qui permet de lire une fin de ligne
avec un caractère de retour à la ligne ('\\n') depuis un file descriptor,
sans connaître sa taille au préalable. L'un des objectifs de ce projet est d'apprendre
un nouveau concept intéressant en programmation C: les variables statiques,
et pour approfondir notre compréhension des allocations, qu'elles se produisent
sur la mémoire de la stack ou dans le mémoire de la heap, la manipulation
et le cycle de vie d'un buffer, l'inattendu complexité impliquée dans l'utilisation
d'une ou de plusieurs variables statiques.

## Getting Started

### Compiling

Run the following commands:

* To compile
	- `make`
* To remove objects:
	- `make clean`
* To remove objects and binary file (program):
	- `make fclean`
* To re-compile:
	- `make re`

### Executing

To test the function by using my own tester gnlkiller.

`git clone https://github.com/sherchryst/gnlkiller`

`mv get* ./gnlkiller`

`sh test.sh`

If wanted to test with multiple file descriptors, compile with
main-multiple-fds.c

`gcc src/main_1.c get*`

`./a.out tests/all_the_file_you_want testsbut_only_4_of_them`

