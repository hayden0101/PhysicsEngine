To compile and run this script, first ensure C++ is installed on your system
and accessible from any Linux/Unix environment.

To compile the program:
$ g++ -std=c++17 main.cpp newVector.cpp State.cpp rk.cpp MassSpring.cpp -o simulator

To run the program:
$ ./ ...

This command will either send an error message if the script fails,
or a confirmation message if the script works.