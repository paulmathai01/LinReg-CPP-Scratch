
#include "pch.h"
#include "Lin_reg.h"
#include "Nonlin_reg.h"
#include <iostream>
#include <iomanip>
#include <string>
#include<sstream>

//auto genarated code
namespace CppCLRWinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//declaration of static objects to implement iterations of learning
	static Lin_reg lr_obj;
	static Nonlin_reg nlr_obj;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(254, 19);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open File";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(320, 479);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calculate Lin_Reg";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->AcceptsTab = true;
			this->textBox2->Location = System::Drawing::Point(137, 47);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(311, 135);
			this->textBox2->TabIndex = 4;
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Center;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Name = L"Legend1";
			legend1->TableStyle = System::Windows::Forms::DataVisualization::Charting::LegendTableStyle::Tall;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 173);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Legend = L"Legend1";
			series1->Name = L"Original Data";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Predicted Line";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Non-Linear";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(552, 300);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(137, 479);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 43);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Calculate Non_Lin_Reg";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 565);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"Form1";
			this->Text = L"Calculate Linear Regression";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	//button click event
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		textBox2->AppendText("Opening C:\\CSC5050\\Lin_reg\\Text.txt");
		textBox2->AppendText("\r\n");
		//both objects call their openfile function to open the file
		lr_obj.openfile("C:\\CSC5050\\Lin_reg\\Text.txt");
		nlr_obj.openfile("C:\\CSC5050\\Lin_reg\\Text.txt");
		if (!lr_obj.Infile.is_open())
		{
			//error message if file is not found
			textBox2->AppendText("File not found");
			textBox2->AppendText("\r\n");
			textBox2->AppendText("Please restart the program");
			textBox2->AppendText("\r\n");
		}
		else if(lr_obj.Infile.is_open())
		{
			//text indicating successfull read
			textBox2->AppendText("Successfully Opened File");
			//calling the slope function for both the objects
			lr_obj.slope();
			nlr_obj.slope();
			//Conversition of std::string to System::String to match the arguments of the AppendText function
			string strm = to_string(lr_obj.getm());
			String^ strm1 = gcnew String(strm.c_str());
			textBox2->AppendText("\r\nSlope = ");
			textBox2->AppendText(strm1);
			//double also had to be converted for slope and intercept values
			string strb = to_string(lr_obj.getb());
			String^ strb1 = gcnew String(strb.c_str());
			textBox2->AppendText("\r\nIntercept = ");
			textBox2->AppendText(strb1);

		}
		lr_obj.Infile.close();
		//close the file
		//open new file
		nlr_obj.openfile("C:\\CSC5050\\Lin_reg\\Text.txt");
		if (!nlr_obj.Infile2.is_open())
		{
			//similar error message as above
			textBox2->AppendText("File not found");
			textBox2->AppendText("\r\n");
			textBox2->AppendText("Please restart the program");
			textBox2->AppendText("\r\n");
		}
		else if (nlr_obj.Infile2.is_open())
		{
			//converstion to System::String
			string nstrm = to_string(nlr_obj.a);
			String^ nstrm1 = gcnew String(nstrm.c_str());
			textBox2->AppendText("\r\nA = ");
			textBox2->AppendText(nstrm1);
			string nstrb = to_string(nlr_obj.b);
			String^ nstrb1 = gcnew String(nstrb.c_str());
			textBox2->AppendText("\r\nB = ");
			textBox2->AppendText(nstrb1);

		}
		nlr_obj.Infile2.close();
		//close the file


	}
	//button click event definitions
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	for (int i = 0; i < lr_obj.n; i++)
	{
		//imports the data into the series to plot
		this->chart1->Series["Original Data"]->Points->AddXY(lr_obj.X_var[i], lr_obj.Y_var[i]);
		this->chart1->Series["Predicted Line"]->Points->AddXY(lr_obj.X_var[i], lr_obj.Y_fit[i]);
	}
	
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	for (int i = 0; i < nlr_obj.n; i++)
	{
		//imports the non-linear line data to the chart
		this->chart1->Series["Non-Linear"]->Points->AddXY(nlr_obj.X_var[i], nlr_obj.Y_fit[i]);
	}

}

};
}
