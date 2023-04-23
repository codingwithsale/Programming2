# Zapisi dana 23.4.2023.

**Danas planiram preci redom preko prezentacija profesora Dzelihodzica i preko tutoriala koje drzi kolega Nedim.**
**Cilj je ponoviti do sada predjeno gradivo, te uvidjeti ukoliko je nesto bitno propusteno.**
**Prije prelaska samih materijala, na siteu w3schools.com cu preci njihov set laganih vjezbi za C++.**

## Lecture 01 - Intro to programming and C++, Elementary programming

  ### [Chapter1] Intro to programming and C++

    - C++ is an object-oriented programming language, based on C.
    - C++ needs a compiler that translates the entire source program into a machine language file for execution.
    - First program (HelloWorld).
    - Special characters and comments in C++
        Commenting multiple lines of code in C++ with /* block of code */.
    - Perforimg mathematical computations and displaying the result to the console.
    - Toolchain in the sequence of tools that do something towards the process of converting program to from a 
        high-level language to an executable program.
    - IDEs.
    - To start the toolchain, we use build.
    - IDEs use different toolchains, where GCC/G++ is one of the world's most famous compilers.
    - Programming errors:
        1. Syntax errors (missing quotation marks, braces, semicolons, misspelling names, etc.)
        2. Runtime errors (eg. deviding with 0)
        3. Logic errors

  ### [Chapter2] Elementary programming

    - Reading input from keyboard
        Multiple input in one statement:
            int x, y, z;
            cout << "Enter three numbers: ", cin >> x >> y >> z;
    - Variables are used to represent values that may be changed in program.

> **Catch this!**
>
>> cout << x = 1; // Assigns 1 to x and outputs 1

    - A named constant  an identifier that represents a permanent value.
        const datatype CONSTANTNAME = VALUE;
    - Numerical data types:
        1. integers (signed, unsigned, short, long...)
        2. floating-point numbers (float, double, long double...)

> **The double type values are more accurate than the float type values. So it is safer to use double for most calculations.**

    - Numeric operators
    - Integer division
        5 / 3 yields an integer 1
        5.0 / 2 yields a double value 2.5
        5 % 2 yields 1 (the remainder of the division)
    - Exponent operations with cmath library
    - We can express every arithmetic expression with code
    - Displaying the current time
        Example
            Write a program that displays current time in GMT in the format hour:minute:second such as 1:45:19.
            The time(0) function in the ctime header file returns the current time in seconds elapsed since the time
                00:00:00 on January 1, 1970 

            int main() {
            // Obtain the total seconds since the midnight, Jan 1, 1970
            int totalSeconds = time(0);

            // Compute the current second in the minute in the hour
            int currentSecond = totalSeconds % 60;

            // Obtain the total minutes
            int totalMinutes = totalSeconds / 60;

            // Compute the current minute in the hour
            int currentMinute = totalMinutes % 60;

            // Obtain the total hours
            long totalHours = totalMinutes / 60;

            // Compute the current hour
            int currentHour = (int)(totalHours % 24);

            // Display results
            cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;

            return 0;
            }

    - Increment and decrement operators
        1. ++var --> pre-increment --> Increments var by 1 and evaluates to the new value in var after the increment.
        2. var++ --> post-increment --> Evaluates to the original value in var and increments var by 1.
        3. --var --> pre-decrement --> Decrements var by 1 and evaluates to the new value in var after the decrement.
        4. var-- --> post-decrement --> Evaluates to the original value in var and decrements var by 1.

    - Numeric type conversion
        Casting does not change the variable being cast. For example, d is not changed after casting in the following code:
            double d = 4.5;
            int i = static_cast<int>(d);

    - Common errors:
        1. Undeclared or uninitialized variables
            double interestRate = 0.05;
            double interest = **interestrate** * 45;
        2. Integer overflow
            short value = 32767 + 1; // value = -32768
        3. Round-off errors
            float a = 1000.43;
            float b = 1000.0;
            cout << a - b << endl; // displays 0.429993, not 0.43

  ### [Lab1] Introduction to C++

    - The main difference between C and C++ is that C++ support classes and objects, while C doesn't.
    - Parts explained below are mandatory parts of program:
        ~ #include<iostream> --> header file library that lets us work with input and output objects.
            Header files add functionality to C++ programs.
        ~ using namespace std --> meand that we can use names for objects and variables from the standard library.
        ~ int main(){} is a function. Any code inside curly brackets will be executed.
    - We use comments to explain C++ code, and to make it more readable. In the previous part, it is shown how to comment 
        single line or multiple lines of code.
    - To insert a new line, use either \n character or endl manipulator.
    - The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A'.
    - Alternatively, we can display certain characters by using ASCII values.
    - To use strings, the additional header file <string> must be included in the source code.
    - Variables with keyword const have non-changeable value and if we try to change it, we will get error
    - Logical operators
        ~ && --> logical and
        ~ || --> logical or
        ~ !  --> logical not
    - We can use two ways to get user input. The common one is cin, but cin can't take for example multiple words of string.
        To fix that problem, we can take user input like this:
            getline(cin, variableName)
