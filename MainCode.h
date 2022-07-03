#pragma once

namespace TickCross {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainCode
	/// </summary>
	public ref class MainCode : public System::Windows::Forms::Form
	{
	public:
		MainCode(void)
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
		~MainCode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainCode::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(433, 398);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MainCode::groupBox2_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label6->Location = System::Drawing::Point(171, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 22);
			this->label6->TabIndex = 46;
			this->label6->Text = L"HARREY_BE";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(232, 140);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(176, 238);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(49, 165);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(80, 32);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"5 X 5";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(49, 107);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(80, 32);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"4 X 4";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(49, 45);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(80, 32);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"3 X 3";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 12));
			this->button4->Location = System::Drawing::Point(44, 325);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(182, 53);
			this->button4->TabIndex = 10;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainCode::button4_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 12));
			this->button3->Location = System::Drawing::Point(44, 264);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(182, 53);
			this->button3->TabIndex = 9;
			this->button3->Text = L"CREDITS";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainCode::button3_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 12));
			this->button2->Location = System::Drawing::Point(44, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 53);
			this->button2->TabIndex = 8;
			this->button2->Text = L"LOAD GAME";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 12));
			this->button1->Location = System::Drawing::Point(44, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 53);
			this->button1->TabIndex = 7;
			this->button1->Text = L"NEW GAME";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainCode::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Honeydew;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(75, 16);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(20, 10, 10, 20);
			this->label1->Size = System::Drawing::Size(310, 85);
			this->label1->TabIndex = 6;
			this->label1->Text = L"TiCK CrOSS 👽";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button30);
			this->groupBox3->Controls->Add(this->button31);
			this->groupBox3->Controls->Add(this->button32);
			this->groupBox3->Controls->Add(this->button33);
			this->groupBox3->Controls->Add(this->button34);
			this->groupBox3->Controls->Add(this->button24);
			this->groupBox3->Controls->Add(this->button25);
			this->groupBox3->Controls->Add(this->button26);
			this->groupBox3->Controls->Add(this->button27);
			this->groupBox3->Controls->Add(this->button28);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->button21);
			this->groupBox3->Controls->Add(this->button22);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Controls->Add(this->button16);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Location = System::Drawing::Point(451, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(360, 364);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MainCode::groupBox3_Enter);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(271, 275);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(60, 60);
			this->button30->TabIndex = 45;
			this->button30->Text = L": (";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MainCode::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(211, 275);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(60, 60);
			this->button31->TabIndex = 44;
			this->button31->Text = L": (";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MainCode::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(151, 275);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(60, 60);
			this->button32->TabIndex = 43;
			this->button32->Text = L": (";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MainCode::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(91, 275);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(60, 60);
			this->button33->TabIndex = 42;
			this->button33->Text = L": (";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MainCode::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(31, 275);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(60, 60);
			this->button34->TabIndex = 41;
			this->button34->Text = L": (";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MainCode::button34_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(271, 215);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(60, 60);
			this->button24->TabIndex = 39;
			this->button24->Text = L": (";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MainCode::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(211, 215);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(60, 60);
			this->button25->TabIndex = 38;
			this->button25->Text = L": (";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MainCode::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(151, 215);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(60, 60);
			this->button26->TabIndex = 37;
			this->button26->Text = L": (";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MainCode::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(91, 215);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(60, 60);
			this->button27->TabIndex = 36;
			this->button27->Text = L": (";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MainCode::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(31, 215);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(60, 60);
			this->button28->TabIndex = 35;
			this->button28->Text = L": (";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MainCode::button28_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(271, 155);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(60, 60);
			this->button18->TabIndex = 33;
			this->button18->Text = L": (";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MainCode::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(211, 155);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 60);
			this->button19->TabIndex = 32;
			this->button19->Text = L": (";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MainCode::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(151, 155);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(60, 60);
			this->button20->TabIndex = 31;
			this->button20->Text = L": (";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MainCode::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(91, 155);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(60, 60);
			this->button21->TabIndex = 30;
			this->button21->Text = L": (";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MainCode::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(31, 155);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(60, 60);
			this->button22->TabIndex = 29;
			this->button22->Text = L": (";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MainCode::button22_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(271, 95);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 60);
			this->button12->TabIndex = 27;
			this->button12->Text = L": (";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MainCode::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(211, 95);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 60);
			this->button13->TabIndex = 26;
			this->button13->Text = L": (";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MainCode::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(151, 95);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 25;
			this->button14->Text = L": (";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MainCode::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(91, 95);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 60);
			this->button15->TabIndex = 24;
			this->button15->Text = L": (";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MainCode::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(31, 95);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 60);
			this->button16->TabIndex = 23;
			this->button16->Text = L": (";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MainCode::button16_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(271, 35);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 21;
			this->button9->Text = L": (";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainCode::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(211, 35);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 20;
			this->button8->Text = L": (";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainCode::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(151, 35);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 19;
			this->button7->Text = L": (";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainCode::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(91, 35);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 18;
			this->button6->Text = L": (";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainCode::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(31, 35);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 17;
			this->button5->Text = L": (";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainCode::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(457, 380);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"PL-X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(733, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 31);
			this->label3->TabIndex = 14;
			this->label3->Text = L"PL-O";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->Location = System::Drawing::Point(553, 384);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 26);
			this->label4->TabIndex = 15;
			this->label4->Text = L"STATUS :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->Location = System::Drawing::Point(668, 385);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 26);
			this->label5->TabIndex = 16;
			this->label5->Text = L"00";
			// 
			// MainCode
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MintCream;
			this->CancelButton = this->button4;
			this->ClientSize = System::Drawing::Size(818, 422);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(834, 461);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(834, 461);
			this->Name = L"MainCode";
			this->Text = L"MainCode";
			this->Load += gcnew System::EventHandler(this, &MainCode::MainCode_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool play = 0;
	bool gamewin() {
			//09 08 07 06 05
			//16 15 14 13 12
			//22 21 20 19 18
			//28 27 26 25 24
			//34 33 32 31 30 
			if (radioButton1->Checked) {
				if (button15->Text != "" && button15->Text == button13->Text && button13->Text == button14->Text) {
					return true;
				}
				if (button21->Text != "" && button21->Text == button20->Text && button20->Text == button19->Text) {
					return true;
				}
				if (button27->Text != "" && button27->Text == button26->Text && button26->Text == button25->Text) {
					return true;
				}
				if (button15->Text != "" && button15->Text == button21->Text && button21->Text == button27->Text) {
					return true;
				}
				if (button14->Text != "" && button14->Text == button20->Text && button20->Text == button26->Text) {
					return true;
				}
				if (button13->Text != "" && button13->Text == button19->Text && button19->Text == button25->Text) {
					return true;
				}
				if (button15->Text != "" && button15->Text == button20->Text && button20->Text == button25->Text) {
					return true;
				}
				if (button13->Text != "" && button13->Text == button20->Text && button20->Text == button27->Text) {
					return true;
				}
			}
			if (radioButton2->Checked) {
				if (button15->Text != "" && button15->Text == button21->Text && button21->Text == button27->Text && button27->Text == button33->Text) {
					return true;
				}
				if (button14->Text != "" && button14->Text == button20->Text && button20->Text == button26->Text && button26->Text == button32->Text) {
					return true;
				}
				if (button13->Text != "" && button13->Text == button19->Text && button19->Text == button25->Text && button25->Text == button31->Text) {
					return true;
				}
				if (button12->Text != "" && button12->Text == button18->Text && button18->Text == button24->Text && button24->Text == button30->Text) {
					return true;
				}
				//
				if (button15->Text != "" && button15->Text == button14->Text && button14->Text == button13->Text && button13->Text == button12->Text) {
					return true;
				}
				if (button21->Text != "" && button21->Text == button20->Text && button20->Text == button19->Text && button19->Text == button18->Text) {
					return true;
				}
				if (button27->Text != "" && button27->Text == button26->Text && button26->Text == button25->Text && button25->Text == button24->Text) {
					return true;
				}
				if (button33->Text != "" && button33->Text == button32->Text && button32->Text == button31->Text && button31->Text == button30->Text) {
					return true;
				}
				//
				if (button15->Text != "" && button15->Text == button20->Text && button20->Text == button25->Text && button25->Text == button30->Text) {
					return true;
				}
				if (button12->Text != "" && button12->Text == button19->Text && button19->Text == button26->Text && button26->Text == button33->Text) {
					return true;
				}
			}
			if (radioButton3->Checked) {
				if (button9->Text != "" && button9->Text == button8->Text && button8->Text == button7->Text && button7->Text == button6->Text && button6->Text == button5->Text) {
					return true;
				}
				if (button16->Text != "" && button16->Text == button15->Text && button15->Text == button14->Text && button14->Text == button13->Text && button13->Text == button12->Text) {
					return true;
				}
				if (button22->Text != "" && button22->Text == button21->Text && button21->Text == button20->Text && button20->Text == button19->Text && button19->Text == button18->Text) {
					return true;
				}
				if (button28->Text != "" && button28->Text == button27->Text && button27->Text == button26->Text && button26->Text == button25->Text && button25->Text == button24->Text) {
					return true;
				}
				if (button34->Text != "" && button34->Text == button33->Text && button33->Text == button32->Text && button32->Text == button31->Text && button31->Text == button30->Text) {
					return true;
				}
				//
				if (button9->Text != "" && button9->Text == button16->Text && button16->Text == button22->Text && button22->Text == button28->Text && button28->Text == button34->Text) {
					return true;
				}
				if (button8->Text != "" && button8->Text == button15->Text && button15->Text == button21->Text && button21->Text == button27->Text && button27->Text == button33->Text) {
					return true;
				}
				if (button7->Text != "" && button7->Text == button14->Text && button14->Text == button20->Text && button20->Text == button26->Text && button26->Text == button32->Text) {
					return true;
				}
				if (button6->Text != "" && button6->Text == button13->Text && button13->Text == button19->Text && button19->Text == button25->Text && button25->Text == button31->Text) {
					return true;
				}
				if (button5->Text != "" && button5->Text == button12->Text && button12->Text == button18->Text && button18->Text == button24->Text && button24->Text == button30->Text) {
					return true;
				}
				//
				if (button9->Text != "" && button9->Text == button15->Text && button15->Text == button20->Text && button20->Text == button25->Text && button25->Text == button30->Text) {
					return true;
				}
				if (button5->Text != "" && button5->Text == button13->Text && button13->Text == button20->Text && button20->Text == button27->Text && button27->Text == button34->Text) {
					return true;
				}
			}
			return false;
		}
	bool tiecheck() {
		//09 08 07 06 05
		//16 15 14 13 12
		//22 21 20 19 18
		//28 27 26 25 24
		//34 33 32 31 30 
		if (radioButton1->Checked) {
			if (button15->Text != "O" && button15->Text != "X") {
				return false;
			}
			if (button14->Text != "O" && button14->Text != "X") {
				return false;
			}
			if (button13->Text != "O" && button13->Text != "X") {
				return false;
			}
			if (button21->Text != "O" && button21->Text != "X") {
				return false;
			}
			if (button20->Text != "O" && button20->Text != "X") {
				return false;
			}
			if (button19->Text != "O" && button19->Text != "X") {
				return false;
			}
			if (button27->Text != "O" && button27->Text != "X") {
				return false;
			}
			if (button26->Text != "O" && button26->Text != "X") {
				return false;
			}
			if (button25->Text != "O" && button25->Text != "X") {
				return false;
			}
		}
		if (radioButton2->Checked) {
			if (button15->Text != "O" && button15->Text != "X") {
				return false;
			}
			if (button14->Text != "O" && button14->Text != "X") {
				return false;
			}
			if (button13->Text != "O" && button13->Text != "X") {
				return false;
			}
			if (button21->Text != "O" && button21->Text != "X") {
				return false;
			}
			if (button20->Text != "O" && button20->Text != "X") {
				return false;
			}
			if (button19->Text != "O" && button19->Text != "X") {
				return false;
			}
			if (button27->Text != "O" && button27->Text != "X") {
				return false;
			}
			if (button26->Text != "O" && button26->Text != "X") {
				return false;
			}
			if (button25->Text != "O" && button25->Text != "X") {
				return false;
			}
			if (button12->Text != "O" && button12->Text != "X") {
				return false;
			}
			if (button18->Text != "O" && button18->Text != "X") {
				return false;
			}
			if (button24->Text != "O" && button24->Text != "X") {
				return false;
			}
			if (button30->Text != "O" && button30->Text != "X") {
				return false;
			}
			if (button33->Text != "O" && button33->Text != "X") {
				return false;
			}
			if (button32->Text != "O" && button32->Text != "X") {
				return false;
			}
			if (button31->Text != "O" && button31->Text != "X") {
				return false;
			}
		}
		if (radioButton3->Checked) {
			if (button15->Text != "O" && button15->Text != "X") {
				return false;
			}
			if (button14->Text != "O" && button14->Text != "X") {
				return false;
			}
			if (button13->Text != "O" && button13->Text != "X") {
				return false;
			}
			if (button21->Text != "O" && button21->Text != "X") {
				return false;
			}
			if (button20->Text != "O" && button20->Text != "X") {
				return false;
			}
			if (button19->Text != "O" && button19->Text != "X") {
				return false;
			}
			if (button27->Text != "O" && button27->Text != "X") {
				return false;
			}
			if (button26->Text != "O" && button26->Text != "X") {
				return false;
			}
			if (button25->Text != "O" && button25->Text != "X") {
				return false;
			}
			if (button12->Text != "O" && button12->Text != "X") {
				return false;
			}
			if (button18->Text != "O" && button18->Text != "X") {
				return false;
			}
			if (button24->Text != "O" && button24->Text != "X") {
				return false;
			}
			if (button30->Text != "O" && button30->Text != "X") {
				return false;
			}
			if (button33->Text != "O" && button33->Text != "X") {
				return false;
			}
			if (button32->Text != "O" && button32->Text != "X") {
				return false;
			}
			if (button31->Text != "O" && button31->Text != "X") {
				return false;
			}
			if (button9->Text != "O" && button9->Text != "X") {
				return false;
			}
			if (button8->Text != "O" && button8->Text != "X") {
				return false;
			}
			if (button7->Text != "O" && button7->Text != "X") {
				return false;
			}
			if (button6->Text != "O" && button6->Text != "X") {
				return false;
			}
			if (button5->Text != "O" && button5->Text != "X") {
				return false;
			}
			if (button16->Text != "O" && button16->Text != "X") {
				return false;
			}
			if (button22->Text != "O" && button22->Text != "X") {
				return false;
			}
			if (button28->Text != "O" && button28->Text != "X") {
				return false;
			}
			if (button34->Text != "O" && button34->Text != "X") {
				return false;
			}
		}
		return true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MessageBox::Show("It was fun playing...! Sweetoo");
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Game: TiCK-CrOSS\nLiscened Under: PEMLIM Liscensing\nLiscened by: Harrey_B\nLaunch Date: 8 June 2022\nOffice: FAST NUCES, Lahore\nFurther Inquiry: 03245414633\nErrors and Bugs at: harrisbasra@gmail.com\n\nAll Rights Reserved");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		{
			button5->Enabled = 0;
			button6->Enabled = 0;
			button7->Enabled = 0;
			button8->Enabled = 0;
			button9->Enabled = 0;
			////////////////////
			button12->Enabled = 0;
			button13->Enabled = 0;
			button14->Enabled = 0;
			button15->Enabled = 0;
			button16->Enabled = 0;
			////////////////////
			button18->Enabled = 0;
			button19->Enabled = 0;
			button20->Enabled = 0;
			button21->Enabled = 0;
			button22->Enabled = 0;
			////////////////////
			button24->Enabled = 0;
			button25->Enabled = 0;
			button26->Enabled = 0;
			button27->Enabled = 0;
			button28->Enabled = 0;
			////////////////////
			button30->Enabled = 0;
			button31->Enabled = 0;
			button32->Enabled = 0;
			button33->Enabled = 0;
			button34->Enabled = 0;
			////////////////////
			label2->Enabled = 0;
			label3->Enabled = 0;
		}
		if (radioButton1->Checked) {
			button13->Enabled = 1;
			button13->Text = "";
			button14->Enabled = 1;
			button14->Text = "";
			button15->Enabled = 1;
			button15->Text = "";
			//
			button19->Enabled = 1;
			button19->Text = "";
			button20->Enabled = 1;
			button20->Text = "";
			button21->Enabled = 1;
			button21->Text = "";
			//
			button25->Enabled = 1;
			button25->Text = "";
			button26->Enabled = 1;
			button26->Text = "";
			button27->Enabled = 1;
			button27->Text = "";
		}
		if (radioButton2->Checked) {
			button12->Enabled = 1;
			button12->Text = "";
			button13->Enabled = 1;
			button13->Text = "";
			button14->Enabled = 1;
			button14->Text = "";
			button15->Enabled = 1;
			button15->Text = "";
			//
			button18->Enabled = 1;
			button18->Text = "";
			button19->Enabled = 1;
			button19->Text = "";
			button20->Enabled = 1;
			button20->Text = "";
			button21->Enabled = 1;
			button21->Text = "";
			//
			button24->Enabled = 1;
			button24->Text = "";
			button25->Enabled = 1;
			button25->Text = "";
			button26->Enabled = 1;
			button26->Text = "";
			button27->Enabled = 1;
			button27->Text = "";
			//
			button30->Enabled = 1;
			button30->Text = "";
			button31->Enabled = 1;
			button31->Text = "";
			button32->Enabled = 1;
			button32->Text = "";
			button33->Enabled = 1;
			button33->Text = "";
		}
		if (radioButton3->Checked) {
			button5->Enabled = 1;
			button5->Text = "";
			button6->Enabled = 1;
			button6->Text = "";
			button7->Enabled = 1;
			button7->Text = "";
			button8->Enabled = 1;
			button8->Text = "";
			button9->Enabled = 1;
			button9->Text = "";
			////////////////////
			button12->Enabled = 1;
			button12->Text = "";
			button13->Enabled = 1;
			button13->Text = "";
			button14->Enabled = 1;
			button14->Text = "";
			button15->Enabled = 1;
			button15->Text = "";
			button16->Enabled = 1;
			button16->Text = "";
			////////////////////
			button18->Enabled = 1;
			button18->Text = "";
			button19->Enabled = 1;
			button19->Text = "";
			button20->Enabled = 1;
			button20->Text = "";
			button21->Enabled = 1;
			button21->Text = "";
			button22->Enabled = 1;
			button22->Text = "";
			////////////////////
			button24->Enabled = 1;
			button24->Text = "";
			button25->Enabled = 1;
			button25->Text = "";
			button26->Enabled = 1;
			button26->Text = "";
			button27->Enabled = 1;
			button27->Text = "";
			button28->Enabled = 1;
			button28->Text = "";
			////////////////////
			button30->Enabled = 1;
			button30->Text = "";
			button31->Enabled = 1;
			button31->Text = "";
			button32->Enabled = 1;
			button32->Text = "";
			button33->Enabled = 1;
			button33->Text = "";
			button34->Enabled = 1;
			button34->Text = "";
		}
		groupBox1->Enabled = 0;

	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Game: TiCK-CrOSS\nLiscened Under: PEMLIM Liscensing\nLiscened by: Harrey_B\nLaunch Date: 8 June 2022\nOffice: FAST NUCES, Lahore\nFurther Inquiry: 03245414633\nErrors and Bugs at: harrisbasra@gmail.com\n\nAll Rights Reserved@CoCaCoLa <3");

	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MessageBox::Show("It was fun playing...! Sweetoo");
		this->Close();
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void MainCode_Load(System::Object^ sender, System::EventArgs^ e) {
		radioButton1->Checked = 1;
		{
			button5->Enabled = 0;
			button6->Enabled = 0;
			button7->Enabled = 0;
			button8->Enabled = 0;
			button9->Enabled = 0;
			////////////////////
			button12->Enabled = 0;
			button13->Enabled = 0;
			button14->Enabled = 0;
			button15->Enabled = 0;
			button16->Enabled = 0;
			////////////////////
			button18->Enabled = 0;
			button19->Enabled = 0;
			button20->Enabled = 0;
			button21->Enabled = 0;
			button22->Enabled = 0;
			////////////////////
			button24->Enabled = 0;
			button25->Enabled = 0;
			button26->Enabled = 0;
			button27->Enabled = 0;
			button28->Enabled = 0;
			////////////////////
			button30->Enabled = 0;
			button31->Enabled = 0;
			button32->Enabled = 0;
			button33->Enabled = 0;
			button34->Enabled = 0;
			////////////////////
			label2->Enabled = 0;
			label3->Enabled = 0;
		}
		{
			button13->Enabled = 1;
			button14->Enabled = 1;
			button15->Enabled = 1;
			//
			button19->Enabled = 1;
			button20->Enabled = 1;
			button21->Enabled = 1;
			//
			button25->Enabled = 1;
			button26->Enabled = 1;
			button27->Enabled = 1;
		}
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if(button20->Text!="O" && button20->Text!="X")
		if (play) {
			button20->Text = "O";
			play = !play;
		}
		else {
			button20->Text = "X";
			play = !play;
		}
		if (gamewin()) {
			if(play)
			MessageBox::Show("PLAYER 1 WINS THE GAME");
			else
			MessageBox::Show("PLAYER 2 WINS THE GAME");
			this->Close();
		}
		if (tiecheck()) {
			MessageBox::Show("TIE CHECKED X|");
			this->Close();
		}
	}
	private: System::Void button19_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button19->Text != "O" && button19->Text != "X")
				   if (play) {
					   button19->Text = "O";
					   play = !play;
				   }
				   else {
					   button19->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
	}
	private: System::Void button21_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button21->Text != "O" && button21->Text != "X")
				   if (play) {
					   button21->Text = "O";
					   play = !play;
				   }
				   else {
					   button21->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button13_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button13->Text != "O" && button13->Text != "X")
				   if (play) {
					   button13->Text = "O";
					   play = !play;
				   }
				   else {
					   button13->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button14_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button14->Text != "O" && button14->Text != "X")
				   if (play) {
					   button14->Text = "O";
					   play = !play;
				   }
				   else {
					   button14->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button15_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button15->Text != "O" && button15->Text != "X")
				   if (play) {
					   button15->Text = "O";
					   play = !play;
				   }
				   else {
					   button15->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button25_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button25->Text != "O" && button25->Text != "X")
				   if (play) {
					   button25->Text = "O";
					   play = !play;
				   }
				   else {
					   button25->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button26_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button26->Text != "O" && button26->Text != "X")
				   if (play) {
					   button26->Text = "O";
					   play = !play;
				   }
				   else {
					   button26->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button27_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button27->Text != "O" && button27->Text != "X")
				   if (play) {
					   button27->Text = "O";
					   play = !play;
				   }
				   else {
					   button27->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button12_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button12->Text != "O" && button12->Text != "X")
				   if (play) {
					   button12->Text = "O";
					   play = !play;
				   }
				   else {
					   button12->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button18_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button18->Text != "O" && button18->Text != "X")
				   if (play) {
					   button18->Text = "O";
					   play = !play;
				   }
				   else {
					   button18->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button24_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button24->Text != "O" && button24->Text != "X")
				   if (play) {
					   button24->Text = "O";
					   play = !play;
				   }
				   else {
					   button24->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button30_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button30->Text != "O" && button30->Text != "X")
				   if (play) {
					   button30->Text = "O";
					   play = !play;
				   }
				   else {
					   button30->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button31_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button31->Text != "O" && button31->Text != "X")
				   if (play) {
					   button31->Text = "O";
					   play = !play;
				   }
				   else {
					   button31->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button32_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button32->Text != "O" && button32->Text != "X")
				   if (play) {
					   button32->Text = "O";
					   play = !play;
				   }
				   else {
					   button32->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button33_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button33->Text != "O" && button33->Text != "X")
				   if (play) {
					   button33->Text = "O";
					   play = !play;
				   }
				   else {
					   button33->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button9_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button9->Text != "O" && button9->Text != "X")
				   if (play) {
					   button9->Text = "O";
					   play = !play;
				   }
				   else {
					   button9->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button8_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button8->Text != "O" && button8->Text != "X")
				   if (play) {
					   button8->Text = "O";
					   play = !play;
				   }
				   else {
					   button8->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button7_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button7->Text != "O" && button7->Text != "X")
				   if (play) {
					   button7->Text = "O";
					   play = !play;
				   }
				   else {
					   button7->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button6->Text != "O" && button6->Text != "X")
				   if (play) {
					   button6->Text = "O";
					   play = !play;
				   }
				   else {
					   button6->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button5_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button5->Text != "O" && button5->Text != "X")
				   if (play) {
					   button5->Text = "O";
					   play = !play;
				   }
				   else {
					   button5->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button16_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button16->Text != "O" && button16->Text != "X")
				   if (play) {
					   button16->Text = "O";
					   play = !play;
				   }
				   else {
					   button16->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button22_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button22->Text != "O" && button22->Text != "X")
				   if (play) {
					   button22->Text = "O";
					   play = !play;
				   }
				   else {
					   button22->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button28_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button28->Text != "O" && button28->Text != "X")
				   if (play) {
					   button28->Text = "O";
					   play = !play;
				   }
				   else {
					   button28->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
	private: System::Void button34_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (button34->Text != "O" && button34->Text != "X")
				   if (play) {
					   button34->Text = "O";
					   play = !play;
				   }
				   else {
					   button34->Text = "X";
					   play = !play;
				   }
			   if (gamewin()) {
				   if (play)
					   MessageBox::Show("PLAYER 1 WINS THE GAME");
				   else
					   MessageBox::Show("PLAYER 2 WINS THE GAME");
				   this->Close();
			   }
			   if (tiecheck()) {
				   MessageBox::Show("TIE CHECKED X|");
				   this->Close();
			   }
		   }
		   
};
}
