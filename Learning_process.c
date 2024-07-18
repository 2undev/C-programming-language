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






// C - Program Structure >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// A typical program in C language has certain mandatory sections and a few optional sections, depending on the program's logic, complexity, and readability. 
// Normally a C program starts with one or more preprocessor directives (#include statements) and must have a main() function that serves as the entry point of the program. 
// In addition, there may be global declarations of variables and functions, macros, other user-defined functions, etc.




// The Preprocessor Section >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// The C compiler comes with several library files, having ".h" as an extension. A ".h" file (called a "header file") 
// consists of one or more predefined functions (also called "library functions") to be used in the C program.

// The library functions must be loaded in any C program. The "#include" statement is used to include a header file. It is a "preprocessor directive".

// For example, printf() and scanf() functions are needed to perform console I/O operations.
// They are defined in the stdio.h file. Hence, you invariably find #include <stdio.h> statement at the top of any C program. 


// Other important and frequently used header files include >>>>>>>>>>>>>>>>>>>>>>>>>>>>
// string.h, 
// math.h, 
// stdlib.h, etc.




// There are other preprocessor directives such as >>>>>>>>>>>>>>>>>>>>>>>>>>>>  

// #define which is used to define constants and macros and 
// #ifdef is used for conditional definitions.

// The following statement defines a constant PI

// #define PI 3.14159

// Example
// Once a constant is defined, it can be used in the rest of the C program.

#include <stdio.h>

#define PI 3.14159

int main(){
 int radius = 5;
 float area = PI*radius*radius;
 printf("Area: %f", area);

 return 0;
}

// Output
// On executing this code, you will get the following output 
// Area: 78.539749






// You can also define a macro with the "#define" directive. >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// It is similar to a function in C. 
// We can pass one or more arguments to the macro name and perform the actions in the code segment.

// The following code defines AREA macro using the #define statement 
// Example

#include <stdio.h>
#define PI 3.14159
#define AREA(r) (PI*r*r)

int main(){
 int radius = 5;
 float area = AREA(radius);
 printf("Area: %f", area);
 return 0;
}


// Output
// Area: 78.539749

// Macros are generally faster in execution than the functions.





// The main() Function >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// A C program is a collection of one or more functions. 

// There are two types of functions in a C program: 

// 1-- library functions. 
// 2-- user-defined functions.

// There must be at least one user-defined function in a C program, whose name must be main(). >>>>>>>>>>>>>>>>>>>>>

// The main() function serves as the entry point of the program. When the program is run, the compiler looks for the main() function.
// The main() function contains one or more statements. 
// By default, each statement must end with a semicolon. 
// The statement may include variable declarations, decision control or loop constructs or call to a library or another user-defined function.


// In C, a function must have a data type. >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// The data type of return value must match with the data type of the function. 
// By default, a function in C is of int type. Hence, if a function doesn't have a return statement, its type is int, and you may omit it in the function definition, 
// but the compiler will issues a warning like this

// warning: return type defaults to 'int'


// Example
// A typical example of main() function is as follows 

#include <stdio.h>
int main() {
 /* my first program in C */
 printf("Hello, World! \n");
 return 0;
}


// Output
// On executing this code, you will get the following output 
// Hello, World!



// The Global Declaration Section >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// This section consists of declaration of variables to be used across all the functions in a program. 
// Forward declarations of user-defined functions defined later in the program as well as user-defined data types are also present in the global section.


// Example of global variable declaration 

int total = 0;
float average = 0.0;



// Example of forward declaration of a function 

float area(float height, float width);





// Subroutines in a C Program >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// There may be more than one user-defined functions in a C program. 
// Programming best practices require that the programming logic be broken down to independent and reusable functions in a structured manner.

// Depending on the requirements, a C program may have one or more user-defined functions, which may be called from the main() function or any other user-defined function as well.








// Structure of the C Program >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// The following code shows the different sections in a C program 

// /*Headers*/ >>>>>>>>>>>>>>
#include <stdio.h>
#include <math.h>

// /*forward declaration*/ >>>>>>>>>>>>
float area_of_square(float);

// /*main function*/ >>>>>>>>>>>>
int main() {
 /* my first program in C */
 float side = 5.50;
 float area = area_of_square(side);
 printf ("Side=%5.2f Area=%5.2f", side, area);
 return 0;
}

// /*subroutine*/ >>>>>>>>>>>>
float area_of_square(float side){
 float area = pow(side,2);
 return area;
}



