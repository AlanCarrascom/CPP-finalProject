# :video_game: CPP-finalProject
In this project we implement some basic concepts learned in the C/C++ course, such as the setters and getters, class instantiation, and object manipulation.

## :book: Content
- **ModeloNintendo.cpp**: Contains definition of all the functions used for the game.
- **ModeloNintendo.h**: Contains the declaration of all the functions used, as well as the call to all the libraries required.

## :warning: Notices
**Please read this section!** It's important for the proper compilation and execution of the program, as well as user experience.
If you're running the program on a UNIX-like system (MacOS or Linux), then **you'll not have to make any changes** to any file. Now, if you're on a Windows system, there are a few steps to make sure the code compiles and runs smoothly:
1. Go to the `.h` file and uncomment the line 4 `#include <windows.h>`.
2. Then go to the `.cpp` file and change all `sleep()` functions to `Sleep()` (Notice the capitalization).
  - This can be easily done in VS Code by finding the first occurrence of the `sleep()` function with `ctrl+f`.
  - Then selecting all other `sleep()` functions  with `ctrl + d` and finally typing `Sleep(tiempo)`.
