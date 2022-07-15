#pragma once

#include "configuracoes_motores.h"
//#include "resource.h"

namespace controle_mesa_posicionadora_XY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	
	//using namespace System::Object;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	
	String^ RxString; //string que ira receber o dado vindo da porta serial
	
	TabPage^ aba_selecionada;
	
	static Decimal motor1_tipo, motor2_tipo, motor3_tipo, motor4_tipo;
    static Decimal motor1_parametro, motor2_parametro, motor3_parametro, motor4_parametro;
	static Decimal pon_a_cen = 1000000, pon_b_cen = -1000000 , pon_med_cen = 1000000, passos_cen;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//if (!serialPort1->IsOpen) serialPort1->Open();
		}

	private:
		void atualizaListaCOMs()  //atualizaListaCOMs() retirado de http://www.embarcados.com.br/comunicacao-serial-c-arduino-parte-1/
    	{
        	int i;
        	bool quantDiferente;	//flag para sinalizar que a quantidade de portas mudou
 
        	i = 0;
        	quantDiferente = false;
			//array<String^>^ s = nullptr;;
 
        	//se a quantidade de portas mudou
        	if (comboBox1->Items->Count == serialPort1->GetPortNames()->Length)
        	{
            	for each (String^ s in serialPort1->GetPortNames())
            	{
                	if (comboBox1->Items[i++]->Equals(s) == false)
                	{
                    	quantDiferente = true;
                	}
            	}
        	}
        	else
        	{
            	quantDiferente = true;
        	}
 
        	//Se não foi detectado diferença
        	if (quantDiferente == false)
        	{
            	return;                     //retorna
        	}
 
        	//limpa comboBox
        	comboBox1->Items->Clear();
 
        	//adiciona todas as COM diponíveis na lista
        	for each (String^ s in serialPort1->GetPortNames())
        	{
            	comboBox1->Items->Add(s);
        	}
        	//seleciona a primeira posição da lista
        	comboBox1->SelectedIndex = 0;
    	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 









	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;

	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Button^  bto_enviar;











	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;




	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
private: System::Windows::Forms::Timer^  tmr_AtualizaListaCOM;

private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Button^  bto_conectar;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::ComboBox^  comboBox6;
























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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->bto_enviar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->tmr_AtualizaListaCOM = (gcnew System::Windows::Forms::Timer(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bto_conectar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			this->groupBox10->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 162);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->statusStrip1->Size = System::Drawing::Size(703, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"Status";
			this->statusStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::statusStrip1_ItemClicked);
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(688, 17);
			this->toolStripStatusLabel1->Spring = true;
			this->toolStripStatusLabel1->Text = L"Status";
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 19200;
			this->serialPort1->PortName = L"COM7";
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
			// 
			// bto_enviar
			// 
			this->bto_enviar->Location = System::Drawing::Point(233, 124);
			this->bto_enviar->Name = L"bto_enviar";
			this->bto_enviar->Size = System::Drawing::Size(46, 28);
			this->bto_enviar->TabIndex = 2;
			this->bto_enviar->Text = L"Enviar";
			this->bto_enviar->UseVisualStyleBackColor = true;
			this->bto_enviar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Horizontal";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Vertical";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Horizontal";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Vertical";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Horizontal";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 42);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Vertical";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(77, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(12, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"s";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(121, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"mm";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(121, 42);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(23, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"mm";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(121, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(23, 13);
			this->label14->TabIndex = 23;
			this->label14->Text = L"mm";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(121, 42);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"mm";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown1->Location = System::Drawing::Point(66, 14);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {60, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(50, 20);
			this->numericUpDown1->TabIndex = 27;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown2->Location = System::Drawing::Point(66, 40);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {60, 0, 0, 0});
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(50, 20);
			this->numericUpDown2->TabIndex = 28;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 2;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown3->Location = System::Drawing::Point(66, 14);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {60, 0, 0, 0});
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(50, 20);
			this->numericUpDown3->TabIndex = 29;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 2;
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown4->Location = System::Drawing::Point(66, 40);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {6000, 0, 0, 131072});
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(50, 20);
			this->numericUpDown4->TabIndex = 30;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(66, 14);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {6000, 0, 0, 0});
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(50, 20);
			this->numericUpDown5->TabIndex = 31;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(66, 40);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {6000, 0, 0, 0});
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(50, 20);
			this->numericUpDown6->TabIndex = 32;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(21, 19);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3600, 0, 0, 0});
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(50, 20);
			this->numericUpDown7->TabIndex = 33;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// tmr_AtualizaListaCOM
			// 
			this->tmr_AtualizaListaCOM->Enabled = true;
			this->tmr_AtualizaListaCOM->Interval = 1000;
			this->tmr_AtualizaListaCOM->Tick += gcnew System::EventHandler(this, &Form1::tmr_AtualizaListaCOM_Tick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(285, 124);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(97, 21);
			this->comboBox1->TabIndex = 34;
			// 
			// bto_conectar
			// 
			this->bto_conectar->Location = System::Drawing::Point(388, 124);
			this->bto_conectar->Name = L"bto_conectar";
			this->bto_conectar->Size = System::Drawing::Size(97, 24);
			this->bto_conectar->TabIndex = 35;
			this->bto_conectar->Text = L"Conectar";
			this->bto_conectar->UseVisualStyleBackColor = true;
			this->bto_conectar->Click += gcnew System::EventHandler(this, &Form1::bto_conectar_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(144, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 24);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Configurações";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(683, 110);
			this->tabControl1->TabIndex = 37;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			this->tabControl1->Deselecting += gcnew System::Windows::Forms::TabControlCancelEventHandler(this, &Form1::tabControl1_Deselecting);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(675, 84);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Varredura bidimensional";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->numericUpDown7);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Location = System::Drawing::Point(566, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(101, 45);
			this->groupBox5->TabIndex = 38;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Tempo de coleta";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(161, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(149, 69);
			this->groupBox3->TabIndex = 37;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Resolução";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->numericUpDown5);
			this->groupBox4->Controls->Add(this->numericUpDown6);
			this->groupBox4->Location = System::Drawing::Point(316, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(121, 69);
			this->groupBox4->TabIndex = 37;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Pontos";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(6, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(149, 69);
			this->groupBox2->TabIndex = 36;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tamanho da amostra";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Location = System::Drawing::Point(443, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(117, 69);
			this->groupBox1->TabIndex = 35;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleçao de motores";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 43);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 13);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Vertical";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->comboBox3->Location = System::Drawing::Point(66, 40);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(39, 21);
			this->comboBox3->TabIndex = 36;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Horizontal";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->comboBox2->Location = System::Drawing::Point(66, 13);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(39, 21);
			this->comboBox2->TabIndex = 34;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->groupBox12);
			this->tabPage2->Controls->Add(this->groupBox11);
			this->tabPage2->Controls->Add(this->groupBox10);
			this->tabPage2->Controls->Add(this->groupBox6);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(675, 84);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Centralização";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->checkBox1);
			this->groupBox12->Controls->Add(this->button3);
			this->groupBox12->Controls->Add(this->button2);
			this->groupBox12->Location = System::Drawing::Point(187, 6);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(148, 69);
			this->groupBox12->TabIndex = 40;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Pontos";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(6, 45);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(131, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Centralizar entre A e B";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(77, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 20);
			this->button3->TabIndex = 1;
			this->button3->Text = L"B";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(6, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 20);
			this->button2->TabIndex = 0;
			this->button2->Text = L"A";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->numericUpDown10);
			this->groupBox11->Location = System::Drawing::Point(90, 6);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(91, 69);
			this->groupBox11->TabIndex = 39;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Distancia (mm)";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->DecimalPlaces = 2;
			this->numericUpDown10->Location = System::Drawing::Point(21, 21);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5000, 0, 0, 0});
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(50, 20);
			this->numericUpDown10->TabIndex = 38;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->radioButton2);
			this->groupBox10->Controls->Add(this->radioButton1);
			this->groupBox10->Location = System::Drawing::Point(6, 6);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(78, 69);
			this->groupBox10->TabIndex = 37;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Direção";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Esquerda";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(55, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Direita";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBox4);
			this->groupBox6->Location = System::Drawing::Point(341, 6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(115, 69);
			this->groupBox6->TabIndex = 36;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"motor de translação";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->comboBox4->Location = System::Drawing::Point(39, 20);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(39, 21);
			this->comboBox4->TabIndex = 36;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox8);
			this->tabPage3->Controls->Add(this->groupBox9);
			this->tabPage3->Controls->Add(this->groupBox7);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(675, 84);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Rotação";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->numericUpDown8);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Location = System::Drawing::Point(73, 6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(101, 45);
			this->groupBox8->TabIndex = 40;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Tempo de coleta";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(21, 19);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3600, 0, 0, 0});
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(50, 20);
			this->numericUpDown8->TabIndex = 33;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"s";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->numericUpDown9);
			this->groupBox9->Location = System::Drawing::Point(6, 6);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(61, 46);
			this->groupBox9->TabIndex = 39;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Pontos";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(6, 19);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {6000, 0, 0, 0});
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(50, 20);
			this->numericUpDown9->TabIndex = 31;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->comboBox6);
			this->groupBox7->Location = System::Drawing::Point(180, 6);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(101, 49);
			this->groupBox7->TabIndex = 36;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"motor de rotação";
			// 
			// comboBox6
			// 
			this->comboBox6->DisplayMember = L"64";
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->comboBox6->Location = System::Drawing::Point(32, 19);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(39, 21);
			this->comboBox6->TabIndex = 36;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(703, 184);
			this->Controls->Add(this->bto_conectar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->bto_enviar);
			this->Controls->Add(this->statusStrip1);
			this->Name = L"Form1";
			this->Text = L"Controle mesas posicionadoras";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			this->groupBox9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void abrirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void toolStripLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void statusStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 
		
			 if (serialPort1->IsOpen)
			 {
				 aba_selecionada=tabControl1->SelectedTab;
			 
				 if (aba_selecionada==tabPage1) //significa que a aba de varredura bidimensional esta selecionada
				 {
	               
					 
				   if (comboBox2->SelectedIndex == -1 || comboBox3->SelectedIndex == -1 || (comboBox2->SelectedIndex == comboBox3->SelectedIndex) )
				   {  
					  MessageBox::Show("um dos motores não foi selecionado ou\nos motores selecionados são os mesmos");
				   }
				   else
				   { 
				      //System::Windows::Forms::DialogResult result;
				      //result = MessageBox::Show(motor1_tipo+" "+motor2_tipo+" "+motor3_tipo+" "+motor4_tipo+" "+motor1_parametro+" "+motor2_parametro+" "+motor3_parametro+" "+motor4_parametro+"\nTamanho da amostra\nHorizontal: "+numericUpDown1->Value.ToString()+"\nVertical: "+numericUpDown2->Value.ToString()+"\n\nResolução\nHorizontal: "+numericUpDown3->Value.ToString()+"\nVertical: "+numericUpDown4->Value.ToString()+"\n\nPontos\nHorizontal: "+numericUpDown5->Value.ToString()+"\nVertical: "+numericUpDown6->Value.ToString()+"\n\nMotores\nHorizontal: "+comboBox2->SelectedItem->ToString()+"\nVertical: "+comboBox3->SelectedItem->ToString()+"\n\nTempo de coleta: "+numericUpDown7->Value.ToString(), "confirmação", MessageBoxButtons::YesNo );
				   
				      //if ( result == System::Windows::Forms::DialogResult::Yes )
				      //{ 
					     serialPort1->Write("v"); //varredura bidimensional
						 serialPort1->Write("d"); //motor horizontal
					     serialPort1->Write((comboBox2->SelectedIndex+1).ToString());
					     serialPort1->Write("*");

					     serialPort1->Write("v"); //varredura bidimensional
						 serialPort1->Write("e"); //motor vertical
					     serialPort1->Write((comboBox3->SelectedIndex+1).ToString());
					     serialPort1->Write("*");

					     serialPort1->Write("v"); //varredura bidimensional
						 serialPort1->Write("f"); //pontos horizontais
					     serialPort1->Write((numericUpDown5->Value).ToString());
					     serialPort1->Write("*");

					     serialPort1->Write("v"); //varredura bidimensional
						 serialPort1->Write("g"); //pontos verticais
					     serialPort1->Write((numericUpDown6->Value).ToString());
					     serialPort1->Write("*");
			 
					     serialPort1->Write("v"); //varredura bidimensional
						 serialPort1->Write("h"); //tempo de coleta
					     serialPort1->Write((numericUpDown7->Value).ToString());
					     serialPort1->Write("*");
			 
					     serialPort1->Write("v"); //varredura bidimensional
						 serialPort1->Write("i"); //passos horizontais
					     serialPort1->Write((Decimal::Round(numericUpDown3->Value/Decimal(0.01))).ToString());
					     if     (comboBox2->SelectedItem->ToString() == "1")
					     {
					         serialPort1->Write((Decimal::Round((numericUpDown3->Value)*(motor1_parametro))).ToString());
					         //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor1_parametro))).ToString());
					     }
					    else if (comboBox2->SelectedItem->ToString() == "2")
					    {
                            serialPort1->Write((Decimal::Round((numericUpDown3->Value)*(motor2_parametro))).ToString());
					        //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor2_parametro))).ToString());
					    }
					    else if (comboBox2->SelectedItem->ToString() == "3")
					    {
					        serialPort1->Write((Decimal::Round((numericUpDown3->Value)*(motor3_parametro))).ToString());
					        //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor3_parametro))).ToString());
					    }
					    else if (comboBox2->SelectedItem->ToString() == "4")
					    {
					        serialPort1->Write((Decimal::Round((numericUpDown3->Value)*(motor4_parametro))).ToString()); 
					        //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor4_parametro))).ToString());
				        } 
						serialPort1->Write("*");
			 
					    serialPort1->Write("v"); //varredura bidimensional
						serialPort1->Write("j"); //passos verticais
					    serialPort1->Write((Decimal::Round(numericUpDown4->Value/Decimal(0.01))).ToString());
					    if     (comboBox3->SelectedItem->ToString() == "1")
					    {
					        serialPort1->Write((Decimal::Round((numericUpDown4->Value)*(motor1_parametro))).ToString());
					        //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor1_parametro))).ToString());
					    }
					    else if (comboBox3->SelectedItem->ToString() == "2")
					    {
                            serialPort1->Write((Decimal::Round((numericUpDown4->Value)*(motor2_parametro))).ToString());
					        //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor2_parametro))).ToString());
					    }
					    else if (comboBox3->SelectedItem->ToString() == "3")
					    {
					        serialPort1->Write((Decimal::Round((numericUpDown4->Value)*(motor3_parametro))).ToString());
					        //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor3_parametro))).ToString());
					    }
					    else if (comboBox3->SelectedItem->ToString() == "4")
					    {
					        serialPort1->Write((Decimal::Round((numericUpDown4->Value)*(motor4_parametro))).ToString()); 
					        //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor4_parametro))).ToString());
				        } 
						serialPort1->Write("*");
				      //}
				   }
				 }
			 

				 if (aba_selecionada==tabPage2) //significa que a aba de centralização esta selecionada
				 {
				   
				    if (comboBox4->SelectedIndex == -1)
				    {
					   MessageBox::Show("motor não selecionado");
				    }
				    else
				    { 
					   
					  if (checkBox1->Checked == true) //ir para o ponto médio
					  {
						serialPort1->Write("c"); //centralização
					    serialPort1->Write("d"); //motor
				        serialPort1->Write((comboBox2->SelectedIndex+1).ToString());
				        serialPort1->Write("*");

						serialPort1->Write("c"); //centralização
				        serialPort1->Write("e"); //passos
						serialPort1->Write((Math::Abs(pon_med_cen)).ToString());
						serialPort1->Write("*");
						
						serialPort1->Write("c"); //centralização
				        serialPort1->Write("f"); //direção
		  		        if (pon_med_cen <  0) serialPort1->Write("0"); 
				        if (pon_med_cen >= 0) serialPort1->Write("1");
				        serialPort1->Write("*");
						
					    serialPort1->Write("c"); //centralização
					    serialPort1->Write("d"); //motor
				        serialPort1->Write((comboBox2->SelectedIndex+1).ToString());
				        serialPort1->Write("*");
					  }
					  else
					  {
						serialPort1->Write("c"); //centralização
						serialPort1->Write("e"); //passos
						if     (comboBox4->SelectedItem->ToString() == "1")
						{
						     passos_cen = Decimal::Round((numericUpDown10->Value)*(motor1_parametro));
						}
						 else if (comboBox4->SelectedItem->ToString() == "2")
						{
						     passos_cen = Decimal::Round((numericUpDown10->Value)*(motor2_parametro));
						}
						else if (comboBox4->SelectedItem->ToString() == "3")
						{
							 passos_cen = Decimal::Round((numericUpDown10->Value)*(motor3_parametro));
						}
						else if (comboBox4->SelectedItem->ToString() == "4")
						{
							 passos_cen = Decimal::Round((numericUpDown10->Value)*(motor4_parametro)); 
						}
						serialPort1->Write(passos_cen.ToString());
						serialPort1->Write("*");

						serialPort1->Write("c"); //centralização
						serialPort1->Write("f"); //direção
		  				if (radioButton1->Checked == 1) serialPort1->Write("0"); 
						if (radioButton2->Checked == 1) serialPort1->Write("1");
						serialPort1->Write("*");
				      }
				   }
				 }



				 if (aba_selecionada==tabPage3) //significa que a aba de rotação esta selecionada
				 {
				  
					 if (comboBox6->SelectedIndex == -1)
					 {
							  MessageBox::Show("motor não selecionado");
					 }
					 else
					 {
						serialPort1->Write("r"); //rotação
						serialPort1->Write("d"); //motor
					    serialPort1->Write((comboBox6->SelectedIndex+1).ToString());
						serialPort1->Write("*"); 
					 
						serialPort1->Write("r"); //rotação
						serialPort1->Write("e"); //pontos
						serialPort1->Write(Decimal::Round((Decimal(360.0)/numericUpDown9->Value)).ToString());
						serialPort1->Write("*");

						serialPort1->Write("r"); //rotação
						serialPort1->Write("f"); //passos
						if      (comboBox6->SelectedItem->ToString() == "1")
						{
						   serialPort1->Write((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor1_parametro))).ToString());
						   //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor1_parametro))).ToString());
						}
						else if (comboBox6->SelectedItem->ToString() == "2")
						{
						   serialPort1->Write((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor2_parametro))).ToString());
						   //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor2_parametro))).ToString());
						}
						 else if (comboBox6->SelectedItem->ToString() == "3")
						{
						    serialPort1->Write((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor3_parametro))).ToString());
						   //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor3_parametro))).ToString());
						}
						else if (comboBox6->SelectedItem->ToString() == "4")
						{
							 serialPort1->Write((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor4_parametro))).ToString());  
							 //MessageBox::Show  ((Decimal::Round((Decimal(360.0)/(numericUpDown9->Value))/(motor4_parametro))).ToString());
						}
						serialPort1->Write("*");

						serialPort1->Write("r"); //rotação
						serialPort1->Write("g"); //tempo de coleta
		  				serialPort1->Write((numericUpDown8->Value).ToString()); 
						serialPort1->Write("*");
					 }

	    	     }

			 
			 }
			 else
			 {
				 MessageBox::Show("Dispositivo não conectado");
			 }
 
			 /*System::Windows::Forms::DialogResult resposta;

			 resposta = MessageBox::Show("Tem Certeza?", "Confirmação", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			 if ( resposta == DialogResult::No)
             {*/
		       //serialPort1->Write("a5*b5*c5*d150*e150*");
			   
             //}
			 
			 

		 }
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {

			 RxString = serialPort1->ReadLine();              //le o dado disponível na serial
             this->Invoke(gcnew EventHandler(this,&controle_mesa_posicionadora_XY::Form1::trataDadoRecebido));
			 
			 //toolStripStatusLabel1->Text=serialPort1->ReadLine();

		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 //numericUpDown5->Value=Decimal::Round((numericUpDown1->Value/numericUpDown3->Value),2);
			 //numericUpDown6->Value=Decimal::Round((numericUpDown2->Value/numericUpDown4->Value),2);

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 //numericUpDown3->Value=Decimal::Round((numericUpDown1->Value/numericUpDown5->Value),2);
			 //numericUpDown4->Value=Decimal::Round((numericUpDown2->Value/numericUpDown6->Value),2);

		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 numericUpDown5->Maximum=(numericUpDown1->Value/Decimal(0.01));
			 numericUpDown3->Value=Decimal::Round((numericUpDown1->Value/numericUpDown5->Value),2);

		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 numericUpDown6->Maximum=(numericUpDown2->Value/Decimal(0.01));
			 numericUpDown4->Value=Decimal::Round((numericUpDown2->Value/numericUpDown6->Value),2);

		 }
