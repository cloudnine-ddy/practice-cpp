# Lesson 03 - Console Input

## What I learned

- String is standard library class, so when we declare, we need to add `std::String`

- Some Syntax of C++:

    - `std::cout << "Profile" << std::endl;`  
      `std` -> means standard library  
      `cout` -> means console output  
      `endl` -> means end of line

    
    - `std::getline(std::cin, name);`  
      `getline` -> get line of string input from user  
      `cin` -> means console input

    - `std::cin >> age;`  
      get a non-string input from user and store it into the variable

- if you are using `cin` but you give it an input with space, it will take them separately  
  like:  
  ```
  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Enter your height in meters: ";
  std::cin >> height;

  std::cout << "Age: " << age << std::endl;
  std::cout << "Height: " << height << " m" << std::endl;

  --------------------------------------------------
  Enter your age: 21 100
  Enter your height in meters:          #skipped

  Age: 21
  Height: 100 m
  ```

## Result

- NIL