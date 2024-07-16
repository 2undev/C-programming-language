// Learn C
// C is a general-purpose programming language that has been widely used for over 50 years.

// C is very powerful; it has been used to develop operating systems, databases, applications, etc.


// C Introduction >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// What is C?
// C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.

// It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.

// C is strongly associated with UNIX, as it was developed to write the UNIX operating system.



// Why Learn C?
// It is one of the most popular programming languages in the world
// If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar
// C is very fast, compared to other programming languages, like Java and Python
// C is very versatile; it can be used in both applications and technologies


// Difference between C and C++
// C++ was developed as an extension of C, and both languages have almost the same syntax
// The main difference between C and C++ is that C++ support classes and objects, while C does not



// C Get Started >>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Get Started With C
// To start using C, you need two things:

// A text editor, like Notepad, to write C code
// A compiler, like GCC, to translate the C code into a language that the computer will understand
// There are many text editors and compilers to choose from. In this tutorial, i will use VScode as the text editor and GCC as the compiler.



// C Install IDE
// An IDE (Integrated Development Environment) is used to edit AND compile the code.

// Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C code.

// Note: Web-based IDE's can work as well, but functionality is limited.

// I will use visual studio in this tutorial.

// you can also use Code::Blocks, which we believe is a good place to start.

// You can find the latest version of Codeblocks at http://www.codeblocks.org/. Download the mingw-setup.exe file, which will install the text editor with a compiler.


// C Quickstart
// Let's create our first C file.

// Open Codeblocks and go to File > New > Empty File.

// Write the following C code and save the file as learning_process.c 

#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}

// Don't worry if you don't understand the code above - we will discuss it in detail in later chapters. For now, focus on how to run the code.

// Follow this instruction to compile and run your code.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// -- open your terminal and navigate to the directory folder where the code or project is located using this command like this:  cd "/path/to/your/source/code/"

// -- once you are in the directory folder where the code or project is located use this command to compile your code like this:   gcc -o learning_process learning_process.c

// -- then use ./ followed by the project name anytime you want to run the compiled program like this:   ./learning_process






// Step-by-Step Explanation

// 1. Changing the Directory:    cd "/path/to/your/source/code/"

// The `cd` command stands for "change directory." This command is used to change the current working directory to the specified path. In this example, `"/path/to/your/source/code/"` is a placeholder for the actual path where your source code file (`learning_process.c`) is located. You need to replace this with the actual path on your system.


// - Example:
// cd "/Users/2nde/Desktop/MIVA/Computer Science/100 L/C Programing Language/"
     




// 2. Compiling the C Program:    gcc -o learning_process learning_process.c


// The `gcc` command stands for "GNU Compiler Collection." This command is used to compile C (and other languages) programs. Here's a breakdown of the options and arguments:

//  - `gcc`: The command to invoke the GCC compiler.
//  - `-o learning_process`: This option specifies the name of the output file (the compiled executable). In this case, the output file will be named `learning_process`. meaning that is the name you will be using to run the program
//  - `learning_process.c`: This is the name of the source code file you want to compile. It should contain your C code. this is your source code file. the file you want to compile
 
//  When you run this command, GCC will compile the `learning_process.c` file and create an executable file named `learning_process` in the same directory.





// 3. Running the Compiled Program:    ./learning_process

// The `./` before `learning_process` indicates that you want to run an executable file located in the current directory. The `learning_process` is the name of the executable file that was created by the GCC compiler in the previous step.


// When you run this command, the operating system will execute the `learning_process` program, and you should see the output of your C program in the terminal.





// Summary

// - cd "/path/to/your/source/code/": Changes the current working directory to the location of your source code.
// - gcc -o learning_process learning_process.c: Compiles the C source code file `learning_process.c` and produces an executable named `learning_process`.
// - ./learning_process: Runs the compiled executable program.

// This sequence of commands is a common workflow for compiling and running a C program from the command line. 
// Make sure to replace `"/path/to/your/source/code/"` with the actual path to your source code directory on your system.





// now run the code and you should get this output.

// Hello World!

// Congratulations! You have written and executed your first C program.