// Output
// On executing this code, you will get the following output 











// C Quickstart >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Let's create our first C file.


// Every learner aspiring to become a professional software developer starts with writing a Hello World program in the programming language he/she is learning. 
// In this chapter, we shall learn how to write a Hello World program in C language.



// Hello World in C Language >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Before writing the Hello World program, make sure that you have the C programming environment set up in your computer. 
// This includes the GCC compiler, a text editor, and preferably an IDE for C programming such as CodeBlocks.


// Example
// The first step is to write the source code for the Hello World program. >>>>>>>>>>>>>>>>>>>>>>

// Open a text editor on your computer. On Windows, open Notepad or Notepad++, enter the following code and save it as "hello.c".


#include <stdio.h>

int main(){
 /* my first program in C */
 printf("Hello World! \n");

 return 0;
}

// Output
// Run the code and check its output
// Hello World!




// The Step-by-Step Execution of a C Program >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Let us understand how the above program works in a step-by-step manner.

// Step 1 >>>>>>>>>>>>>>>>>>>>
// The first statement in the above code is the #include statement that imports the stdio.h file in the current C program. 
// This is called a preprocessor directive. 

// This header file contains the definitions of several library functions used for stand IO operations. 
// Since we shall be calling the printf() function which is defined in the stdio.h library, we need to include it in the first step.


// Step 2 >>>>>>>>>>>>>>>>>>>>>>>
// Every C program must contain a main() function. 
// The main() function in this program prints the "Hello World" message on the console terminal.

// Inside the main() function, we have inserted a comment statement that is ultimately ignored by the compiler; it is for the documentation purpose.

// The next statement calls the printf() function. In C, every statement must terminate with a semicolon symbol (;), failing which the compiler reports an error.
// The printf() function, imported from the stdio.h library file, echoes the Hello World string to the standard output stream. 


// In case of Windows, the standard output stream is the Command prompt terminal and in case of Linux it is the Linux terminal.

// In C, every function needs to have a return value. 
// If the function doesn't return anything, its value is void. 
// In the example above, the main() function has int as its return value. 
// Since the main() function doesn't need to return anything, it is defined to return an integer "0". 

// The "return 0" statement also indicates that the program has been successfully compiled and run. 


// Step 3>>>>>>>>>>>>>>>>>>>>>>>>>>> 
// Next, we need to compile and build the executable from the source code ("hello.c").
// If you are using Windows, open the command prompt in the folder in which "hello.c" has been saved. 

// The following command compiles the source code >>>>>>>>>>>>>>
// gcc -c hello.c -o hello.o
// The -c option specifies the source code file to be compiled. This will result in an object file with the name hello.o if the C program doesn't have any errors. 

// If it contains errors, they will be displayed. For example, if we forget to put the semicolon at the end of the printf() statement, the compilation result will show the following error:

// helloworld.c: In function 'main':
// helloworld.c:6:30: error: expected ';' before 'return'
//  printf("Hello, World! \n")
//                            ^
//                            ;
// helloworld.c:8:4:
//  return 0;




// To build an executable from the compiled object file, use the following command: >>>>>>>>>>>>>>>
// gcc -o hello.exe hello.o

// The hello.exe is now ready to be run from the command prompt that displays the Hello
// World message in the terminal like this: >>>

// C:\Users\user>hello
// Hello World!


// On Ubuntu Linux, the object file is first given executable permission before running it by prefixing "./" to it. like this:

// $ chmod a+x a.o
// $ ./a.o

// You can also use an IDE such as CodeBlocks to enter the code, edit, debug and run the Hello World program more conveniently.






// Follow this instruction to compile and run your code on mac os.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// -- open your terminal and navigate to the directory folder where the code or project is located using this command like this:  cd "/path/to/your/source/code/"

// -- once you are in the directory folder where the code or project is located use this command to compile your code like this:   gcc -o learning_process learning_process.c

// -- then use ./ followed by the project name anytime you want to run the compiled program like this:   ./learning_process

// Step-by-Step Explanation

// 1. Changing the Directory:    cd "/path/to/your/source/code/"

// The `cd` command stands for "change directory." This command is used to change the current working directory to the specified path. In this example, `"/path/to/your/source/code/"` is a placeholder for the actual path where your source code file (`learning_process.c`) is located. You need to replace this with the actual path on your system.



// - Example:
// cd "/Users/2nde/Desktop/MIVA/Computer Science/100 L/C Programming Language/"


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




