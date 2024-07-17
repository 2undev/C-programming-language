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

int main()
{
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








// Comments in C >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.

// Comments can be singled-lined or multi-lined.

// Single-line Comments >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Single-line comments start with two forward slashes (//).

// Any text between // and the end of the line is ignored by the compiler (will not be executed).

// This example uses a single-line comment before a line of code:

// Example

// This is a comment

int main()
{
  printf("Hello World!");
}

// This example uses a single-line comment at the end of a line of code:

// Example

int main()
{
  printf("Hello World!"); // This is a comment
}





// C Multi-line Comments >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Multi-line comments start with /* and ends with */.

// Any text between /* and */ will be ignored by the compiler:

// Example

/* The code below will print the words Hello World! to the screen, and it is amazing */

int main()
{
  printf("Hello World!");
}

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
}

// In many other programming languages (like Python, Java, and C++), you would normally use a print function to display the value of a variable. However, this is not possible in C:

// Example

int main()
{
  int myNum = 15;
  printf(myNum); // Nothing happens
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
}






// To combine both text and a variable, separate them with a comma inside the printf() function: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example

int main()
{
  int myNum = 15;
  printf("My favorite number is: %d", myNum);
}








// To print different types in a single printf() function, you can use the following: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Example

int main()
{
  int myNum = 15;
  char myLetter = 'D';

  printf("My number is %d and my letter is %c", myNum, myLetter);
}

// You will learn more about Data Types in a later chapter.










// Print Values Without Variables >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// You can also just print a value without storing it in a variable, as long as you use the correct format specifier:

// Example

int main()
{
  printf("My favorite number is: %d", 15);
  printf("My favorite letter is: %c", 'D');
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
}










// Declare Multiple Variables >>>>>>>>>>>>>>>>>>>>>>>>

// To declare more than one variable of the same type

// use a comma - separated list :

// Example 

int main(){
int x = 5; y = 6; z = 50;

printf("%d", x + y + z);
}












// You can also assign the same value to multiple variables of the same type :  >>>>>>>>>>>>>>>>>>>>>>

// Example 
int main(){
int x, y, z;
x = y = z = 50;

printf("%d", x + y + z);
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




