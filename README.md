# ft_printf by RaphRsl
![image](https://github.com/user-attachments/assets/a2a4608b-763e-43a8-ac2f-fdc2860b9baa)

## Description

The **ft_printf** project aims to recreate the widely-used C function **printf()**. This exercise introduces variadic functions, allowing the handling of a variable number of arguments. By rewriting **printf()** from scratch, we enhance our understanding of core programming concepts and deepen our skills in C.

## Overview of the Project

- **What the Project Is:**
  The **ft_printf** project is a programming exercise where I implement a custom version of the standard **printf()** function, focusing on handling various data types and formatting options.
  
- **Main Technical Features or Functionalities:** 
  - Implement basic formatting conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
  - Use variadic arguments to manage a variable number of input parameters.
  - Ensure proper memory management and error handling, including no leaks or crashes.
  - Create a static library (`libftprintf.a`) to integrate with future projects.
  
- **Languages**:
  - C
  
- **Tools and technical notions Involved:**
  Variadic functions / Memory management / String manipulation / Type conversions / Library creation (ar command) / Makefile configuration / Error handling

## Key Features

- Support for character and string output
- Hexadecimal and decimal number formatting
- Pointer address printing in hexadecimal format
- Percent sign output
- Robust error handling to avoid crashes and memory leaks
- Integration with **libft** for future use in school projects

## Key Parts from an Academic View

#### Subject summary

##### Requirements
- Must be done in C
- Must follow the Norm; any violations will lead to a grade of 0
- All memory must be properly managed and freed to prevent leaks
- Submission of a **Makefile** to compile the project using the appropriate flags
- Support for using **libft** as an external library

##### Mandatory part
- Implement the **ft_printf()** function with the prototype:
  ```c
  int ft_printf(const char *, ...);
  ```
- Handle the following conversions:
  - `%c` for characters
  - `%s` for strings
  - `%p` for pointers
  - `%d` and `%i` for integers
  - `%u` for unsigned integers
  - `%x` and `%X` for hexadecimal representation
  - `%%` for the percent sign
- The library must be created using the **ar** command.


<br><br>
<hr style="width: 50%; margin: auto;">
<br><br>

*Good luck!* Don't hesitate to reach out if you have questions or suggestions for improving this README file! Feel free to star the repository if you find it useful and want to support me! ⭐ Sharing it with friends who might be struggling will also make you a hero!

## Author and Contributing

This project was created by RaphRsl as part of my curriculum at École 42 Paris (username rroussel). It is intended for academic purposes only. If you found this project useful, please consider starring the repository to show your support! ⭐

### How to Contribute

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-name
   ```
3. Commit your changes:
   ```bash
   git commit -m 'Add new feature'
   ```
4. Push to the branch:
   ```bash
   git push origin feature-name
   ```
5. Open a pull request.
