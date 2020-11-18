#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TextBox^ vvod;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ vibor1;
	private: System::Windows::Forms::CheckBox^ vibor2;
	private: System::Windows::Forms::ErrorProvider^ oshibka;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;

	private:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;







	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->vvod = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->vibor1 = (gcnew System::Windows::Forms::CheckBox());
			this->vibor2 = (gcnew System::Windows::Forms::CheckBox());
			this->oshibka = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->oshibka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(312, 289);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->toolTip1->SetToolTip(this->trackBar1, L"ny davai riskni");
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm1::trackBar1_Scroll);
			// 
			// vvod
			// 
			this->vvod->Location = System::Drawing::Point(125, 160);
			this->vvod->Name = L"vvod";
			this->vvod->Size = System::Drawing::Size(100, 20);
			this->vvod->TabIndex = 1;
			this->vvod->Text = L"hehe";
			this->vvod->Click += gcnew System::EventHandler(this, &MyForm1::vvod_Click);
			this->vvod->TextChanged += gcnew System::EventHandler(this, &MyForm1::vvod_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(278, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"vvedi sore";
			this->label1->Visible = false;
			// 
			// vibor1
			// 
			this->vibor1->AutoSize = true;
			this->vibor1->Location = System::Drawing::Point(586, 92);
			this->vibor1->Name = L"vibor1";
			this->vibor1->Size = System::Drawing::Size(55, 17);
			this->vibor1->TabIndex = 3;
			this->vibor1->Text = L"vibor1";
			this->vibor1->UseVisualStyleBackColor = true;
			this->vibor1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::vibor1_CheckedChanged);
			// 
			// vibor2
			// 
			this->vibor2->AutoSize = true;
			this->vibor2->Checked = true;
			this->vibor2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->vibor2->Location = System::Drawing::Point(586, 116);
			this->vibor2->Name = L"vibor2";
			this->vibor2->Size = System::Drawing::Size(55, 17);
			this->vibor2->TabIndex = 4;
			this->vibor2->Text = L"vibor2";
			this->vibor2->UseVisualStyleBackColor = true;
			this->vibor2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::vibor2_CheckedChanged);
			// 
			// oshibka
			// 
			this->oshibka->ContainerControl = this;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"jeltiy", L"zeleniy" });
			this->comboBox1->Location = System::Drawing::Point(12, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"poprobyi";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextUpdate += gcnew System::EventHandler(this, &MyForm1::comboBox1_TextUpdate);
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(438, 163);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(316, 245);
			this->splitContainer1->SplitterDistance = 149;
			this->splitContainer1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 241);
			this->button1->TabIndex = 0;
			this->button1->Text = L"izmena";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->AutoScroll = true;
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			this->splitContainer2->Panel1->Click += gcnew System::EventHandler(this, &MyForm1::splitContainer2_Panel1_Click);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer2->Panel2->Controls->Add(this->label3);
			this->splitContainer2->Size = System::Drawing::Size(159, 241);
			this->splitContainer2->SplitterDistance = 126;
			this->splitContainer2->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(765, 420);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->vibor2);
			this->Controls->Add(this->vibor1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->vvod);
			this->Controls->Add(this->trackBar1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->oshibka))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		if (this->trackBar1->Value == 10) { MyForm1::BackColor = Color::Black; 
		label1->Visible = true;
		}
	}
	private: System::Void vvod_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if(this->vvod->Text=="sore") MyForm1::BackColor = Color::Cyan;
	}
	private: System::Void vvod_Click(System::Object^ sender, System::EventArgs^ e) {
		this->vvod->Text = "";
		
	}

private: System::Void vibor1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->vibor1->Checked == true) { 
		this->vibor2->Checked = false;
		oshibka->SetError(vibor1, "zachem");
	}
	else  oshibka->Clear();
}
private: System::Void vibor2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->vibor2->Checked == true) {
		this->vibor1->Checked = false;
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if(comboBox1->Text=="jeltiy") this->BackColor = System::Drawing::Color::Yellow;
	else if (comboBox1->Text == "zeleniy") this->BackColor = System::Drawing::Color::Green;
	else if (comboBox1->Text != "poprobyi") this->BackColor = System::Drawing::Color::Black;
}
private: System::Void comboBox1_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "jeltiy") this->BackColor = System::Drawing::Color::Yellow;
	else if (comboBox1->Text == "zeleniy") this->BackColor = System::Drawing::Color::Green;
	else if (comboBox1->Text != "poprobyi") this->BackColor = System::Drawing::Color::OrangeRed;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->splitContainer2->Panel1->BackColor = System::Drawing::Color::OrangeRed;
	this->splitContainer2->Panel2->BackColor = System::Drawing::Color::DarkSeaGreen;
	label2->Text = "lychshe";
	label3->Text = "lychshe";

}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	this->splitContainer1->Panel2Collapsed = false;
	this->splitContainer1->Panel2->Text = "lol";

}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer2_Panel1_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->splitContainer2->Panel1->BackColor = System::Drawing::Color::OrangeRed;
}
};
}
