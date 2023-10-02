static libraries tasks

TO create a static library ensure you have a main.h file containing all the necessary prototype for the files you are about to put in the library then copy all the files with the required functions into the folder you want to put in the library.
to add into the library; 
. make a .o file by using the code gcc -c *.c.
. the punch in the code ar rcs (libraryname e.g libmy.a)
. run ls to list all files
. use code to copy all .o files into the library; ar rcs libmy.a *.o