// Compilation Process in C >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// C is a compiled language. Compiled languages provide faster execution performance as compared to interpreted languages. 
// Different compiler products may be used to compile a C program. They are GCC, Clang, MSVC, etc. In this chapter, we will explain what goes in the background when you compile a C program using GCC compiler.



// Compiling a C Program >>>>>>>>>>>>
// A sequence of binary instructions consisting of 1 and 0 bits is called as machine code.
// High-level programming languages such as C, C++, Java, etc. consist of keywords that arecloser to human languages such as English. Hence, a program written in C (or any other high-level language) needs to be converted to its equivalent machine code. 
// This process is called compilation.


// Note that the machine code is specific to the hardware architecture and the operating system. 
// In other words, the machine code of a certain C program compiled on a computer with Windows OS will not be compatible with another computer using Linux OS. Hence, we must use the compiler suitable for the target OS.


// C Compilation Process Steps >>>>>>>>>>>>>>>>
// In this tutorial, we will be using the gcc (which stands for GNU Compiler Collection). 
// The GNU project is a free-software project by Richard Stallman that allows developers to have access to powerful tools for free.
// The gcc compiler supports various programming languages, including C. In order to use it, we should install its version compatible with the target computer.


// The compilation process has four different steps:
// The following diagram illustrates the compilation process.

// -- Preprocessing
// -- Compiling
// -- Assembling
// -- Linking

// Example
// To understand this process, let us consider the following source code in C language (main.c)

#include <stdio.h>
int main(){
 /* my first program in C */
 printf("Hello World! \n");

 return 0;
}


// Output
// Run the code and check its output
// Hello World!


// The ".c" is a file extension that usually means the file is written in C. 

// The first line is the preprocessor directive "#include" that tells the compiler to include the "stdio.h" header file.

// The text inside /* and */ are comments and these are useful for documentation purpose.

// The entry point of the program is the "main() function". It means the program will start by executing the statements that are inside this function’s block. 
// Here, in the given program code, there are only two statements: one that will print the sentence "Hello World" on the terminal, and another statement that tells the program to "return 0" if it exited or ended correctly. 

// So, once we compiled it, if we run this program we will only see the phrase "Hello World" appearing.



// What Goes Inside the C Compilation Process? >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// In order for our "main.c" code to be executable, we need to enter the command "gcc main.c", and the compiling process will go through all of the four steps it contains.

// Step 1: Preprocessing >>>>>>>>>>>>>>>>>>>>>>>>>>
// The preprocessor performs the following actions:
// It removes all the comments in the source file(s).
// It includes the code of the header file(s), which is a file with extension .h which contains C function declarations and macro definitions.

// The output of this step will be stored in a file with a ".i" extension, so here it will be in "main.i".
// In order to stop the compilation right after this step, we can use the option "-E" with the gcc command on the source file, and press Enter like this:

// gcc -E main.c




// Step 2: Compiling >>>>>>>>>>>>>>>>>>>
// The compiler generates the IR code (Intermediate Representation) from the preprocessed file, so this will produce a ".s" file. That being said, other compilers might produce assembly code at this step of compilation.
// We can stop after this step with the "-S" option on the gcc command, and press Enter like this:

// gcc -S main.c


// This is what the main.s file should look like:

// .file "helloworld.c"
//    .text
//    .def __main; .scl 2; .type 32; .endef
//    .section .rdata,"dr"
// .LC0:
//    .ascii "Hello, World! \0"
//    .text
//    .globl main
//    .def main; .scl 2; .type 32; .endef
//    .seh_proc main
// main:
//    pushq %rbp
//    .seh_pushreg %rbp
//    movq %rsp, %rbp
//    .seh_setframe %rbp, 0
//    subq $32, %rsp
//    .seh_stackalloc 32
//    .seh_endprologue
//    call __main
//    leaq .LC0(%rip), %rcx
//    call puts
//    movl $0, %eax
//    addq $32, %rsp
//    popq %rbp
//    ret
//    .seh_endproc
//    .ident "GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
//    .def puts; .scl 2; .type 32; .endef




// Step 3: Assembling >>>>>>>>>>>>>>>>>>>>>
// The assembler takes the IR code and transforms it into object code, that is code in machine language (i.e. binary). This will produce a file ending in ".o".
// We can stop the compilation process after this step by using the option "-c" with the gcc command, and pressing Enter.

// Note that the "main.o" file is not a text file, hence its contents won't be readable when you open this file with a text editor.




