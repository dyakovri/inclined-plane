#pragma once

#include "Cylinder.h"

namespace inclinedplane {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::NumericUpDown^  w;

	private: System::Windows::Forms::NumericUpDown^  h;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  r;

	private: System::Windows::Forms::NumericUpDown^  m;

	private: System::Windows::Forms::Button^  start;
	private: System::Windows::Forms::Button^  stop;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::NumericUpDown^  scale_x;
	private: System::Windows::Forms::NumericUpDown^  scale_y;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->w = (gcnew System::Windows::Forms::NumericUpDown());
			this->h = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->r = (gcnew System::Windows::Forms::NumericUpDown());
			this->m = (gcnew System::Windows::Forms::NumericUpDown());
			this->start = (gcnew System::Windows::Forms::Button());
			this->stop = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->scale_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->scale_y = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scale_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scale_y))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Наклонная плоскость";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Длина";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Высота";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Колесо";
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(207, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Name = L"Wheel";
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series4->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series5->Name = L"Dot";
			series5->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series5->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series6->Color = System::Drawing::Color::Black;
			series6->Name = L"Plane";
			series6->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series6->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(565, 378);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// w
			// 
			this->w->Location = System::Drawing::Point(63, 62);
			this->w->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->w->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->w->Name = L"w";
			this->w->Size = System::Drawing::Size(85, 20);
			this->w->TabIndex = 2;
			this->w->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// h
			// 
			this->h->Location = System::Drawing::Point(63, 88);
			this->h->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->h->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(85, 20);
			this->h->TabIndex = 2;
			this->h->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Радиус";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Масса";
			// 
			// r
			// 
			this->r->Location = System::Drawing::Point(63, 145);
			this->r->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->r->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->r->Name = L"r";
			this->r->Size = System::Drawing::Size(85, 20);
			this->r->TabIndex = 2;
			this->r->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// m
			// 
			this->m->Location = System::Drawing::Point(63, 171);
			this->m->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->m->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(85, 20);
			this->m->TabIndex = 2;
			this->m->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(12, 210);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(174, 33);
			this->start->TabIndex = 3;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Window::start_Click);
			// 
			// stop
			// 
			this->stop->Enabled = false;
			this->stop->Location = System::Drawing::Point(12, 249);
			this->stop->Name = L"stop";
			this->stop->Size = System::Drawing::Size(174, 33);
			this->stop->TabIndex = 3;
			this->stop->Text = L"Stop";
			this->stop->UseVisualStyleBackColor = true;
			this->stop->Click += gcnew System::EventHandler(this, &Window::stop_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Window::timer1_Tick);
			// 
			// scale_x
			// 
			this->scale_x->Location = System::Drawing::Point(63, 329);
			this->scale_x->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->scale_x->Name = L"scale_x";
			this->scale_x->Size = System::Drawing::Size(85, 20);
			this->scale_x->TabIndex = 4;
			this->scale_x->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->scale_x->ValueChanged += gcnew System::EventHandler(this, &Window::scale_changed);
			// 
			// scale_y
			// 
			this->scale_y->Location = System::Drawing::Point(63, 355);
			this->scale_y->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->scale_y->Name = L"scale_y";
			this->scale_y->Size = System::Drawing::Size(85, 20);
			this->scale_y->TabIndex = 4;
			this->scale_y->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->scale_y->ValueChanged += gcnew System::EventHandler(this, &Window::scale_changed);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 313);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Масштаб по осям";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 331);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Длина";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 357);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Высота";
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 402);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->scale_y);
			this->Controls->Add(this->scale_x);
			this->Controls->Add(this->stop);
			this->Controls->Add(this->start);
			this->Controls->Add(this->m);
			this->Controls->Add(this->r);
			this->Controls->Add(this->h);
			this->Controls->Add(this->w);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Name = L"Window";
			this->Text = L"Window";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scale_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scale_y))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: Cylinder *c;

		private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void stop_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
		private: System::Void scale_changed(System::Object^  sender, System::EventArgs^  e);
	};
}