private: System::Void tmr_AtualizaListaCOM_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
			 atualizaListaCOMs();

		 }
private: System::Void bto_conectar_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (serialPort1->IsOpen == false)
        	{
            	try
            	{
                	serialPort1->PortName = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
                	serialPort1->Open();
					tmr_AtualizaListaCOM->Stop();
            	}
            	catch (...)
            	{
                	return;
            	}
            	if (serialPort1->IsOpen)
            	{
                	bto_conectar->Text = "Desconectar";
                	comboBox1->Enabled = false;
     	       }
        	}
        	else
        	{
            	try
            	{
                	serialPort1->Close();
                	comboBox1->Enabled = true;
                	bto_conectar->Text = "Conectar";
					tmr_AtualizaListaCOM->Start();
            	}
    	        catch (...)
            	{
                	return;
            	}
        	}
		 }
private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

			if(serialPort1->IsOpen == true)  // se porta aberta
         	  serialPort1->Close();        	 // fecha a porta

		 }


private: System::Void trataDadoRecebido(System::Object^  sender, System::EventArgs^  e) {
           
			 toolStripStatusLabel1->Text=RxString;

			 System::Windows::Forms::DialogResult result2, result3;
			 
			 
			 
			 if ( (RxString == "Fim") && (aba_selecionada == tabPage2) )
			 {
				if (pon_a_cen < 1000000) //ponto a não esta vazio, translada ponto a
				{
					if (radioButton1->Checked == 1) pon_a_cen = pon_a_cen+passos_cen; // direita = positivo
				    if (radioButton2->Checked == 1) pon_a_cen = pon_a_cen-passos_cen; // esquerda = negativo
				}
				 
				if (pon_b_cen > -1000000) //ponto b não esta vazio, translada ponto b
				{
					if (radioButton1->Checked == 1) pon_b_cen = pon_b_cen+passos_cen; // direita = positivo
				    if (radioButton2->Checked == 1) pon_b_cen = pon_b_cen-passos_cen; // esquerda = negativo
				}

				if (pon_med_cen < 1000000) //ponto medio não esta vazio, translada ponto ponto medio
				{
					if (radioButton1->Checked == 1) pon_med_cen = pon_med_cen+passos_cen; // direita = positivo
				    if (radioButton2->Checked == 1) pon_med_cen = pon_med_cen-passos_cen; // esquerda = negativo
				}
				 
				if (pon_a_cen == 1000000) //ponto A vazio
				{
				    result2 = MessageBox::Show("Salvar ponto em A?", "Salvar?",MessageBoxButtons::YesNo); 
				    if ( result2 == System::Windows::Forms::DialogResult::Yes )
				    {
					    pon_a_cen = 0;
					    button2->Text = "A: Salvo";
                        button2->BackColor = System::Drawing::Color::Green;
				    }

				}
				else if (pon_b_cen == -1000000) //ponto B vazio
				{
				    result3 = MessageBox::Show("Salvar ponto em B?", "Salvar?",MessageBoxButtons::YesNo); 
				    if ( result3 == System::Windows::Forms::DialogResult::Yes )
				    {
					    pon_b_cen = 0;
					    button3->Text = "B: Salvo";
                        button3->BackColor = System::Drawing::Color::Green;
				    }
				}
				if ( (pon_a_cen != 1000000) && (pon_b_cen != -1000000) ) 
				{
					checkBox1->Enabled = true; //habilita checkbox de centralização
				    pon_med_cen = (pon_a_cen + pon_b_cen)/2;
				}
				
			 }




        }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 numericUpDown5->Value=Decimal::Round((numericUpDown1->Value/numericUpDown3->Value),2);

		 }
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 numericUpDown6->Value=Decimal::Round((numericUpDown2->Value/numericUpDown4->Value),2);

		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 numericUpDown3->Value=Decimal::Round((numericUpDown1->Value/numericUpDown5->Value),2);

		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 numericUpDown4->Value=Decimal::Round((numericUpDown2->Value/numericUpDown6->Value),2);

		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		   configuracoes_motores ^teste = gcnew configuracoes_motores();
           teste->ShowDialog();
		
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
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
				   motor1_tipo=0;
				   din->ReadLine();
			   break;

			   case 1:
				   motor1_tipo=1;
				   motor1_parametro = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   motor1_tipo=2;
				   motor1_parametro = System::Convert::ToDecimal(din->ReadLine());
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
				   motor2_tipo=0;
				   din->ReadLine();
			   break;

			   case 1:
				   motor2_tipo=1;
				   motor2_parametro = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   motor2_tipo=2;
				   motor2_parametro = System::Convert::ToDecimal(din->ReadLine());
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
				   motor3_tipo=0;
				   din->ReadLine();
			   break;

			   case 1:
				   motor3_tipo=1;
				   motor3_parametro = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   motor3_tipo=2;
				   motor3_parametro = System::Convert::ToDecimal(din->ReadLine());
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
				   motor4_tipo=0;
				   din->ReadLine();
			   break;

			   case 1:
				   motor4_tipo=1;
				   motor4_parametro = System::Convert::ToDecimal(din->ReadLine());
				   din->ReadLine();
			   break;

			   case 2:
				   motor4_tipo=2;
				   motor4_parametro = System::Convert::ToDecimal(din->ReadLine());
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

			//atualiza as caixas de seleção de motores
			comboBox2->Items->Clear();
			if (motor1_tipo == 2 ) comboBox2->Items->Add("1");
			if (motor2_tipo == 2 ) comboBox2->Items->Add("2");
			if (motor3_tipo == 2 ) comboBox2->Items->Add("3");
			if (motor4_tipo == 2 ) comboBox2->Items->Add("4");

            comboBox3->Items->Clear();
			if (motor1_tipo == 2 ) comboBox3->Items->Add("1");
			if (motor2_tipo == 2 ) comboBox3->Items->Add("2");
			if (motor3_tipo == 2 ) comboBox3->Items->Add("3");
			if (motor4_tipo == 2 ) comboBox3->Items->Add("4");

			comboBox4->Items->Clear();
			if (motor1_tipo == 2 ) comboBox4->Items->Add("1");
			if (motor2_tipo == 2 ) comboBox4->Items->Add("2");
			if (motor3_tipo == 2 ) comboBox4->Items->Add("3");
			if (motor4_tipo == 2 ) comboBox4->Items->Add("4");

			comboBox6->Items->Clear();
			if (motor1_tipo == 1 ) comboBox6->Items->Add("1");
			if (motor2_tipo == 1 ) comboBox6->Items->Add("2");
			if (motor3_tipo == 1 ) comboBox6->Items->Add("3");
			if (motor4_tipo == 1 ) comboBox6->Items->Add("4");


		 }