// Step 4: Linking >>>>>>>>>>>>>>>>>>>>>
// The linker creates the final executable, in binary. It links object codes of all the source files together. 
// The linker knows where to look for the function definitions in the static libraries or the dynamic libraries.

// Static libraries are the result of the linker making a copy of all the used library functions to the executable file. 
// The code in dynamic libraries is not copied entirely, only the name of the library is placed in the binary file.

// By default, after this fourth and last step, that is when you type the whole "gcc main.c" command without any options, the compiler will create an executable program called main.out (or main.exe in case of Windows) that we can run from the command line.

// We can also choose to create an executable program with the name we want, by adding the "-o" option to the gcc command, placed after the name of the file or files we are compiling. like this:

// gcc main.c -o hello.out

// So now we could either type "./hello.out" if you didn't use the "-o" option or "./hello" to execute the compiled code. The output will be "Hello World" and following it, the shell prompt will appear again.









// C Syntax >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Syntax
// You have already seen the following code a couple of times in the first chapters. Let's break it down to understand it better:



int main()
{
  printf("Hello World!");

  return 0;
}

// #include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 157). Header files add functionality to C programs.
// Line 155: A blank line. C ignores white space. But we use it to make the code more readable.
// Line 156: Another thing that always appear in a C program is main(). This is called a function. Any code inside its curly brackets {} will be executed.
// Line 157: printf() is a function used to output/print text to the screen. In our example, it will output "Hello World!".
// Line 158: return 0 ends the main() function.
// Line 159: Do not forget to add the closing curly bracket } to actually end the main function.

// Note that: Every C statement ends with a semicolon ;

// Note: The body of int main() could also been written as:

int main(){printf("Hello World!"); return 0;}

// Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.


// NOTE: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// you typically need to include the `#include <stdio.h>` directive only once at the beginning of each C source file that uses the Standard Input Output Library functions like `printf` and `scanf`.

// Let me explain

// The `#include <stdio.h>` directive tells the preprocessor to include the contents of the standard input-output header file (`stdio.h`) in your program. 
// This header file contains declarations for standard I/O functions, macros, and types.



// Key Points

// 1. Include Once Per File:
//    - You only need to include `#include <stdio.h>` once at the top of your source file, no matter how many times you use functions like `printf` or `scanf` in that file.

// 2. Include in Each Source File:
//    - If you have multiple source files in your project, each file that uses standard I/O functions must include `#include <stdio.h>`.

// 3. Avoid Multiple Inclusions:
//    - Including `#include <stdio.h>` multiple times in the same file is redundant and unnecessary. The preprocessor handles it, but it's good practice to include it just once.

// Summary

// - You include `#include <stdio.h>` once at the top of each C source file that uses standard I/O functions.
// - Each source file in a multi-file project should include `#include <stdio.h>` if it uses those functions.
// - It ensures that the necessary declarations for `printf`, `scanf`, and other standard I/O functions are available in your source file.














// C Statements >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Statements
// A computer program is a list of "instructions" to be "executed" by a computer.

// In a programming language, these programming instructions are called statements.

// The following statement "instructs" the compiler to print the text "Hello World" to the screen:

// printf("Hello World!");

// It is important that you end the statement with a semicolon ;

// If you forget the semicolon (;), an error will occur and the program will not run:

// if you run this code below you should get an error message because the program did not end with a semicolon

// printf("Hello World!")
// error: expected ';' before 'return'

// Many Statements >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Most C programs contain many statements.

// The statements are executed, one by one, in the same order as they are written:

// printf("Hello World!");
// printf("Have a good day!");
// return 0;

// Example explained
// From the example above, we have three statements:

// The first statement is executed first (print "Hello World!" to the screen).
// Then the second statement is executed (print "Have a good day!" to the screen).
// And at last, the third statement is executed (end the C program successfully).













// C Output (Print Text)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// To output values or print text in C, you can use the printf() function:

// Example

int main()
{
  printf("Hello World!");

  return 0;
}




// Double Quotes >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// When you are working with text, it must be wrapped inside double quotations marks "".

// If you forget the double quotes, an error occurs:

// Example
// printf("This sentence will work!"); // "This code will work!"

// printf(This sentence will produce an error.);  // this code will produce an error because the text is not wrapped inside double quotes.

// Many printf Functions >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// You can use as many printf() functions as you want. However, note that it does not insert a new line at the end of the output:

// Example

