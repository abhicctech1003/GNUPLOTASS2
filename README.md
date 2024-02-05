# GNU Plot Assigment
This C++ project is designed to get X & Y coordinates of various shapes to plot geometry on gnuplot. The project follows a modular structure with separate header (.h) and implementation (.cpp) files for each class.

## Folder Structure
The project is organized into the following folders:

- **include**: Contains header files for each geometric shape class.
 
- **src**: Contains implementation files corresponding to each header file.

- **textfile**: Text files for each shape created.
 
- **main.cpp**: Main source file where the program execution starts.
## 1. Line
 
- Header: include/Line.h
 
- Implementation: src/Line.cpp
 
## 2. Triangle
 
- Header: include/Triangle.h
 
- Implementation: src/Triangle.cpp
 
## 3. Square
 
- Header: include/Square.h
 
- Implementation: src/Square.cpp

## 4. Rectangle
 
- Header: include/Rectangle.h
 
- Implementation: src/Rectangle.cpp
 
## 5. Circle
 
- Header: include/Circle.h
 
- Implementation: src/Circle.cpp
 
## 6. Ellipse
 
- Header: include/Ellipse.h
 
- Implementation: src/Ellipse.cpp

### Source files content

- `Line.cpp`: Contains the calcultion for X & Y coordinate values get printed in line txt file.
- `Triangle.cpp`: Contains the calcultion for X & Y coordinate values get printed in triangle txt file.
- `Square.cpp`: Contains the calcultion for X & Y coordinate values get printed in square txt file.
- `Rectangle.cpp`: Contains the calcultion for X & Y coordinate values get printed in rectangle txt file.
- `Circle.cpp`: Contains the calcultion for X & Y coordinate values get printed in circle txt file.
- `Ellipse.cpp`: Contains the calcultion for X & Y coordinate values get printed in ellipse txt file.

### main files content

- while() used for continous loop
- switch case used for choice of all the shapes 
- Object is created in individual shape case 
- Values for x & y are taken
- Call to Plot_Corrdinate() for printing coordinate

### Steps to plot geometry on gnu plot
- Copy the path of text file of shape which we have to plot.
- In gnu plot give command as `plot 'file_path' w lp` to get shape plotted.
 

