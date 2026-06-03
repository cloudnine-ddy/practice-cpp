# Lesson 08 - Vector, String, Simple Type Casting

## What I learned

- Some Syntax of C++:

    - Syntax of struct declaration:
      ```
      struct struct_name
      {
          datatype1 variable_name1;
          datatype2 variable_name2;
      };
      ```  

      like: 

      ```
      struct Student
      {
          std::string name;
          int age;
          double score;
      };
      ``` 
    
    - `struct_name.attribute_name`  
      access the attribute of the struct variable (similar to Python)

    - `struct_name.attribute_name = value`  
      assign a value to the attribute of the struct variable

    - `function_name (const struct_name& struct_variable)`
      pass a struct variable to a function which don't allow modify/copy
       
## Result

- NIL