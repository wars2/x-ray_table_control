#pragma once

//#include "resource.h"

namespace controle_mesa_posicionadora_XY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for configuracoes_motores
	/// </summary>
	public ref class configuracoes_motores : public System::Windows::Forms::Form
	{
	public:
		configuracoes_motores(void)
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
		~configuracoes_motores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(83, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Desabilitado";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(15, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(111, 89);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tipo de movimento";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(78, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Translação";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Rotação";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Motor 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(153, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Motor 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(270, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Motor 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(387, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Motor 4";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Location = System::Drawing::Point(132, 29);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(111, 89);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tipo de movimento";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(6, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(83, 17);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Desabilitado";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 42);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(66, 17);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->Text = L"Rotação";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 65);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(78, 17);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->Text = L"Translação";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton6_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton7);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Controls->Add(this->radioButton9);
			this->groupBox3->Location = System::Drawing::Point(249, 29);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(111, 89);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tipo de movimento";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Checked = true;
			this->radioButton7->Location = System::Drawing::Point(6, 19);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(83, 17);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Desabilitado";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(6, 42);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(66, 17);
			this->radioButton8->TabIndex = 1;
			this->radioButton8->Text = L"Rotação";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton8_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(6, 65);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(78, 17);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->Text = L"Translação";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton9_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton10);
			this->groupBox4->Controls->Add(this->radioButton11);
			this->groupBox4->Controls->Add(this->radioButton12);
			this->groupBox4->Location = System::Drawing::Point(366, 29);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(111, 89);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Tipo de movimento";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Checked = true;
			this->radioButton10->Location = System::Drawing::Point(6, 19);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(83, 17);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Desabilitado";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton10_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(6, 42);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(66, 17);
			this->radioButton11->TabIndex = 1;
			this->radioButton11->Text = L"Rotação";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton11_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(6, 65);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(78, 17);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->Text = L"Translação";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &configuracoes_motores::radioButton12_CheckedChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 3;
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown1->Location = System::Drawing::Point(15, 139);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {36000, 0, 0, 131072});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(111, 20);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(15, 176);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(111, 20);
			this->numericUpDown3->TabIndex = 8;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 3;
			this->numericUpDown4->Enabled = false;
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown4->Location = System::Drawing::Point(132, 139);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {36000, 0, 0, 131072});
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(111, 20);
			this->numericUpDown4->TabIndex = 9;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Enabled = false;
			this->numericUpDown6->Location = System::Drawing::Point(132, 176);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(111, 20);
			this->numericUpDown6->TabIndex = 11;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 3;
			this->numericUpDown7->Enabled = false;
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown7->Location = System::Drawing::Point(249, 137);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {36000, 0, 0, 131072});
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(111, 20);
			this->numericUpDown7->TabIndex = 12;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Passos/mm";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(153, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Passos/mm";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(270, 160);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Passos/mm";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(387, 160);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Passos/mm";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Enabled = false;
			this->numericUpDown9->Location = System::Drawing::Point(249, 176);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(111, 20);
			this->numericUpDown9->TabIndex = 22;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->DecimalPlaces = 3;
			this->numericUpDown10->Enabled = false;
			this->numericUpDown10->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown10->Location = System::Drawing::Point(366, 137);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {36000, 0, 0, 131072});
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(111, 20);
			this->numericUpDown10->TabIndex = 23;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Enabled = false;
			this->numericUpDown12->Location = System::Drawing::Point(366, 176);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(111, 20);
			this->numericUpDown12->TabIndex = 25;
			this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(36, 123);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Graus/passo";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(153, 123);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 13);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Graus/passo";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(270, 123);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(68, 13);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Graus/passo";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(387, 123);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(68, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Graus/passo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(327, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"CANCELAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &configuracoes_motores::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(95, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 23);
			this->button2->TabIndex = 31;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &configuracoes_motores::button2_Click);
			// 
			// configuracoes_motores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 232);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"configuracoes_motores";
			this->Text = L"Configurar motores";
			this->Load += gcnew System::EventHandler(this, &configuracoes_motores::configuracoes_motores_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {

				 if (radioButton1->Checked == 1) 
			     {
				   numericUpDown1->Enabled=0;
				   numericUpDown3->Enabled=0;				 
			     }

			 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton2->Checked == 1) 
			 {
			   numericUpDown1->Enabled=1;
			   numericUpDown3->Enabled=0;				 
			 }


		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {

			 if (radioButton3->Checked == 1) 
			 {
			   numericUpDown1->Enabled=0;
			   numericUpDown3->Enabled=1;				 
			 }

		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton4->Checked == 1) 
			     {
				   numericUpDown4->Enabled=0;
				   numericUpDown6->Enabled=0;				 
			     }

		 }
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton5->Checked == 1) 
			 {
			   numericUpDown4->Enabled=1;
			   numericUpDown6->Enabled=0;				 
			 }

		 }
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton6->Checked == 1) 
			 {
			   numericUpDown4->Enabled=0;
			   numericUpDown6->Enabled=1;				 
			 }

		 }
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton7->Checked == 1) 
			     {
				   numericUpDown7->Enabled=0;
				   numericUpDown9->Enabled=0;				 
			     }

		 }
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton8->Checked == 1) 
			 {
			   numericUpDown7->Enabled=1;
			   numericUpDown9->Enabled=0;				 
			 }

		 }