int main()
{
  printf("Hello World!");
  printf("I am learning C.");
  printf("And it is awesome!");

  return 0;
}

// C New Lines >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// To insert a new line, you can use the \n character:

// Example

int main()
{
  printf("Hello World!\n");
  printf("I am learning C.");

  return 0;
}

// You can also output multiple lines with a single printf() function. However, this could make the code harder to read:

// Example

int main()
{
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");

  return 0;
}

// Tip: Two \n characters after each other will create a blank line: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example

int main()
{
  printf("Hello World!\n\n");
  printf("I am learning C.");

  return 0;
}




// What is \n exactly? >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

// Examples of other valid escape sequences are:

// Escape       Sequence	Description

// \t	         Creates a horizontal tab/ space
// \\	         Inserts a backslash character (\)
// \"	         Inserts a double quote character








// Comments in C >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Comments in a C Program

// Apart from the programming elements of a C program such as variables, structures, loops, functions, etc., the code may have a certain text inside "/* .. */" recognized as comments.
// Such comments are ignored by the compiler.
// Inserting comments in the code often proves to be helpful in documenting the program, and in understanding as well as debugging the programming logic and errors.
// If the /* symbol doesn’t have a matching */ symbol, the compiler reports an error like the one below

// "Unterminated comment".


// C Multi-line Comments >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// A text between /* and */ is called as C-style comment, and is used to insert multi-line comments like this:

/*
Program to display Hello World
Author: Tutorialspoint
Built with codeBlocks
*/



// Single-line Comments >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// A single line comment starts with a double forward-slash (//) 
// and ends with a new line. meaning a valid code must start on a new line not on same line as the commented line of code.


// It may appear after a valid C statement also like this

int age = 20; // variable to store age



// However, a valid statement can't be given in a line that starts with "//". Hence, the
// following statement is erroneous:

// Variable to store age. int age=20;




// Single or multi-line comments?
// It is up to you which you want to use. Normally, we use // for short comments, and /* */ for longer.

// Good to know: Before version C99 (released in 1999), you could only use multi-line comments in C.



















// C Variables >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Variables are containers for storing data values, like numbers and characters.

// In C, there are different types of variables (defined with different keywords), for example:

// int - stores integers (whole numbers), without decimals, such as 123 or -123

// float - stores floating point numbers, with decimals, such as 19.99 or -19.99

// char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes








// Declaring (Creating) Variables>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// To create a variable, specify the type and assign it a value:



// Syntax >>>>>>>>>>>>>>>>>>>>>>

// type variableName = value;

// -- Where type: is one of C types (such as int),
// -- variableName: is the name of the variable (such as x or myName).
// -- The equal sign: is used to assign a value to the variable.

// So, to create a variable that should store a number, look at the following example:

// Example
// Create a variable called myNum of type int and assign the value 15 to it:

int myNum = 15;

// You can also declare a variable without assigning the value, and assign the value later:

// Example
// Declare a variable

int myNum;

// Assign a value to the variable
myNum = 15;







// Output Variables>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// You learned from the output chapter that you can output values/print text with the printf() function:

// Example

int main()
{
  printf("Hello World!");

  return 0;
}

// In many other programming languages (like Python, Java, and C++), you would normally use a print function to display the value of a variable. However, this is not possible in C:

// Example

int main()
{
  int myNum = 15;
  printf(myNum); // Nothing happens

  return 0;
}

// To output variables in C, you must get familiar with something called "format specifiers",










// Format Specifiers >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

// A format specifier starts with a percentage sign %, followed by a character.

// For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:

// Example

int main()
{
  int myNum = 15;
  printf("%d", myNum); // Outputs 15

  return 0;
}








// To print other types, use %c for char and %f for float: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example
int main()
{
  // Create variables
  int myNum = 15;          // Integer (whole number)
  float myFloatNum = 5.99; // Floating point number
  char myLetter = 'D';     // Character

  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);

  return 0;
}






// To combine both text and a variable, separate them with a comma inside the printf() function: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example

int main()
{
  int myNum = 15;
  printf("My favorite number is: %d", myNum);

  return 0;
}








// To print different types in a single printf() function, you can use the following: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example

int main()
{
  int myNum = 15;
  char myLetter = 'D';

  printf("My number is %d and my letter is %c", myNum, myLetter);

  return 0;
}

// You will learn more about Data Types in a later chapter.










// Print Values Without Variables >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// You can also just print a value without storing it in a variable, as long as you use the correct format specifier:

