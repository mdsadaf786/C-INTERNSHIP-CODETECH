# C-INTERNSHIP-CODETECH

*COMPANY*: CODETECH IT SOLUTIONS

*NAME*: MOHD SADAF

*INTERN ID*: CT04DN1651

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

CODTECH C LANGUAGE INTERNSHIP TASKS – PROJECT DESCRIPTION
This repository contains the completed solution for all four internship tasks assigned by CODTECH as part of the C Programming Language internship. The internship primarily focused on practical implementation of core C programming concepts, including file handling, data structures, compiler design basics, and data compression techniques. Each task was carefully designed to enhance hands-on coding skills and provide real-world problem-solving experience in the C programming language.

Task 1: File Handling in C
This task focuses on one of the most essential concepts in system-level programming: file handling. The program demonstrates how to:

1.Create a text file
2.Write data into it
3.Append more data without overwriting existing content
4.And finally, read and display the file content.

In the implemented C program (task1.c), standard library functions such as fopen(), fprintf(), fgets(), and fclose() are used. These functions allow interaction with the file system directly from within a C program. This task is crucial for understanding how data persistence works and how file I/O is managed in operating systems.

 Task 2: Singly Linked List – Insert, Delete & Traverse
The second task is based on the implementation of a singly linked list, one of the fundamental data structures in computer science. The program demonstrates:

1.Insertion of new nodes at the beginning of the list
2.Deletion of a node by value
3.Traversal to print the elements of the list sequentially.

The code (task2.c) makes use of dynamic memory allocation through malloc() to create new nodes. It helps in understanding how memory is managed in heap space during runtime. Linked lists are widely used in operating systems, memory management, and database applications due to their flexibility and dynamic nature.

Task 3: Lexical Analyzer – Identifying Tokens
This task introduces a simplified version of a lexical analyzer, which is a core component of compilers. The objective is to read from an input C file (input.c) and identify:

1.Keywords like int, float, if, else, etc.
2.Operators such as +, -, *, /, etc.
3.Identifiers (variable/function names).

In task3.c, the program scans the input character by character, forms words, and then classifies them using simple checks. Though it's a basic version, it demonstrates how real compilers tokenize source code before further parsing. This task gives a practical insight into compiler design basics, which is essential for those aiming to work in systems programming or compiler development.

 Task 4: Run-Length Encoding (RLE) – Compression & Decompression
This task involves writing a program that performs Run-Length Encoding (RLE) – a simple and effective form of lossless data compression. The program accepts a string (e.g., "aaabbbc") and compresses it into a form like "a3b3c1". It also supports decompression, reconstructing the original string from the compressed version.

In task4.c, the compression logic counts consecutive repeated characters and prints the character followed by the count. The decompression logic reads pairs of characters and counts and repeats them accordingly. This exercise provides a real-world example of how data compression works in text and image file formats (like .bmp, .pcx, etc.).

#OUTPUT TASK 1 :
<img width="686" height="222" alt="Image" src="https://github.com/user-attachments/assets/31df20c5-be10-40e3-8fae-906665d37151" />

#OUTPUT TASK 2 :
<img width="524" height="211" alt="Image" src="https://github.com/user-attachments/assets/89596ec6-1d65-46e9-95d7-ed56e497d4d1" />

#OUTPUT TASK3 : 
<img width="424" height="463" alt="Image" src="https://github.com/user-attachments/assets/705fd9f9-16da-478a-8f6c-5e062db4c7b9" />

#OUTPUT TASK3 :
<img width="652" height="252" alt="Image" src="https://github.com/user-attachments/assets/9506840e-e7f3-4973-aff5-f92d9ef87792" />