private: System::Void radioButton9_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton9->Checked == 1) 
			 {
			   numericUpDown7->Enabled=0;
			   numericUpDown9->Enabled=1;				 
			 }

		 }
private: System::Void radioButton10_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton10->Checked == 1) 
			     {
				   numericUpDown10->Enabled=0;
				   numericUpDown12->Enabled=0;				 
			     }

		 }
private: System::Void radioButton11_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton11->Checked == 1) 
			 {
			   numericUpDown10->Enabled=1;
			   numericUpDown12->Enabled=0;				 
			 }

		 }
private: System::Void radioButton12_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 if (radioButton12->Checked == 1) 
			 {
			   numericUpDown10->Enabled=0;
			   numericUpDown12->Enabled=1;				 
			 }

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {

			 String^ fileName = "configuracoes_motores.cfg";
			 StreamWriter^ sw = gcnew StreamWriter(fileName);
			 
			 //sw->WriteLine("motor 1");
			 //sw->WriteLine("TIPO");
			 if (radioButton1->Checked == 1)
			 {
				 sw->WriteLine("0");
				 //motor1_tipo=0;
			 }
			 if (radioButton2->Checked == 1)
			 {
			    sw->WriteLine("1");
				//motor1_tipo=1;
				//sw->WriteLine("GRAU");
			    sw->WriteLine((numericUpDown1->Value).ToString());
			 }
			 if (radioButton3->Checked == 1) 
			 {
			    sw->WriteLine("2");
				//motor1_tipo=2;
			    //sw->WriteLine("PASSO");
			    sw->WriteLine((numericUpDown3->Value).ToString());
			 }
			 
			 sw->WriteLine();

			 //sw->WriteLine("motor 2");
			 //sw->WriteLine("TIPO");
			 if (radioButton4->Checked == 1)
			 {
				 sw->WriteLine("0");
				 //motor2_tipo=0;
			 }
			 if (radioButton5->Checked == 1)
			 {
			    sw->WriteLine("1");
				//motor2_tipo=1;
				//sw->WriteLine("GRAU");
			    sw->WriteLine((numericUpDown4->Value).ToString());
			 }
			 if (radioButton6->Checked == 1) 
			 {
			    sw->WriteLine("2");
				//motor2_tipo=2;
			    //sw->WriteLine("PASSO");
			    sw->WriteLine((numericUpDown6->Value).ToString());
			 }

			 sw->WriteLine();

			 //sw->WriteLine("motor 3");
			 //sw->WriteLine("TIPO");
			 if (radioButton7->Checked == 1)
			 {
				 sw->WriteLine("0");
				 //motor3_tipo=0;
			 }
			 if (radioButton8->Checked == 1)
			 {
			    sw->WriteLine("1");
				//motor3_tipo=1;
				//sw->WriteLine("GRAU");
			    sw->WriteLine((numericUpDown7->Value).ToString());
			 }
			 if (radioButton9->Checked == 1) 
			 {
			    sw->WriteLine("2");
				//motor3_tipo=2;
			    //sw->WriteLine("PASSO");
			    sw->WriteLine((numericUpDown9->Value).ToString());
			 }

			 sw->WriteLine();

			 //sw->WriteLine("motor 4");
			 //sw->WriteLine("TIPO");
			 if (radioButton10->Checked == 1)
			 {
				 sw->WriteLine("0");
				 //motor4_tipo=0;
			 }
			 if (radioButton11->Checked == 1)
			 {
			    sw->WriteLine("1");
				//motor4_tipo=1;
				//sw->WriteLine("GRAU");
			    sw->WriteLine((numericUpDown10->Value).ToString());
			 }
			 if (radioButton12->Checked == 1) 
			 {
			    sw->WriteLine("2");
				//motor4_tipo=2;
			    //sw->WriteLine("PASSO");
			    sw->WriteLine((numericUpDown12->Value).ToString());
			 }


			 sw->Close();

			 configuracoes_motores::Close();

		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 
		    configuracoes_motores::Close();
		 
		 }

