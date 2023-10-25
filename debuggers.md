# Valgrind  

A program tool for memory debugging, memory leak detection, and profiling  

It's name is a reference to the main enterance of Valhalla from Norse Mythology  

## Examples:

``  
valgrind --tool=memcheck ./a.out\
valgrind --tool=memcheck --leak-check=yes ./a.out\
``  

Note when compiling use '-g' to keep deubbing information in the exec file, it allows errors on precise line numbers

# GDB (GNU DeBugger)

Supports for many languages including C and C++ and Assembly x86 x64  

Allows for program execution with greater control  
- you can pause a program at a place  
- inspect the value of any variables at place, and  
- makes it easy to hunt for run-time errors like segmentation faults.  

GDB manual: http:/sourceware.org/gdb/current/onlinedocs/gdbtoc.html  

Examples:  
``
gdb ./a.out  
``

This stages program to execute.  

Options:  
``
run - executes program, returns where possible run-time errors are occuring\
break <file:n> - sets a breakpoint at a specific line 'n' in cpp file 'file'\
continue - continues to next program or program end\
step - steps into next line (will enter functions)\
next - goes to next line in file (won't enter functions)\
p <format char> <var> - prints data stored in variable\
x /x <var> - prints var and deferenced mem location var point to\
``