// Example

int main()
{
  printf("My favorite number is: %d", 15);
  printf("My favorite letter is: %c", 'D');

  return 0;
}

// However, it is more sustainable to use variables as they are saved for later and can be re-used whenever.













// Change Variable Values >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// If you assign a new value to an existing variable, it will overwrite the previous value:

// Example

int main()
{
  int myNum = 15; // myNum is 15
  myNum = 10;     // Now myNum is 10

  printf("%d", myNum);

  return 0;
}













// You can also assign the value of one variable to another : >>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example

int main()
{
  int myNum = 15;

  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNum = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d", myNum);

  return 0;
}












// Or copy values to empty variables: >>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example
int main(){
// Create a variable and assign the value 15 to it
int myNum = 15;

// Declare a variable without assigning it a value
int myOtherNum;

// Assign the value of myNum to myOtherNum
myOtherNum = myNum;

// myOtherNum now has 15 as a value
printf("%d", myOtherNum);

return 0; 
}














// Add Variables Together >>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// To add a variable to another variable

// you can use the + operator:


// Example 

int main(){
  int x = 5;
  int y = 6;
  int sum = x + y;

  printf("%d", sum);

  return 0;
}










// Declare Multiple Variables >>>>>>>>>>>>>>>>>>>>>>>>

// To declare more than one variable of the same type

// use a comma - separated list :

// Example 

int main(){
int x = 5; y = 6; z = 50;

printf("%d", x + y + z);

return 0;
}








// You can also assign the same value to multiple variables of the same type :  >>>>>>>>>>>>>>>>>>>>>>

// Example 
int main(){
int x, y, z;
x = y = z = 50;

printf("%d", x + y + z);

return 0;
}







// C Variable Names >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// All C variables must be identified with unique names.

// These unique names are called identifiers.

// Identifiers can be short

// names(like x and y) or more descriptive names(age, sum, totalVolume).

// Note : It is recommended to use descriptive names in order to create understandable and maintainable code :

// Example

// Good variable nam
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;




// The general rules for naming variables are: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Names can contain letters, digits and underscores
// Names must begin with a letter or an underscore (_)
// Names are case-sensitive (myVar and myvar are different variables)
// Names cannot contain whitespaces or special characters like !, #, %, etc.
// Reserved words (such as int) cannot be used as names







// Real-Life Example >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Often in our examples, we simplify variable names to match their data type (myInt or myNum for int types, myChar for char types, and so on). This is done to avoid confusion.

// However, for a practical example of using variables, we have created a program that stores different data about a college student:

// Example

int main(){
// Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

// Print variables
printf("Student id: %d\n", studentID);
printf("Student age: %d\n", studentAge);
printf("Student fee: %f\n", studentFee);
printf("Student grade: %c", studentGrade);

return 0;
}




// Calculate the Area of a Rectangle

// In this real life example, we create a program to calculate the area of a rectangle(by multiplying the length and width):


// Example

int main(){
// Create integer variable
int length = 4;
int width = 6;
int area;

// Calculate the area of a rectangle
area = length * width;

// Print the variables
printf("Length is: %d\n", length);
printf("Width is: %d\n", width);
printf("Area of the rectangle is: %d", area);

return 0;
}









// Data Types >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// As explained in the Variables chapter, a variable in C must be a specified data type, and you must use a format specifier inside the printf() function to display it:

// Example

int main(){
// Create variables
int myNum = 5;             // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

return 0;
}


// Basic Data Types >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// The data type specifies the size and type of information the variable will store.

// In this tutorial, we will focus on the most basic ones:

// DataType >>>>>>	  Size >>>>>>>	        Description >>>>>>>>>                                                                                              Example >>>>>>>>
// int	              2 or 4 bytes	        Stores whole numbers, without decimals	                                                                             1
// float	            4 bytes	              Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	               1.99
// double	            8 bytes	              Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	               1.99
// char	              1 byte	              Stores a single character/letter/number, or ASCII values	                                                           'A'


// Basic Format Specifiers >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// There are different format specifiers for each data type. Here are some of them:


// Format Specifier >>>>>>>>>	       Data Type >>>>>>>>>>>>>
// %d or %i	                          int	
// %f or %F	                          float	
// %lf	                              double	
// %c	                                char	
// %s	                                Used for strings (text), which i will learn more about in a later chapter	


// Note: It is important that you use the correct format specifier for the specified data type, or the program may produce errors or even crash.




