# Lesson 08 - Vector, String, Simple Type Casting

## What I learned

- Some Syntax of C++:

    - `std::vector<datatype> names;`  
      used to declare a vector (dynamic array)

    - `vector_name.push_back(data);`  
      insert a data into the vector

    - `vector_name.size();`  
      get the size of the vector

    - `vector_name.empty();`  
      check if the vector is empty

    - `vector_name[index];`  
      access the element at the index of the vector (0-indexing)

    - range-for loops syntax:
      ```
      for (datatype i : vector_name)            # similar to Python: for i in array_name:
      {
        do something with i;
      }
      ```  
    
    - type casting syntax:  
      - `(datatype_that_we_want) value/variable;`  
        C-style type casting (not recommended) 

      - `static_cast<datatype_that_we_want>(value/variable);`  
        C++ style type casting
       
## Result

- NIL