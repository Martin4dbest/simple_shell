<h1>Simple_shell Project</h1>

</h2>Table of contents</h2>
<ul>
<li>What is the shell?</li>
<li>About this project</li>
<li>Essential Functionalities of the Simple Shell</li>
<li>File description</li>
<li>List of allowed functions and system calls for this project</li>
<li>USAGE</li>
<li>Example of Usage</li>
<li>Bugs</li>
<li>TEAM</li>
</ul>

<h2>What is the shell?</h2>

The shell is a program that takes commands from the keyboard via the terminal, and gives them to the operating system to perform.

<h2>About this project</h2>

This project is a simple version of the linux shell made for ALX Holberton School taking part of the "Low-level programming & Algorithm - Linux and Unix system programming" projects.
It is created using the C programming Language and it can do many functionalities that a real shell does.

<h2>Essential Functionalities of the Simple Shell:</h2>

Displays a prompt "$ " and waits for user input.
Runs all commands of type "executable program" (ls and /bin/ls).
Runs the following build_in commands: exit, env, setenv and unsetenv.
Handles commands with arguments.
Handles the PATH global variable.
Handles The EOF (End Of File) condition.
Handles the Ctrl + C signal -> It doesn't exit the shell

<h2>Files description</h2>

<ul>
<li>AUTHORS -> List of contributors to this repository</li>
<li>man_1_simple_shell -> Manual page for the simple_shell</li>
<li>shell.h -> Header file</li>
<li>shell_main.c -> main function</li>
sig_handler -> handles the Ctrl + C signal
EOF -> handles the End Of File condition.
<li>string.c</li>
_putchar -> prints a character
_puts -> prints a string
_strlen -> gives the length of a string
_strdup -> copies a string in a newly allocated memory
concat_all -> concatenates 3 strings in a newly allocated memory

<li>line_exec.c</li>
splitstring -> splits a string into an array of words
execute -> executes a command using execve
realloc -> reallocates a memory block
freearv -> frees a 2 dimensional array

<li>linkpath.c</li>
_getenv -> returns the value of a global variable
add_node_end -> adds a node in a singly linked list
linkpath -> creates a singly linked list for PATH directories
_which -> finds the pathname of a command
free_list -> frees the linked list of PATH value

<li>checkbuild.c</li>
checkbuild -> checks if a command is a build-in command

<li>buildin.c</li>
exitt -> handles the exit buildin command
_atoi -> converts a string into an integer
env -> prints the current environment
_setenv -> Initialize a new global variable, or modify an existing one
unsetenv -> remove a global variable.
</ul>

<h2>List of allowed functions and system calls for this project</h2>

1. access (man 2 access)
2. chdir (man 2 chdir)
3. close (man 2 close)
4. closedir (man 3 closedir)
5. execve (man 2 execve)
6. exit (man 3 exit)
7. _exit (man 2 _exit)
8. fflush (man 3 fflush)
9. fork (man 2 fork)
10. free (man 3 free)
11. getcwd (man 3 getcwd)
12. getline (man 3 getline)
13. getpid (man 2 getpid)
15. isatty (man 3 isatty)
16. kill (man 2 kill)
17. malloc (man 3 malloc)
18. open (man 2 open)
19. opendir (man 3 opendir)
20. perror (man 3 perror)
21. read (man 2 read)
22. readdir (man 3 readdir)
23. signal (man 2 signal)
24. stat (__xstat) (man 2 stat)
25. lstat (__lxstat) (man 2 lstat)
26. fstat (__fxstat) (man 2 fstat)
27. strtok (man 3 strtok)
28. wait (man 2 wait)
29. waitpid (man 2 waitpid)
30. wait3 (man 2 wait3)
31. wait4 (man 2 wait4)
40. write (man 2 write)

USAGE

You can try our shell by following these steps:

Step 1: Clone our repository using this command, (you need to have git installed on your machine first)

git clone https://github.com/Martin4dbest/simple_shell
Step 2: Change directory to simple_shell:

cd simple_shell
Step 3: Compile the C files in this way:

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
Step 4: Run the shell

./hsh
Exiting the shell When you want to exit the shell, you can use one of the following methods:

1: Type the command "exit"

exit
2: Press on Ctrl + D

Example of Usage

1. ubunto@ubuntu:~/Bureau/simple_shell$ gcc -Wall -Wextra -Werror -pedantic *.c -o hsh
ubunto@ubuntu:~/Bureau/simple_shell$ ./hsh
2. $ echo Hello, This is an example
Hello, This is an example
3. $ ls
README.md  checkbuild.c  line_exec.c  shell.c  string.c
buildin.c  hsh		 linkpath.c   shell.h
4. $ ^C
5. $ ls -l
total 52
-rw-r--r-- 1 ubunto ubunto  3067 Nov 26 04:22 README.md
-rw-r--r-- 1 ubunto ubunto  2183 Nov 24 16:17 buildin.c
-rw-r--r-- 1 ubunto ubunto   574 Nov 24 15:59 checkbuild.c
-rwxr-xr-x 1 ubunto ubunto 18144 Nov 26 04:22 hsh
-rw-r--r-- 1 ubunto ubunto  2091 Nov 24 14:49 line_exec.c
-rw-r--r-- 1 ubunto ubunto  1926 Nov 24 14:30 linkpath.c
-rw-r--r-- 1 ubunto ubunto   951 Nov 24 16:09 shell.c
-rw-r--r-- 1 ubunto ubunto  1351 Nov 24 15:58 shell.h
-rw-r--r-- 1 ubunto ubunto  1727 Nov 24 14:30 string.c
6. $ exit
ubunto@ubuntu:~/Bureau/simple_shell$

#Bugs

No known Bugs.

#TEAM

Martin Agoha
Adeolu Adeeyo
