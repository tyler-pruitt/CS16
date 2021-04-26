% Homework 8: Classes++
% CS16 - Winter 2021


------------------------------- --------------------------------------------------------
 __Due:__                       Thursday, March 4, 2021 (11:59 PM PST)
 __Points:__                    40
__Name:__                       `_______________________________________________________`
__Homework buddy:__             `_______________________________________________________`
------------------------------- --------------------------------------------------------

- You may collaborate on this homework with __at most__ one person, an optional "homework buddy."
- __Submission instructions:__ All questions are to be written (either by hand or typed) _in the provided spaces_ and turned in as a single PDF on Gradescope. If you submit handwritten solutions write legibly. We reserve the right to give 0 points to answers we cannot read. When you submit your answer on Gradescope, __be sure to select which portions of your answer correspond to which problem__ and clearly mark on the page itself which problem you are answering. We reserve the right to give 0 points to submissions that fail to do this. 

\pagenumbering{gobble}

1. (4 points) According to lecture and the textbook, what are the rules of class definition in order to make a class an abstract data type (ADT)? 

```







```

2. (2 points) What are derived classes and what mechanism do they use in order to fulfill what they need to do? 

```






```

3. (2 points) Can a derived class directly access by name a private member variable of the parent class? 

```






```

4. (2 points) Suppose the class `SportsCar` is a publicly derived class of a class `Automobile`. Suppose also that the class `Automobile` has public member functions named `accelerate` and `addGas`. Will an object of the class `SportsCar` have member functions named `accelerate` and `addGas`? 

```




```

5. (14 points) Suppose your program contains the following class definition:

```cpp
class Automobile {
   public:
      void set_price(double new_price);
      void set_profit(double new_profit);
      double get_price();
   private:
      double price;
      double profit;
      double get_profit();
};
```

Suppose the main part of your program contains the following declaration and that the program somehow sets the values of all the member variables to some
values:

```cpp
Automobile hyundai, jaguar; 
```

Which of the following statements are then __not__ allowed in the main part of your program and explain __why__.

(a) `hyundai.price = 4999.99;`
(b) `jaguar.set_price(30000.97);`
(c) `double a_price, a_profit;`
(d) `a_price = jaguar.get_price();`
(e) `a_profit = jaguar.get_profit();`
(f) `a_profit = hyundai.get_profit();`
(g) `if (hyundai == jaguar) {hyundai = jaguar;}`


```

```

\pagebreak

6. (16 points) Suppose your program contains the following class definition:

```cpp
class TwoNumbers {
   public:
      TwoNumbers(int n1, int n2);
      TwoNumbers(); // initializes num1, num2 to 0
      double sum(); // returns sum of num1 & num2
      double difference(); // returns diff. of num1 from num2
      double max(); // returns larger of num1, num2
   private:
      double num1, num2;
};
```

a. (10 points) Given the comments shown, give definitions to all 5 of these member functions/constructors:

```

```

\pagebreak

b. (2 points) Consider these instructions in `main()`:

```cpp
TwoNumbers thisOne, thatOne(5,7);
thisOne.num1++;
thisOne.num2 -= 7;
thatOne.num2 = thatOne.sum() + thisOne.difference();
cout << thisOne.max() / thatOne.max();
```

Explain all the reasons __why__ this code will not compile.

```





```

c. (2 points) What would you change to the class definition to make this code compile?

```





```

d. (2 points) When you fix it, what would these instructions do?

```

```