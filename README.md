# Implementation-of-Inheritance-in-CPP
Aim: To study and implementation of Inheritance in C++

Software used: Mingw compiler, visual studio code, online C++ compiler

Program 1 - Single Inheritance
Theory with explanation of the code: This C++ program demonstrates single inheritance, where one derived class inherits from a single base class. The base class car contains a string member a initialized to "skoda " and a method model() that prints "SUV". The derived class name inherits publicly from car, gaining access to its members, and adds its own string member b initialized to "octavia". In main(), an object u1 of class name is created. It calls model() from the base class and prints both a and b, resulting in the output.

Algorithm:

Start
Define a base class car with a string a and a method model()
Define a derived class name inheriting from car, with its own string b
In main(), create an object u1 of class name
Call model() using u1
Print values of a and b using u1
End
Program 2 - Multiple inheritance
Theory with explanation of the code: This program demonstrates multiple inheritance in C++, where the class Carr inherits from two base classes: Brand and Features. The Brand class contains a protected string brand initialized to "Mercedes-Benz", while Features defines a method classic() that prints "Features: Luxury". The derived class Carr adds a private member model, takes user input for it, and displays both brand and model using the display() method. In main(), an object c of class Carr is created, invoking both inherited and own methods.

Algorithm:

Start
Define class Brand with protected member brand and constructor
Define class Features with method classic()
Define class Carr inheriting from both Brand and Features
In Carr constructor, take input for model
Define display() to show brand and model
In main(), create object c of class Carr
Call display() and classic() using c
End
Program 3 - Multilevel Inheritance
Theory with explanation of the code: This program illustrates multilevel inheritance, where a class is derived from another derived class, forming a chain. The base class Food contains a string cuisine and a method type() that prints "Indian Subcontinental". The class Dish inherits from Food and adds its own member dish. The class Restaurant inherits from Dish and introduces the member name. In main(), an object f3 of class Restaurant accesses members and methods from all three levels of inheritance. The output confirms that Restaurant has inherited properties from both Dish and Food, showcasing how multilevel inheritance promotes structured hierarchy and reuse.

Algorithm:

Start
Define base class Food with member cuisine and method type()
Define class Dish inheriting from Food, with member dish
Define class Restaurant inheriting from Dish, with member name
In main(), create object f3 of class Restaurant
Call type() using f3
Print cuisine, dish, and name using f3
End
Program 4 - Hierarchical inheritance
Theory with explanation of the code: This program demonstrates hierarchical inheritance, where multiple derived classes inherit from a single base class. The base class Brand contains a protected string brand initialized to "Tata Motors" and a method showBrand() to display it. Two derived classes—Carr and Features—inherit from Brand. Carr adds a model member and displays both brand and model, while Features adds a method classic() to show car features. In main(), objects of both derived classes access the shared brand data and their own specific functionalities.

Algorithm:

Start
Define base class Brand with member brand and method showBrand()
Define class Carr inheriting from Brand, with member model and method display()
Define class Features inheriting from Brand, with method classic()
In main(), create object c of class Carr and call display()
Create object f of class Features and call classic()
End
Conclusion
Across all four inheritance models—single, multiple, multilevel, and hierarchical—your programs elegantly demonstrate how C++ enables structured and reusable object-oriented design. Each example builds on the concept of class relationships: single inheritance shows basic extension; multiple inheritance merges features from distinct sources; multilevel inheritance forms a logical chain of specialization; and hierarchical inheritance distributes shared traits across parallel branches. Together, these codes reflect your grasp of both syntax and theory, showcasing how inheritance simplifies complexity, promotes modularity, and enhances clarity. These foundational patterns are essential for scalable software design and pave the way for advanced concepts like polymorphism and abstraction.
