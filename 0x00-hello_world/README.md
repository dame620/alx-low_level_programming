te readme.md file for document all the code
1/Write a script that runs a C file through the preprocessor and save the result into another file.

    The C file name will be saved in the variable $CFILE
    The output should be saved in the file c

after running export CFILE=main.c
the script is
gcc -E $CFILE -o c
2/ Write a script that compiles a C file but does not link.

    The C file name will be saved in the variable $CFILE
    The output file should be named the same as the C file, but with the extension .o instead of .c.
        Example: if the C file is main.c, the output file should be main.o
after export CFILE=main.c
the script is gcc -c $CFILE

