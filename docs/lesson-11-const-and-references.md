# Lesson 11 - Syntax of const and references

## What I learned

- Some Syntax of C++:

    - `const int maxScore = 100;`  
      means this variable is a constant and cannot be changed after initialization

    - `std::size_t`  
      - is an integer type without a sign
      - used to represent the size or index of an array or container

    - Syntax of passing by value and passing by reference:
      ```
        void addOneByValue(int number)
        {
            number = number + 1;
            std::cout << "Inside addOneByValue: " << number << std::endl;
        }
      ```
      - In the above function, the parameter `number` is passed by value, which means a copy of the argument is made and any changes to `number` inside the function do not affect the original variable outside the function.
      
      ```
        void addOneByReference(int& number)
        {
            number = number + 1;
            std::cout << "Inside addOneByReference: " << number << std::endl;
        }
      ```  
      - In the above function, the parameter `number` is passed by reference (indicated by the `&`), which means that any changes to `number` inside the function will affect the original variable outside the function.
      
       
## Result

- NIL