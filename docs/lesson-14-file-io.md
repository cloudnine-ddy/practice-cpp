# Lesson 14 - File I/O

## What I learned

- Some Syntax of C++:

    - `#include <fstream>`  
      to include the file stream library for file input/output operations

    - `std::ofstream outputFile(filename);`  
      syntax to create an output file stream object for writing to a file
      - `std::ofstream` is the class for output file stream (like a data type)
      - `outputFile` is the variable name that we defined for the output file
      - `filename` is the string contains the file name

    - `outputFile << task << '\n';`  
      how you write something into the file

    - `std::ifstream inputFile(filename);`  
      syntax to create an input file stream object for reading from a file

    - `std::getline(inputFile, line)`  
      to read a line from the file and store it in the variable `line`

## Result

- NIL