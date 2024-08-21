# Static Library in C

A brief description on how to create your own static Library in C.

![Complie Steps](https://jsommers.github.io/cbook/_images/compilesteps.png)


**Some Basics Before :**

- For creating an Object File.
```
gcc -c "fileName.c" -o "OtherName.o"
```
- For making Output file i.e Executable out of it.
```
gcc -o "name" "ObjectFile.o"
```

 \
**First we will create the Library itself :**

- Make Object file of all files to put in library.
```
gcc -c "fileName.c" -o "OtherName.o"
```

- Make archive of all Object Files.
```
ar rcs "lib_name.a" "object1.o" "object2.o"
```


**Now we complie with our library**
- Object file for main
```
gcc -c "main.c" -o "main.o"
```

- Linking with our library.
```
gcc -o main main.o -L. ./PATH/TO/LIBRARY
```
