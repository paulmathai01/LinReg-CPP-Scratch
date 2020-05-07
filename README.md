CSC 5050: Algorithms and Data Structures

Mathai Paul

Project 1

Tuesday February 4, 2020

**Table of Contents**

Abstract……………………………………………………………………………………………3

Introduction…………………………………..……………………………………………………4

Software……………………………………………………………………………………...……5

Methods……………………………………………………………………………………...........6

Results…………………………………………………………………………..………………..11

Discussion………………………………………………………………………………………..11

Conclusion……………………………………………………………………………………….12

Appendix...……………………………………………………………………………………….12

Abstract

The project examines the procedure of assembling a Graphical User Interface using C++ programming in Visual Studio 2019 to develop and showcase linear regression and nonlinear regression models using functions that calculate various terms and compute arrays. The methods used include creating a class, defining private and public function variables, setting properties of elements, implementation of functions, and testing &amp; debugging. The results include linear regression and nonlinear regression plots on the graphical user interface.

Introduction

Object oriented programming in C++ is a programming style that is associated with the concept of Class, Objects, and other types of concepts revolving around these two. The goal of OOP is to combine together the data and the functions that operate on them so that no other part of code can access this data except for that specific function. Compiler languages can be used anywhere, increasingly in robotics, where it can be used in control loops, image processing, and to interface low-level hardware.

In this project, I will be focusing mostly on class and objects to create regression analyses. This report will be focused on the following points:

- Creating a stand-alone class that does regression analysis without the use of GUI.
- Create a variable in my GUI of the class and fill in and create the user experience for using the class.
- Methods used during the creation of class, object, and variables
- Discussion on results obtained and conclude with following remarks.

Upon completion of this project, it will be evident that the use of functions to do calculations, as well as loops, will be beneficial when used in Graphical User Interface because it can plot models by using tools that make the process simpler.

Software

The software being used is Visual Studio 2019. Visual Studio 2019 is an integrated development environment from Microsoft. It&#39;s used to develop computer programs, and it consists of built-in languages including C++ and contains a directory with C++/CLI which can be used to create a Graphical User Interface (GUI). The C++/CLI specification is used to write managed code, and mixed-mode code (native and managed code mixed). Native code is a computer programming code that is compiled to run with a particular processor, and it&#39;s set of instructions, whereas a managed code is a computer program code that requires the management of a virtual machine, run time, or framework. In this project, managed code will be used.

It also includes a code editor that supports syntax highlighting and code completion for variables, functions, methods and loops. Visual Studio also includes a debugger that debugs at both the source and machine level. It creates memory dumps and loads them later for debugging, as well.

Visual Studio includes a host of visual designers to aid in the development of applications, for this project, Visual C++ uses designer to design a UI graphically. Tools such as object browser and data explorer are used, too.

Methods

During this project, I built the linear and nonlinear regression models by doing the following:

1. Create windows forms, by the default project format. Creates a blank form to add buttons, rename them, add chart.

1. Set the properties of the elements in the form (includes color, type of graph, size of boxes/buttons, legend for graph).

![](RackMultipart20200507-4-180inre_html_1d8dec7ce317a9d.jpg)

_Testing &amp; Debugging_: For this step, I tested with adding multiple plots on same graph and tried doing that on separate graphs

1. Create a class for linear regression.
  - Define all private and public member variables including all accessors &amp; mutators.

![](RackMultipart20200507-4-180inre_html_4167f9d32524a32b.jpg)

_Test &amp; debugging_: I tested this by making a console application, obtaining values, and cross-checking with pretrained values. Additionally, I fixed the scope and data extraction issues by rearranging the class.

1. Define and implement functions using linear regression formulas and find predicted y.

![](RackMultipart20200507-4-180inre_html_a68e66dca00de65d.jpg)

_Testing &amp; debugging_: Again, I tested by making a console application and cross-checking with pretrained values, but this time I did it for the whole linear regression model.

1. The Open File button takes in file path and takes input into member variables.

![](RackMultipart20200507-4-180inre_html_731a70a052eb616d.jpg)

