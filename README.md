# Python C extension
This is the practice of Python C extensions.  It is Python3 that I am practicing now!

## Files in each directory
* test.py: The test codes to run the module built from the C extension files.
* setup.py: The file for Python to build the C extension module.
* bind.c: The Python wrapper interface for the C extension module.
* libmypy.h: The header file of C extension module.
* libmypy.c: The source file of C extension module.
* Makefile: Aggregate the building scripts.

## 00-HelloWorld
It is a general hello world practice.  One may start from here for the simplest Python C extension example.

## 01-HeyMan
It is a C extension practice who gets arguments passed from Python.  The heyman function will echo the passed name and the number.