private: System::Void configuracoes_motores_Load(System::Object^  sender, System::EventArgs^  e)
		 {
		 
		    String^ fileName = "configuracoes_motores.cfg";
			try 
			{
			   //Console::WriteLine("trying to open file {0}...", fileName);
			   StreamReader^ din = File::OpenText(fileName);
			   String^ str;
		       
			   str = din->ReadLine();
			   switch (System::Convert::ToInt16(str))
			   {

			   case	0 :
				   radioButton1->Checked = 1;
                   numericUpDown1->Enabled = 0;
				   numericUpDown3->Enabled = 0;
				   din->ReadLine();
			   break;

			   case 1:
				   radioButton2->Checked = 1;
                   numericUpDown1->Enabled = 1;
				   numericUpDown3->Enabled = 0;
				   numericUpDown1->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   radioButton3->Checked = 1;
                   numericUpDown1->Enabled = 0;
				   numericUpDown3->Enabled = 1;
				   numericUpDown3->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;


			   default :
				   MessageBox::Show("arquivo com formato irregular");
			   break;
			   }
			   
			   str = nullptr;

			   str = din->ReadLine();
			   switch (System::Convert::ToInt16(str))
			   {

			   case	0 :
				   radioButton4->Checked = 1;
                   numericUpDown4->Enabled = 0;
				   numericUpDown6->Enabled = 0;
				   din->ReadLine();
			   break;

			   case 1:
				   radioButton5->Checked = 1;
                   numericUpDown4->Enabled = 1;
				   numericUpDown6->Enabled = 0;
				   numericUpDown4->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   radioButton6->Checked = 1;
                   numericUpDown4->Enabled = 0;
				   numericUpDown6->Enabled = 1;
				   numericUpDown6->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;


			   default :
				   MessageBox::Show("arquivo com formato irregular");
			   break;
			   }

			   str = nullptr;

			   str = din->ReadLine();
			   switch (System::Convert::ToInt16(str))
			   {

			   case	0 :
				   radioButton7->Checked = 1;
                   numericUpDown7->Enabled = 0;
				   numericUpDown9->Enabled = 0;
				   din->ReadLine();
			   break;

			   case 1:
				   radioButton8->Checked = 1;
                   numericUpDown7->Enabled = 1;
				   numericUpDown9->Enabled = 0;
				   numericUpDown7->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   radioButton9->Checked = 1;
                   numericUpDown7->Enabled = 0;
				   numericUpDown9->Enabled = 1;
				   numericUpDown9->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;


			   default :
				   MessageBox::Show("arquivo com formato irregular");
			   break;
			   }

			   str = nullptr;

			   str = din->ReadLine();
			   switch (System::Convert::ToInt16(str))
			   {

			   case	0 :
				   radioButton10->Checked = 1;
                   numericUpDown10->Enabled = 0;
				   numericUpDown12->Enabled = 0;
				   din->ReadLine();
			   break;

			   case 1:
				   radioButton11->Checked = 1;
                   numericUpDown10->Enabled = 1;
				   numericUpDown12->Enabled = 0;
				   numericUpDown10->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   radioButton12->Checked = 1;
                   numericUpDown10->Enabled = 0;
				   numericUpDown12->Enabled = 1;
				   numericUpDown12->Value = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   default :
				   MessageBox::Show("arquivo com formato irregular");
			   break;
			   }

			   str = nullptr;
			   din->Close();

			}
			catch (Exception^ e)
			{
			   //MessageBox::Show("arquivo de configurações não encontrado");
				
				if (dynamic_cast<FileNotFoundException^>(e))
				     MessageBox::Show("arquivo de configurações não encontrado");
					 //Console::WriteLine("file '{0}' not found", fileName);
				  else
				     MessageBox::Show("problema ao ler o arquivo");
					 //Console::WriteLine("problem reading file '{0}'", fileName);
			}

		 
		 }
};
}