_This plots the linear regression line along with the original data when you click on the &quot;Calculate Lin\_Reg&quot; button._

1. I then moved on to my nonlinear model. First, I created a class for non-linear.

![](RackMultipart20200507-4-180inre_html_63adb0119cf7b1c1.jpg)

1. The same steps are used for the non-linear regression model, but the difference is the slope function which first calculates linear regression, and then converts it to the exponential form.

![](RackMultipart20200507-4-180inre_html_17f022538553d839.jpg)

- Integration of the GUI and classes.
- Declare object of both classes inside forms1.h
- Create functions for button clicks
- Put data points of the chart when button is clicked (inside the function)

_Testing &amp; Debugging will be done using the same methods for non-linear regression, as well._

1. First button click is the open File button. This Calls the openFile functions in the classes with the file path and checks if it&#39;s open.
  - Calculate slope, calls function, outputs value into multiline text box. Checks if file is open or not.

![](RackMultipart20200507-4-180inre_html_1f6d26ab9d217564.jpg)

**IMPORTANT:**

It is necessary to state that the following decisions were made:

- The variables were declared as static because otherwise it would not work due to the managed class issue.
- The standard strings were converted to system strings in both regression models to output text in the textbox.

![](RackMultipart20200507-4-180inre_html_db301d8ac150425b.jpg)

Results

The linear regression and nonlinear regression models were plotted. Debugging was performed after each step to ensure that all errors were solved for the overall regression functions.

![](RackMultipart20200507-4-180inre_html_731a70a052eb616d.jpg) ![](RackMultipart20200507-4-180inre_html_1f6d26ab9d217564.jpg)

**Linear Regression Nonlinear Regression**

The two results from clicking the &quot;Calculate\_Lin\_Reg&quot; and &quot;Calculate Non\_Lin\_Reg&quot; buttons.

Discussion

For this project, my group member and I got the linear regression and nonlinear regression models plotted. I learned Graphical User Interface (GUI) and Windows forms. I had the opportunity to learn how to change the parameters in the form, which included colors, text, and buttons, and I integrated console applications with GUI. Because we attempted the nonlinear regression, I learned that we had to create a class and convert it to the exponential form. Also, as mentioned in the &quot;Important&quot; section, variables were labeled as static because the program would not work otherwise, due to the managed class issue.

Conclusion

This report summarizes the regression models, variables, functions, and classes used in Project 1. The general procedure included creating a class, defining and implementing functions, and finding predicted y value.

In conclusion, it is found that both linear and nonlinear models can be plotted using GUI. Although I already have experience using C++ programming, I got to learn about GUIs and got to experience that they are beneficial when plotting and calculating analytical regression models.

Even though this project touched the basics of object oriented programming, it showed what simple functions and calculations can create using data. Knowing this about Graphical User Interface, I will be able to build upon this and expand further when analyzing analytical models and conducting regression analysis.

APPENDIX

CODE:

#include &quot;pch.h&quot;

#include &quot;Lin\_reg.h&quot;

#include &quot;Nonlin\_reg.h&quot;

#include \&lt;iostream\&gt;

#include \&lt;iomanip\&gt;

#include \&lt;string\&gt;

#include\&lt;sstream\&gt;

//auto genarated code

namespace CppCLRWinformsProjekt {

using namespace System;

using namespace System::ComponentModel;

using namespace System::Collections;

using namespace System::Windows::Forms;

using namespace System::Data;

using namespace System::Drawing;

//declaration of static objects to implement iterations of learning

static Lin\_reg lr\_obj;

static Nonlin\_reg nlr\_obj;

public ref class Form1 : public System::Windows::Forms::Form

{

public:

Form1(void)

{

InitializeComponent();

}

protected:

~Form1()

{

if (components)

{

delete components;

}

}

protected:

private: System::Windows::Forms::Button^ button1;

private: System::Windows::Forms::Button^ button2;

private: System::Windows::Forms::TextBox^ textBox2;

private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;

private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

private: System::Windows::Forms::Button^ button3;

private:

System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

void InitializeComponent(void)

{

System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());

System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());

System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

this-\&gt;button1 = (gcnew System::Windows::Forms::Button());

this-\&gt;button2 = (gcnew System::Windows::Forms::Button());

this-\&gt;textBox2 = (gcnew System::Windows::Forms::TextBox());

this-\&gt;folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());

