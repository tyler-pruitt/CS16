% Homework 9: Recursive functions
% CS16 - Winter 2021


------------------------------- --------------------------------------------------------
 __Due:__                       Thursday, March 11, 2021 (11:59 PM PST)
 __Points:__                    105
__Name:__                       `_______________________________________________________`
__Homework buddy:__             `_______________________________________________________`
------------------------------- --------------------------------------------------------

- You may collaborate on this homework with __at most__ one person, an optional "homework buddy."
- __Submission instructions:__ All questions are to be written (either by hand or typed) _in the provided spaces_ and turned in as a single PDF on Gradescope. If you submit handwritten solutions write legibly. We reserve the right to give 0 points to answers we cannot read. When you submit your answer on Gradescope, __be sure to select which portions of your answer correspond to which problem__ and clearly mark on the page itself which problem you are answering. We reserve the right to give 0 points to submissions that fail to do this. 

\pagenumbering{gobble}

1. (3 points) How does a recursive function know when to stop recursing?

```





```

2. (4 points) What is a stack overflow? When can it occur? What are the consequences?

```





```

3. (3 points) What is a LIFO scheme and how does it relate to stacks?

```



```


4. (15 points) Write a definition of a recursive function that finds the sum of the odd integers in the first $n$ numbers. Example, if $n = 8$, then the sum is: $(1 + 3 + 5 + 7) = 16$.

```cpp
int sumOdds(int n)
{



```

\pagebreak

5. (25 points) Write a definition of a _recursive_ function that finds the $n$th element in the following arithmetic numerical sequence: 3, 11, 27, 59, 123, ...
   I've started the program for you below, but it is missing the definition.
   _Hint_: First, figure out the recursive pattern as a linear equation, i.e. $a_n = x * a_{n-1} + y$. 
   You also have to identify the base case.
   Example outputs would look like this (there is no repeating loop---these are 2 separate runs):

```
Which element of the sequence would you like to know? 4
Element number 4 in the sequence is 59.

Which element of the sequence would you like to know? 7
Element number 7 in the sequence is 507.
```

```cpp
#include <iostream>
using namespace std;
int RecursiveFunc(int num);
int main() {
   int elementN;
   cout << “Which element of the sequence would you like to know? ”;
   cin >> elementN;
   cout << “Element number 4 in the sequence is ” 
        << RecursiveFunc(elementN) << endl;
   return 0;
}

//DEFINITION HERE:

```

\pagebreak

6. (25 points) The Fibonacci sequence is defined as a numerical sequence of integers that are the sum of the previous 2 integers. Starting with 0 and 1, the sequence becomes: $0, 1, 1, 2, 3, 5, 8, 13, ...$

   Write the definition of 2 functions: one recursive called `Fibo` (it finds the Nth element in a Fibonacci series) and one non-recursive called `SFS` that calls `Fibo`.

   `SFS` has an integer argument `n`. The pre-condition is that `n` is assumed to be smaller than 256. The post-condition is that SFS prints out all the squares of the Fibonacci sequence of the first `n` elements. For example, calling this line in `main` (just like this): 
   `SFS(7);`
   will print to standard out: `0 1 1 4 9 25 64`

   (You may assume `<cmath>` is already included.)

\pagebreak

7. (25 points) Write a definition of a recursive function that counts the number of the letter 'a' or 'A' (i.e. either upper-case or lower-case) in a string. Specifically, given a string variable, `sentence`, when we pass that into a function `CountA(sentence)`, the function returns an integer that's a count of the number of the letter 'a' or 'A' in the variable `sentence`. This function __must__ be a recursive one and cannot contain a loop.

```

```

\pagebreak

8. (5 points) The CS department is currently restructuring its lower-division curriculum (CS 16, 24, and 32). We want to gather feedback on the experience students are having in the current CS 16 curriculum. Please take the survey found in the following link. Your response will be recorded anonymously. To receive credit for this, please attach some proof that you took this survey (e.g., a screenshot at the end of survey). 

   `https://ucsb.co1.qualtrics.com/jfe/form/SV_0qVnEcqYnx9AJkV`