**Abstract**

The project examines the procedure of assembling a Graphical User Interface using C++ programming in Visual Studio 2019 to develop and showcase linear regression and nonlinear regression models using functions that calculate various terms and compute arrays. The methods used include creating a class, defining private and public function variables, setting properties of elements, implementation of functions, and testing &amp; debugging. The results include linear regression and nonlinear regression plots on the graphical user interface.

**Introduction**

Object oriented programming in C++ is a programming style that is associated with the concept of Class, Objects, and other types of concepts revolving around these two. The goal of OOP is to combine together the data and the functions that operate on them so that no other part of code can access this data except for that specific function. Compiler languages can be used anywhere, increasingly in robotics, where it can be used in control loops, image processing, and to interface low-level hardware.

In this project, I will be focusing mostly on class and objects to create regression analyses. This report will be focused on the following points:

- Creating a stand-alone class that does regression analysis without the use of GUI.
- Create a variable in my GUI of the class and fill in and create the user experience for using the class.
- Methods used during the creation of class, object, and variables
- Discussion on results obtained and conclude with following remarks.

Upon completion of this project, it will be evident that the use of functions to do calculations, as well as loops, will be beneficial when used in Graphical User Interface because it can plot models by using tools that make the process simpler.

**Software**

The software being used is Visual Studio 2019. Visual Studio 2019 is an integrated development environment from Microsoft. It&#39;s used to develop computer programs, and it consists of built-in languages including C++ and contains a directory with C++/CLI which can be used to create a Graphical User Interface (GUI). The C++/CLI specification is used to write managed code, and mixed-mode code (native and managed code mixed). Native code is a computer programming code that is compiled to run with a particular processor, and it&#39;s set of instructions, whereas a managed code is a computer program code that requires the management of a virtual machine, run time, or framework. In this project, managed code will be used.

It also includes a code editor that supports syntax highlighting and code completion for variables, functions, methods and loops. Visual Studio also includes a debugger that debugs at both the source and machine level. It creates memory dumps and loads them later for debugging, as well.

Visual Studio includes a host of visual designers to aid in the development of applications, for this project, Visual C++ uses designer to design a UI graphically. Tools such as object browser and data explorer are used, too.

**Methods**

During this project, I built the linear and nonlinear regression models by doing the following:

Create windows forms, by the default project format. Creates a blank form to add buttons, rename them, add chart.

Set the properties of the elements in the form (includes color, type of graph, size of boxes/buttons, legend for graph).

For this step, I tested with adding multiple plots on same graph and tried doing that on separate graphs

Create a class for linear regression.
Define all private and public member variables including all accessors &amp; mutators.


I tested this by making a console application, obtaining values, and cross-checking with pretrained values. Additionally, I fixed the scope and data extraction issues by rearranging the class.

Define and implement functions using linear regression formulas and find predicted y.


Again, I tested by making a console application and cross-checking with pretrained values, but this time I did it for the whole linear regression model.

The Open File button takes in file path and takes input into member variables.

I then moved on to my nonlinear model. First, I created a class for non-linear.


The same steps are used for the non-linear regression model, but the difference is the slope function which first calculates linear regression, and then converts it to the exponential form.


- Integration of the GUI and classes.
- Declare object of both classes inside forms1.h
- Create functions for button clicks
- Put data points of the chart when button is clicked (inside the function)

_Testing &amp; Debugging will be done using the same methods for non-linear regression, as well._

1. First button click is the open File button. This Calls the openFile functions in the classes with the file path and checks if it&#39;s open.
  - Calculate slope, calls function, outputs value into multiline text box. Checks if file is open or not.


**IMPORTANT:**

It is necessary to state that the following decisions were made:

- The variables were declared as static because otherwise it would not work due to the managed class issue.
- The standard strings were converted to system strings in both regression models to output text in the textbox.


**Results**

The linear regression and nonlinear regression models were plotted. Debugging was performed after each step to ensure that all errors were solved for the overall regression functions.

This report summarizes the regression models, variables, functions, and classes used in Project 1. The general procedure included creating a class, defining and implementing functions, and finding predicted y value.

In conclusion, it is found that both linear and nonlinear models can be plotted using GUI. Although I already have experience using C++ programming, I got to learn about GUIs and got to experience that they are beneficial when plotting and calculating analytical regression models.

Even though this project touched the basics of object oriented programming, it showed what simple functions and calculations can create using data. Knowing this about Graphical User Interface, I will be able to build upon this and expand further when analyzing analytical models and conducting regression analysis.