this-\&gt;chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());

this-\&gt;button3 = (gcnew System::Windows::Forms::Button());

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;(this-\&gt;chart1))-\&gt;BeginInit();

this-\&gt;SuspendLayout();

//

// button1

//

this-\&gt;button1-\&gt;Location = System::Drawing::Point(254, 19);

this-\&gt;button1-\&gt;Margin = System::Windows::Forms::Padding(2, 3, 2, 3);

this-\&gt;button1-\&gt;Name = L&quot;button1&quot;;

this-\&gt;button1-\&gt;Size = System::Drawing::Size(67, 23);

this-\&gt;button1-\&gt;TabIndex = 1;

this-\&gt;button1-\&gt;Text = L&quot;Open File&quot;;

this-\&gt;button1-\&gt;TextAlign = System::Drawing::ContentAlignment::BottomCenter;

this-\&gt;button1-\&gt;UseVisualStyleBackColor = true;

this-\&gt;button1-\&gt;Click += gcnew System::EventHandler(this, &amp;Form1::button1\_Click);

//

// button2

//

this-\&gt;button2-\&gt;Location = System::Drawing::Point(320, 479);

this-\&gt;button2-\&gt;Margin = System::Windows::Forms::Padding(2, 3, 2, 3);

this-\&gt;button2-\&gt;Name = L&quot;button2&quot;;

this-\&gt;button2-\&gt;Size = System::Drawing::Size(128, 43);

this-\&gt;button2-\&gt;TabIndex = 2;

this-\&gt;button2-\&gt;Text = L&quot;Calculate Lin\_Reg&quot;;

this-\&gt;button2-\&gt;UseVisualStyleBackColor = true;

this-\&gt;button2-\&gt;Click += gcnew System::EventHandler(this, &amp;Form1::button2\_Click);

//

// textBox2

//

this-\&gt;textBox2-\&gt;AcceptsReturn = true;

this-\&gt;textBox2-\&gt;AcceptsTab = true;

this-\&gt;textBox2-\&gt;Location = System::Drawing::Point(137, 47);

this-\&gt;textBox2-\&gt;Margin = System::Windows::Forms::Padding(2);

this-\&gt;textBox2-\&gt;Multiline = true;

this-\&gt;textBox2-\&gt;Name = L&quot;textBox2&quot;;

this-\&gt;textBox2-\&gt;ScrollBars = System::Windows::Forms::ScrollBars::Both;

this-\&gt;textBox2-\&gt;Size = System::Drawing::Size(311, 135);

this-\&gt;textBox2-\&gt;TabIndex = 4;

//

// chart1

//

this-\&gt;chart1-\&gt;BackColor = System::Drawing::Color::Transparent;

chartArea1-\&gt;Name = L&quot;ChartArea1&quot;;

this-\&gt;chart1-\&gt;ChartAreas-\&gt;Add(chartArea1);

legend1-\&gt;Alignment = System::Drawing::StringAlignment::Center;

legend1-\&gt;Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;

legend1-\&gt;Name = L&quot;Legend1&quot;;

legend1-\&gt;TableStyle = System::Windows::Forms::DataVisualization::Charting::LegendTableStyle::Tall;

this-\&gt;chart1-\&gt;Legends-\&gt;Add(legend1);

this-\&gt;chart1-\&gt;Location = System::Drawing::Point(12, 173);

this-\&gt;chart1-\&gt;Name = L&quot;chart1&quot;;

series1-\&gt;ChartArea = L&quot;ChartArea1&quot;;

series1-\&gt;ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;

series1-\&gt;Legend = L&quot;Legend1&quot;;

series1-\&gt;Name = L&quot;Original Data&quot;;

series2-\&gt;ChartArea = L&quot;ChartArea1&quot;;

series2-\&gt;ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

series2-\&gt;Legend = L&quot;Legend1&quot;;

