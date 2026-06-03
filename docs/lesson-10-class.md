# Lesson 10 - Class in C++

## What I learned

- Some Syntax of C++:

    - Syntax of class declaration and definition:
      ```
        class class_name
        {
        private: 
            data_type1 member_variable1;
            data_type2 member_variable2;

        public:
            class_name(data_type1 parameter1, data_type2 parameter2, ...)
            {
                member_variable1 = parameter1;
                member_variable2 = parameter2;
            }

            void member_function1(parameter_list)
            {
                // function body
            }
        };
      ```  
    
    - `class_name class_instance(parameter1, parameter2, ...);`  
      class instantiation (creating an object of the class)

    - `class_name.member_function(parameter_list);`  
       calling a member function of the class instance

    - `return_datatype function_name () const {...};`  
       `const` here means that the function will not modify any member variables of the class
       
## Result

- NIL