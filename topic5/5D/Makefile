all: program1

program1: main.o a_functions.o b_functions.o c_functions.o d_functions.o
	gcc main.o a_functions.o b_functions.o c_functions.o d_functions.o -o program1

a_functions.o: a_functions.c
	gcc -c a_functions.c

b_functions.o: b_functions.c
	gcc -c b_functions.c

c_functions.o: c_functions.c
	gcc -c c_functions.c

d_functions.o: d_functions.c
	gcc -c d_functions.c

# Genom att köra "echo \$PATH" kan man se vilka mappar som
# redan ligger i PATH.
# En lämplig plats som är standard i Ubuntu är ~/.local/bin.
install:
	install program1 ~/.local/bin/

uninstall:
	rm -f ~/.local/bin/program1

clean:
	rm -f *.o program1