series2-\&gt;Name = L&quot;Predicted Line&quot;;

series3-\&gt;ChartArea = L&quot;ChartArea1&quot;;

series3-\&gt;ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;

series3-\&gt;Legend = L&quot;Legend1&quot;;

series3-\&gt;Name = L&quot;Non-Linear&quot;;

this-\&gt;chart1-\&gt;Series-\&gt;Add(series1);

this-\&gt;chart1-\&gt;Series-\&gt;Add(series2);

this-\&gt;chart1-\&gt;Series-\&gt;Add(series3);

this-\&gt;chart1-\&gt;Size = System::Drawing::Size(552, 300);

this-\&gt;chart1-\&gt;TabIndex = 5;

this-\&gt;chart1-\&gt;Text = L&quot;chart1&quot;;

//

// button3

//

this-\&gt;button3-\&gt;Location = System::Drawing::Point(137, 479);

this-\&gt;button3-\&gt;Margin = System::Windows::Forms::Padding(2, 3, 2, 3);

this-\&gt;button3-\&gt;Name = L&quot;button3&quot;;

this-\&gt;button3-\&gt;Size = System::Drawing::Size(128, 43);

this-\&gt;button3-\&gt;TabIndex = 6;

this-\&gt;button3-\&gt;Text = L&quot;Calculate Non\_Lin\_Reg&quot;;

this-\&gt;button3-\&gt;UseVisualStyleBackColor = true;

this-\&gt;button3-\&gt;Click += gcnew System::EventHandler(this, &amp;Form1::button3\_Click);

//

// Form1

//

this-\&gt;AutoScaleDimensions = System::Drawing::SizeF(6, 13);

this-\&gt;AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

this-\&gt;ClientSize = System::Drawing::Size(576, 565);

this-\&gt;Controls-\&gt;Add(this-\&gt;textBox2);

this-\&gt;Controls-\&gt;Add(this-\&gt;button3);

this-\&gt;Controls-\&gt;Add(this-\&gt;chart1);

this-\&gt;Controls-\&gt;Add(this-\&gt;button2);

this-\&gt;Controls-\&gt;Add(this-\&gt;button1);

this-\&gt;Margin = System::Windows::Forms::Padding(2, 3, 2, 3);

this-\&gt;Name = L&quot;Form1&quot;;

this-\&gt;Text = L&quot;Calculate Linear Regression&quot;;

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;(this-\&gt;chart1))-\&gt;EndInit();

this-\&gt;ResumeLayout(false);

this-\&gt;PerformLayout();

}

//button click event

private: System::Void button1\_Click(System::Object^ sender, System::EventArgs^ e) {

textBox2-\&gt;AppendText(&quot;Opening C:\\CSC5050\\Lin\_reg\\Text.txt&quot;);

textBox2-\&gt;AppendText(&quot;\r\n&quot;);

//both objects call their openfile function to open the file

lr\_obj.openfile(&quot;C:\\CSC5050\\Lin\_reg\\Text.txt&quot;);

nlr\_obj.openfile(&quot;C:\\CSC5050\\Lin\_reg\\Text.txt&quot;);

if (!lr\_obj.Infile.is\_open())

{

//error message if file is not found

textBox2-\&gt;AppendText(&quot;File not found&quot;);

textBox2-\&gt;AppendText(&quot;\r\n&quot;);

textBox2-\&gt;AppendText(&quot;Please restart the program&quot;);

textBox2-\&gt;AppendText(&quot;\r\n&quot;);

}

else if(lr\_obj.Infile.is\_open())

{

//text indicating successfull read

textBox2-\&gt;AppendText(&quot;Successfully Opened File&quot;);

//calling the slope function for both the objects

lr\_obj.slope();

nlr\_obj.slope();

//Conversition of std::string to System::String to match the arguments of the AppendText function

string strm = to\_string(lr\_obj.getm());

String^ strm1 = gcnew String(strm.c\_str());

textBox2-\&gt;AppendText(&quot;\r\nSlope = &quot;);

textBox2-\&gt;AppendText(strm1);

//double also had to be converted for slope and intercept values

string strb = to\_string(lr\_obj.getb());

String^ strb1 = gcnew String(strb.c\_str());

textBox2-\&gt;AppendText(&quot;\r\nIntercept = &quot;);

textBox2-\&gt;AppendText(strb1);

}

lr\_obj.Infile.close();

//close the file

//open new file

nlr\_obj.openfile(&quot;C:\\CSC5050\\Lin\_reg\\Text.txt&quot;);

if (!nlr\_obj.Infile2.is\_open())

{

//similar error message as above

textBox2-\&gt;AppendText(&quot;File not found&quot;);

textBox2-\&gt;AppendText(&quot;\r\n&quot;);

textBox2-\&gt;AppendText(&quot;Please restart the program&quot;);

textBox2-\&gt;AppendText(&quot;\r\n&quot;);

}

else if (nlr\_obj.Infile2.is\_open())

{

//converstion to System::String

string nstrm = to\_string(nlr\_obj.a);

String^ nstrm1 = gcnew String(nstrm.c\_str());

textBox2-\&gt;AppendText(&quot;\r\nA = &quot;);

textBox2-\&gt;AppendText(nstrm1);

string nstrb = to\_string(nlr\_obj.b);

String^ nstrb1 = gcnew String(nstrb.c\_str());

textBox2-\&gt;AppendText(&quot;\r\nB = &quot;);

textBox2-\&gt;AppendText(nstrb1);

}

nlr\_obj.Infile2.close();

//close the file

}