private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e)
		 {
		    

		      //MessageBox::Show("mudou");
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
			  	     motor1_tipo=0;
					 motor1_parametro=0;
				     din->ReadLine();
			     break;

			     case 1:
				     motor1_tipo=1;
				     motor1_parametro = System::Convert::ToDecimal(din->ReadLine());
				     din->ReadLine();
			     break;

			     case 2:
				     motor1_tipo=2;
				     motor1_parametro = System::Convert::ToDecimal(din->ReadLine());
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
				     motor2_tipo=0;
					 motor2_parametro=0;
				     din->ReadLine();
			     break;

			     case 1:
				     motor2_tipo=1;
				     motor2_parametro = System::Convert::ToDecimal(din->ReadLine());
				     din->ReadLine();
			     break;

			     case 2:
				     motor2_tipo=2;
				     motor2_parametro = System::Convert::ToDecimal(din->ReadLine());
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
				     motor3_tipo=0;
					 motor3_parametro=0;
				     din->ReadLine();
			     break;

			     case 1:
				     motor3_tipo=1;
				     motor3_parametro = System::Convert::ToDecimal(din->ReadLine());
				     din->ReadLine();
			     break;

			     case 2:
				     motor3_tipo=2;
				     motor3_parametro = System::Convert::ToDecimal(din->ReadLine());
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
				     motor4_tipo=0;
					 motor4_parametro=0;
				     din->ReadLine();
			     break;

			     case 1:
				     motor4_tipo=1;
				     motor4_parametro = System::Convert::ToDecimal(din->ReadLine());
				     din->ReadLine();
			     break;

			     case 2:
				     motor4_tipo=2;
				     motor4_parametro = System::Convert::ToDecimal(din->ReadLine());
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
		   
		 
		      //atualiza as caixas de seleção de motores
			  comboBox2->Items->Clear();
			  if (motor1_tipo == 2 ) comboBox2->Items->Add("1");
			  if (motor2_tipo == 2 ) comboBox2->Items->Add("2");
			  if (motor3_tipo == 2 ) comboBox2->Items->Add("3");
			  if (motor4_tipo == 2 ) comboBox2->Items->Add("4");

			  comboBox3->Items->Clear();
			  if (motor1_tipo == 2 ) comboBox3->Items->Add("1");
			  if (motor2_tipo == 2 ) comboBox3->Items->Add("2");
			  if (motor3_tipo == 2 ) comboBox3->Items->Add("3");
			  if (motor4_tipo == 2 ) comboBox3->Items->Add("4");

			  comboBox4->Items->Clear();
			  if (motor1_tipo == 2 ) comboBox4->Items->Add("1");
			  if (motor2_tipo == 2 ) comboBox4->Items->Add("2");
			  if (motor3_tipo == 2 ) comboBox4->Items->Add("3");
			  if (motor4_tipo == 2 ) comboBox4->Items->Add("4");

			  comboBox6->Items->Clear();
			  if (motor1_tipo == 1 ) comboBox6->Items->Add("1");
			  if (motor2_tipo == 1 ) comboBox6->Items->Add("2");
			  if (motor3_tipo == 1 ) comboBox6->Items->Add("3");
			  if (motor4_tipo == 1 ) comboBox6->Items->Add("4");

			  //seleciona o primeiro item da combobox se ouver algum
		      if (comboBox2->Items->Count >= 1) comboBox2->SelectedIndex = 0;
		      if (comboBox3->Items->Count >= 2) comboBox3->SelectedIndex = 1;
			  if (comboBox4->Items->Count >= 1) comboBox4->SelectedIndex = 0;
			  if (comboBox6->Items->Count >= 1) comboBox6->SelectedIndex = 0;
		 
		 }
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 //MessageBox::Show((tabControl1->SelectedIndex+1).ToString());
			 /*if ( ((tabControl1->SelectedIndex == 0) || (tabControl1->SelectedIndex == 2)) )
			 {

                MessageBox::Show("o ponto salvo sera perdido");


			 }*/

		 }
private: System::Void tabControl1_Deselecting(System::Object^  sender, System::Windows::Forms::TabControlCancelEventArgs^  e) {

			 MessageBox::Show("o ponto salvo sera perdido " + (tabControl1->SelectedIndex+1).ToString());

		 }
}
;}