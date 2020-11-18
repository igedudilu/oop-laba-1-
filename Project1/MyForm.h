#pragma once
#include"MyForm1.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ change;
	protected:

	protected:

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ jivotik;


	private: System::Windows::Forms::PictureBox^ mood;
	private: System::Windows::Forms::ProgressBar^ hap;
	private: System::Windows::Forms::RadioButton^ yshko;
	private: System::Windows::Forms::Button^ ches;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->change = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->jivotik = (gcnew System::Windows::Forms::RadioButton());
			this->mood = (gcnew System::Windows::Forms::PictureBox());
			this->hap = (gcnew System::Windows::Forms::ProgressBar());
			this->yshko = (gcnew System::Windows::Forms::RadioButton());
			this->ches = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mood))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// change
			// 
			this->change->Location = System::Drawing::Point(442, 192);
			this->change->Name = L"change";
			this->change->Size = System::Drawing::Size(75, 23);
			this->change->TabIndex = 5;
			this->change->Text = L"mood";
			this->change->UseVisualStyleBackColor = true;
			this->change->Click += gcnew System::EventHandler(this, &MyForm::cahnge_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(96, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// jivotik
			// 
			this->jivotik->AutoSize = true;
			this->jivotik->Location = System::Drawing::Point(821, 153);
			this->jivotik->Name = L"jivotik";
			this->jivotik->Size = System::Drawing::Size(117, 17);
			this->jivotik->TabIndex = 9;
			this->jivotik->TabStop = true;
			this->jivotik->Text = L"почесать животик";
			this->jivotik->UseVisualStyleBackColor = true;
			this->jivotik->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// mood
			// 
			this->mood->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mood.BackgroundImage")));
			this->mood->Enabled = false;
			this->mood->Location = System::Drawing::Point(442, 241);
			this->mood->Name = L"mood";
			this->mood->Size = System::Drawing::Size(496, 376);
			this->mood->TabIndex = 10;
			this->mood->TabStop = false;
			this->mood->Visible = false;
			this->mood->DoubleClick += gcnew System::EventHandler(this, &MyForm::mood_DoubleClick);
			// 
			// hap
			// 
			this->hap->Location = System::Drawing::Point(679, 192);
			this->hap->Name = L"hap";
			this->hap->Size = System::Drawing::Size(259, 23);
			this->hap->TabIndex = 11;
			// 
			// yshko
			// 
			this->yshko->AutoSize = true;
			this->yshko->Location = System::Drawing::Point(679, 153);
			this->yshko->Name = L"yshko";
			this->yshko->Size = System::Drawing::Size(122, 17);
			this->yshko->TabIndex = 12;
			this->yshko->TabStop = true;
			this->yshko->Text = L"почесать за ушком";
			this->yshko->UseVisualStyleBackColor = true;
			this->yshko->CheckedChanged += gcnew System::EventHandler(this, &MyForm::yshko_CheckedChanged);
			// 
			// ches
			// 
			this->ches->Location = System::Drawing::Point(567, 192);
			this->ches->Name = L"ches";
			this->ches->Size = System::Drawing::Size(75, 23);
			this->ches->TabIndex = 13;
			this->ches->Text = L"чешем";
			this->ches->UseVisualStyleBackColor = true;
			this->ches->Click += gcnew System::EventHandler(this, &MyForm::ches_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1100;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Enabled = false;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(442, 241);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(496, 376);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->WaitOnLoad = true;
			this->pictureBox2->DoubleClick += gcnew System::EventHandler(this, &MyForm::mood_DoubleClick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Enabled = false;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(442, 241);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(496, 376);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->DoubleClick += gcnew System::EventHandler(this, &MyForm::mood_DoubleClick);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Enabled = false;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(442, 241);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(496, 376);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->DoubleClick += gcnew System::EventHandler(this, &MyForm::mood_DoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(566, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(740, 71);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(84, 13);
			this->linkLabel1->TabIndex = 19;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"chto-to strannoe";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-1, 604);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(327, 21);
			this->label3->TabIndex = 20;
			this->label3->Text = L"—делано ёртовым и  абировым 2020";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1030, 647);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->ches);
			this->Controls->Add(this->yshko);
			this->Controls->Add(this->hap);
			this->Controls->Add(this->jivotik);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->change);
			this->Controls->Add(this->mood);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mood))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		int a = 10, b = 10, a1, b1, n = 1,t,f=0,z=0;
		
	
		



	private: System::Void cahnge_Click(System::Object^ sender, System::EventArgs^ e) {
		if (n == 1) {
			mood->Visible = true;
			mood->Enabled = true;
		}
		z = 1;

	
	}

	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		

		System::Windows::Forms::Button^ buttonOS = gcnew System::Windows::Forms::Button();

		buttonOS->Location =  System::Drawing::Point(a1- buttonOS->Size.Width/2, b1- buttonOS->Size.Height / 2);

		buttonOS->Click += gcnew EventHandler(this, &MyForm::buttonOS_Click);

		this->Controls->Add(buttonOS);

		buttonOS->Text = L"omg";
		
		
		
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		label1->Text = e->X.ToString();
		label2->Text = e->Y.ToString();
		a1 = e->X;
		b1 = e->Y;
	}
	  

	   Void buttonOS_Click(System::Object^ sender, System::EventArgs^ e)
	   {
		   Button^ buttonOS = safe_cast<Button^>(sender);
		   
		   buttonOS->Visible = false;
		   buttonOS->Enabled = false;
	   }
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void mood_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	mood->Visible = false;
	mood->Enabled = false;
}

private: System::Void yshko_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ches_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->yshko->Checked & z==1) if (this->hap->Value <= 95) this->hap->Value += 5;
	
	else {
		this->hap->Value += 100 - this->hap->Value;
		f = 7;
	}

	if (this->jivotik->Checked & z == 1) if (this->hap->Value <= 90)this->hap->Value += 10;
	else {
		this->hap->Value += 100 - this->hap->Value;
		f = 7;
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	
	if (f == 0) {
		if (this->hap->Value >= 1)
			this->hap->Value -= 1;
	}
	else f--;
	
	
}


private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (this->hap->Value >= 25 & this->hap->Value < 50) {
		pictureBox2->Visible = true;
		pictureBox2->Enabled = true;
		mood->Visible = false;
		mood->Enabled = false;

	}
	else if (this->hap->Value >= 50 & this->hap->Value < 75) {
		pictureBox3->Visible = true;
		pictureBox3->Enabled = true;
		pictureBox2->Visible = false;
		pictureBox2->Enabled = false;

	}
	else if(this->hap->Value >= 75 ) {
		pictureBox4->Visible = true;
		pictureBox4->Enabled = true;
		pictureBox3->Visible = false;
		pictureBox3->Enabled = false;

	}
	if (this->hap->Value < 75) {
		pictureBox4->Visible = false;
		pictureBox4->Enabled = false;
	}
	else if (this->hap->Value < 50) {
		pictureBox3->Visible = false;
		pictureBox3->Enabled = false;
	
	}
	else if (this->hap->Value < 25) {
		pictureBox2->Visible = false;
		pictureBox2->Enabled = false;
	}
}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	MyForm1^ f2 = gcnew MyForm1();
	f2->Show();
}
};
}