//button click event definitions

private: System::Void button2\_Click(System::Object^ sender, System::EventArgs^ e) {

for (int i = 0; i \&lt; lr\_obj.n; i++)

{

//imports the data into the series to plot

this-\&gt;chart1-\&gt;Series[&quot;Original Data&quot;]-\&gt;Points-\&gt;AddXY(lr\_obj.X\_var[i], lr\_obj.Y\_var[i]);

this-\&gt;chart1-\&gt;Series[&quot;Predicted Line&quot;]-\&gt;Points-\&gt;AddXY(lr\_obj.X\_var[i], lr\_obj.Y\_fit[i]);

}

}

private: System::Void button3\_Click(System::Object^ sender, System::EventArgs^ e) {

for (int i = 0; i \&lt; nlr\_obj.n; i++)

{

//imports the non-linear line data to the chart

this-\&gt;chart1-\&gt;Series[&quot;Non-Linear&quot;]-\&gt;Points-\&gt;AddXY(nlr\_obj.X\_var[i], nlr\_obj.Y\_fit[i]);

}

}

};

//required libraries for file handling

#include &quot;pch.h&quot;

#include \&lt;fstream\&gt;

#include \&lt;iostream\&gt;

using namespace std;

class Lin\_reg

{

private:

//similarly these were the only ones that could be made private

double sumX = 0, sumY = 0,sumXY = 0, sumX2 = 0;

double m, b;

public:

int n = ::size;

double X\_var[::size];

double Y\_var[::size];

double Y\_fit[::size];

ifstream Infile;

//accessors and mutators for the slope and intercept

double getm();

double getb();

void setn(int n);

void slope();

//default value is given to avoid problems.

//it is an absolute value hence you will have to change this based on where the file is, it is given in the project folder.

void openfile(string file\_path = &quot;C:\\CSC5050\\Lin\_reg\\Text.txt&quot;);

};

}

//required libraries for file handling

#include &quot;pch.h&quot;

#include \&lt;fstream\&gt;

#include \&lt;iostream\&gt;

using namespace std;

class Nonlin\_reg

{

private:

//only these variables could be made private since others are accessed outside the scope of the class

double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

public:

//function declaration and member variable initialisation

ifstream Infile2;

double X\_var[::size] = { 0 };

double Y\_var[::size] = { 0 };

double Y\_fit[::size] = { 0 };

int n = ::size;

double a0 = 0, a1 = 0, a = 0, b = 0;

void setn(int n);

//default value is given to avoid problems.

//it is an absolute value hence you will have to change this based on where the file is, it is given in the project folder.

void openfile(string file\_path = &quot;C:\\CSC5050\\Lin\_reg\\Text.txt&quot;);

; void slope();

};

