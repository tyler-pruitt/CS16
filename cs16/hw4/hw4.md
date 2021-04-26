% Homework 4: Arrays and Functions
% CS16 - Winter 2021


------------------------------- --------------------------------------------------------
 __Due:__                       Thursday, February 4, 2021 (11:59 PM PST)
 __Points:__                    70
__Name:__                       `_______________________________________________________`
__Homework buddy:__             `_______________________________________________________`
------------------------------- --------------------------------------------------------

- You may collaborate on this homework with __at most__ one person, an optional "homework buddy."
- __Submission instructions:__ All questions are to be written (either by hand or typed) _in the provided spaces_ and turned in as a single PDF on Gradescope. If you submit handwritten solutions write legibly. We reserve the right to give 0 points to answers we cannot read. When you submit your answer on Gradescope, __be sure to select which portions of your answer correspond to which problem__ and clearly mark on the page itself which problem you are answering. We reserve the right to give 0 points to submissions that fail to do this. 

\pagenumbering{gobble}

1. (2 points) What happens if you forget the return statement in a void function?

```




```

2. (2 points) In C++11, can you define a function inside the body of another function? And can you call a function in the body of another function?

```





```

3. (2 points) What is the difference between a call-by-reference parameter and a call-by-value parameter? As a programmer, when might you decide to use one over the other? 

```





```

4. (4 points) Write a void function definition for a function called `zero_both` with 2 parameters, both which are variables of type `int`, and set the value of both variables to 0. Describe if you picked the function parameters to be call-by-reference or call-by-value __and why?__

```

```

\pagebreak

5. (8 points) Assume we want to add all the numbers inside of a 3-dimensional int array that is declared as: `int R[3][2][3] = {1};`

a. (2 points) How many loops do we need to use to do this?

```



```

b. (2 points) Which would be better to use: `for` loops or `while` loops and __why__?

```





```

c. (2 points) What is the total number of elements in this array?

```



```

d. (2 points) What __values__ do the array elements have when the above declaration is executed?

```



```

6. (6 points) One way to force a "one time" data type conversion is to use the `static_cast` conversion. Take for example the following code snippet:

```cpp
int number = 7;
int denom = 5;
double var1 = number / denom;
double var2 = static_cast<double>(number) / denom;
int var3 = static_cast<double>(number) / denom;
```

   a. (3 points) Would you expect `var1`, `var2`, and `var3` to be equal to each other? Why or why not?

   ```






   ```

   b. (3 points) Write a function definition for a function that takes one argument of type `int` and one argument of type `double`, and returns a value of type `double` that is the _real number_ average of the two arguments. 

   ```

   ```

\pagebreak

7. (30 points) Complete following function definition for the function `find()` that returns _how many times a value appears in an array_. The function takes three arguments: (1) `list`, an array of integers; (2) `asize`, a non-negative integer that indicates the size of the array `list`; (3) `target`, an integer value that is being searched for. All the function should do is return an integer number that indicates how many times the target integer that is being searched for appears in the input array `list`. It should return 0 if that value is not in the array. 

```cpp
int find(int list[], int asize, int target) {





















}
```

8. (6 points) The book and lecture mention variable tracing and stubbing. Describe what they are and how they are best used.

```











```

\pagebreak

9. (10 points) Write out the contents of a `makefile`, based on the examples from lecture and lab, for a project that compiles a program called `NSA.cpp` that also “includes” a file called `secrets.h`. The compilation must adhere to C++ version 11 standards and should show all warnings. You should also add a `clean` section (again, as per the examples I’ve shown you). Make sure you use the correct syntax!

```













```
