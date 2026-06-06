# Project 01 - Console Todo App

## What I learned

- when using `std::cin`  
  if the user key in character (for example 'a') and then press 'Enter'
  there is actually a line like `a\n`  
  but `std::cin` only read the `a` and leave the `\n` there
  so in the upcoming reading input statement, things might go wrong
  so we can use this method to fix it!
  
  - we use getline to read the whole line of input
  ```
  std::getline(std::cin, userInput);
  ```

  - stringstream will skip all the `' '` before meeting the real character,  
    and once it meet `' '` again, it stop
  ```
  std::stringstream filteredInput(userInput);
  ```

  - we try to check is the filtered input meet the expected datatype  
    if no, it should be a `false` statement
  ```
  if (filteredInput >> selection) {          # selection here is defined as int
  ```
  

- the use of `std::stringstream()`
  ```
  std::stringstream ss(line);
  std::string status;

  std::getline(ss, currentTask.taskTitle, ',');
  std::getline(ss, status);
  ```
  - since we try to save the data and split them using ','
    so when we try to load the data, we use stringstream to split them!
    and save them accordingly!

## Result

- NIL