#include &quot;pch.h&quot;

#include &quot;Lin\_reg.h&quot;

#include \&lt;iostream\&gt;

#include \&lt;fstream\&gt;

void Lin\_reg::slope()

{

//this fucntion calculates the sum values and the regression contants

for (int i = 0; i \&lt; n; i++)

{

sumX += X\_var[i];

sumY += Y\_var[i];

sumXY += X\_var[i] \* Y\_var[i];

sumX2 += X\_var[i] \* X\_var[i];

}

//m and b are calculated for y = b+m\*x form

m = ((n \* sumXY) - (sumX \* sumY)) / ((n \* sumX2) - sumX);

b = ((sumX2 \* sumY) - (sumX \* sumXY)) / ((n \* sumX2) - sumX);

//Y = b + m\*X

//predicted y values are genarated

for (int i = 0; i \&lt; n; i++)

{

Y\_fit[i] = b + (m \* X\_var[i]);

}

}

//accessor function for m

double Lin\_reg::getm()

{

return m;

}

//accessor function for b

double Lin\_reg::getb()

{

return b;

}

void Lin\_reg::openfile(string file\_path)

{

//function opens the file and reads the values into the arrays

cout \&lt;\&lt; &quot;Enter the File Path:&quot;;

cin \&gt;\&gt; file\_path;

cout \&lt;\&lt; endl;

Infile.open(file\_path);

for (int i = 0; i \&lt; n; i++)

{

Infile \&gt;\&gt; X\_var[i];

Infile \&gt;\&gt; Y\_var[i];

}

}

//function to set n by passing a value

void Lin\_reg::setn(int n)

{

this-\&gt;n = n;

}

//commented out the console testing main function

/\*

int main()

{

Lin\_reg lr\_obj;

lr\_obj.openfile(&quot;C:\\CSC5050\\Lin\_reg\\Text.txt&quot;);

if (lr\_obj.Infile.is\_open())

{

cout \&lt;\&lt; &quot;File Opened Successfully&quot; \&lt;\&lt; endl;

}

else

{

cout \&lt;\&lt; &quot;Failed to Open&quot; \&lt;\&lt; endl;

return(0);

}

lr\_obj.setn();

lr\_obj.slope();

cout \&lt;\&lt; &quot;\r\nSlope = &quot; \&lt;\&lt; lr\_obj.getm();

cout \&lt;\&lt; &quot;\r\nIntercept = &quot; \&lt;\&lt; lr\_obj.getb();

}

\*/

#include &quot;pch.h&quot;

#include &quot;Nonlin\_reg.h&quot;

//function to set n by passing a value

void Nonlin\_reg::setn(int n)

{

this-\&gt;n = n;

//one example of the use of this pointer

}

void Nonlin\_reg::openfile(string file\_path)

{

//function opens the file and reads the values into the arrays

Infile2.open(file\_path);

for (int i = 0; i \&lt; n; i++)

{

Infile2 \&gt;\&gt; X\_var[i];

Infile2 \&gt;\&gt; Y\_var[i];

}

}

void Nonlin\_reg::slope()

{

//this fucntion calculates the sum values and the regression contants

for (int i = 0; i \&lt; n; i++)

{

sumX += X\_var[i];

sumY += Y\_var[i];

sumXY += X\_var[i] \* Y\_var[i];

sumX2 += X\_var[i] \* X\_var[i];

}

//a1 and a0 are converted to exponential form to a and b

// y = a\*e^(bx)

a1 = ((n \* sumXY) - (sumX \* sumY)) / ((n \* sumX2) - sumX);

a0 = ((sumX2 \* sumY) - (sumX \* sumXY)) / ((n \* sumX2) - sumX);

// e is taken as 2.71828

a = pow(2.71828, a0);

b = a1;

for (int i = 0; i \&lt; n; i++)

{

//genarating the predicted y points

Y\_fit[i] = a \* pow(2.71828, b \* X\_var[i]);

}

}
