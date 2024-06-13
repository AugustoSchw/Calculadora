#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_num_1;
	private: System::Windows::Forms::Button^ button_num_0;
	protected:

	protected:


















	private: System::Windows::Forms::Label^ label_resultado;
	private: System::Windows::Forms::Button^ button_menos;


	private: System::Windows::Forms::Button^ button_enter;
	private: System::Windows::Forms::Button^ button_mais;
	private: System::Windows::Forms::Button^ button_div;





	private: System::Windows::Forms::Button^ button_mult;
	private: System::Windows::Forms::Button^ button_num_2;
	private: System::Windows::Forms::Button^ button_num_3;
	private: System::Windows::Forms::Button^ button_num_4;
	private: System::Windows::Forms::Button^ button_num_5;
	private: System::Windows::Forms::Button^ button_num_6;
	private: System::Windows::Forms::Button^ button_num_9;






	private: System::Windows::Forms::Button^ button_num_8;

	private: System::Windows::Forms::Button^ button_num_7;






	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

	private:
		int num1;
		int num2;
		int operacao;
		   int resultado;

	private: System::Windows::Forms::Button^ button_clear;
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_num_1 = (gcnew System::Windows::Forms::Button());
			this->button_num_0 = (gcnew System::Windows::Forms::Button());
			this->label_resultado = (gcnew System::Windows::Forms::Label());
			this->button_menos = (gcnew System::Windows::Forms::Button());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->button_mais = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button_num_2 = (gcnew System::Windows::Forms::Button());
			this->button_num_3 = (gcnew System::Windows::Forms::Button());
			this->button_num_4 = (gcnew System::Windows::Forms::Button());
			this->button_num_5 = (gcnew System::Windows::Forms::Button());
			this->button_num_6 = (gcnew System::Windows::Forms::Button());
			this->button_num_9 = (gcnew System::Windows::Forms::Button());
			this->button_num_8 = (gcnew System::Windows::Forms::Button());
			this->button_num_7 = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_num_1
			// 
			this->button_num_1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_1->Location = System::Drawing::Point(13, 123);
			this->button_num_1->Margin = System::Windows::Forms::Padding(4);
			this->button_num_1->Name = L"button_num_1";
			this->button_num_1->Size = System::Drawing::Size(82, 62);
			this->button_num_1->TabIndex = 0;
			this->button_num_1->Text = L"1";
			this->button_num_1->UseCompatibleTextRendering = true;
			this->button_num_1->UseVisualStyleBackColor = false;
			this->button_num_1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_num_0
			// 
			this->button_num_0->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_0->Location = System::Drawing::Point(13, 333);
			this->button_num_0->Margin = System::Windows::Forms::Padding(4);
			this->button_num_0->Name = L"button_num_0";
			this->button_num_0->Size = System::Drawing::Size(262, 50);
			this->button_num_0->TabIndex = 9;
			this->button_num_0->Text = L"0";
			this->button_num_0->UseCompatibleTextRendering = true;
			this->button_num_0->UseVisualStyleBackColor = false;
			this->button_num_0->Click += gcnew System::EventHandler(this, &MyForm::button_num_0_Click);
			// 
			// label_resultado
			// 
			this->label_resultado->AutoSize = true;
			this->label_resultado->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_resultado->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_resultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_resultado->Location = System::Drawing::Point(12, 33);
			this->label_resultado->MinimumSize = System::Drawing::Size(260, 65);
			this->label_resultado->Name = L"label_resultado";
			this->label_resultado->Size = System::Drawing::Size(260, 65);
			this->label_resultado->TabIndex = 18;
			this->label_resultado->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button_menos
			// 
			this->button_menos->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_menos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_menos->Location = System::Drawing::Point(339, 124);
			this->button_menos->Margin = System::Windows::Forms::Padding(4);
			this->button_menos->Name = L"button_menos";
			this->button_menos->Size = System::Drawing::Size(48, 48);
			this->button_menos->TabIndex = 20;
			this->button_menos->Text = L"-";
			this->button_menos->UseCompatibleTextRendering = true;
			this->button_menos->UseVisualStyleBackColor = false;
			this->button_menos->Click += gcnew System::EventHandler(this, &MyForm::button_menos_Click);
			// 
			// button_enter
			// 
			this->button_enter->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_enter->Location = System::Drawing::Point(283, 237);
			this->button_enter->Margin = System::Windows::Forms::Padding(4);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(104, 146);
			this->button_enter->TabIndex = 23;
			this->button_enter->Text = L"Enter";
			this->button_enter->UseVisualStyleBackColor = false;
			this->button_enter->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button_mais
			// 
			this->button_mais->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_mais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mais->Location = System::Drawing::Point(283, 124);
			this->button_mais->Margin = System::Windows::Forms::Padding(4);
			this->button_mais->Name = L"button_mais";
			this->button_mais->Size = System::Drawing::Size(48, 48);
			this->button_mais->TabIndex = 24;
			this->button_mais->Text = L"+";
			this->button_mais->UseCompatibleTextRendering = true;
			this->button_mais->UseVisualStyleBackColor = false;
			this->button_mais->Click += gcnew System::EventHandler(this, &MyForm::button_mais_Click);
			// 
			// button_div
			// 
			this->button_div->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_div->Location = System::Drawing::Point(283, 180);
			this->button_div->Margin = System::Windows::Forms::Padding(4);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(48, 48);
			this->button_div->TabIndex = 25;
			this->button_div->Text = L"/";
			this->button_div->UseCompatibleTextRendering = true;
			this->button_div->UseVisualStyleBackColor = false;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button_div_Click);
			// 
			// button_mult
			// 
			this->button_mult->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mult->Location = System::Drawing::Point(339, 180);
			this->button_mult->Margin = System::Windows::Forms::Padding(4);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(48, 48);
			this->button_mult->TabIndex = 26;
			this->button_mult->Text = L"*";
			this->button_mult->UseCompatibleTextRendering = true;
			this->button_mult->UseVisualStyleBackColor = false;
			this->button_mult->Click += gcnew System::EventHandler(this, &MyForm::button_mult_Click);
			// 
			// button_num_2
			// 
			this->button_num_2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_2->Location = System::Drawing::Point(103, 123);
			this->button_num_2->Margin = System::Windows::Forms::Padding(4);
			this->button_num_2->Name = L"button_num_2";
			this->button_num_2->Size = System::Drawing::Size(82, 62);
			this->button_num_2->TabIndex = 27;
			this->button_num_2->Text = L"2";
			this->button_num_2->UseCompatibleTextRendering = true;
			this->button_num_2->UseVisualStyleBackColor = false;
			this->button_num_2->Click += gcnew System::EventHandler(this, &MyForm::button_num_2_Click);
			// 
			// button_num_3
			// 
			this->button_num_3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_num_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_3->Location = System::Drawing::Point(193, 123);
			this->button_num_3->Margin = System::Windows::Forms::Padding(4);
			this->button_num_3->Name = L"button_num_3";
			this->button_num_3->Size = System::Drawing::Size(82, 62);
			this->button_num_3->TabIndex = 28;
			this->button_num_3->Text = L"3";
			this->button_num_3->UseCompatibleTextRendering = true;
			this->button_num_3->UseVisualStyleBackColor = false;
			this->button_num_3->Click += gcnew System::EventHandler(this, &MyForm::button_num_3_Click);
			// 
			// button_num_4
			// 
			this->button_num_4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_4->Location = System::Drawing::Point(13, 193);
			this->button_num_4->Margin = System::Windows::Forms::Padding(4);
			this->button_num_4->Name = L"button_num_4";
			this->button_num_4->Size = System::Drawing::Size(82, 62);
			this->button_num_4->TabIndex = 29;
			this->button_num_4->Text = L"4";
			this->button_num_4->UseCompatibleTextRendering = true;
			this->button_num_4->UseVisualStyleBackColor = false;
			this->button_num_4->Click += gcnew System::EventHandler(this, &MyForm::button_num_4_Click);
			// 
			// button_num_5
			// 
			this->button_num_5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_5->Location = System::Drawing::Point(103, 193);
			this->button_num_5->Margin = System::Windows::Forms::Padding(4);
			this->button_num_5->Name = L"button_num_5";
			this->button_num_5->Size = System::Drawing::Size(82, 62);
			this->button_num_5->TabIndex = 30;
			this->button_num_5->Text = L"5";
			this->button_num_5->UseCompatibleTextRendering = true;
			this->button_num_5->UseVisualStyleBackColor = false;
			this->button_num_5->Click += gcnew System::EventHandler(this, &MyForm::button_num_5_Click);
			// 
			// button_num_6
			// 
			this->button_num_6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_6->Location = System::Drawing::Point(193, 193);
			this->button_num_6->Margin = System::Windows::Forms::Padding(4);
			this->button_num_6->Name = L"button_num_6";
			this->button_num_6->Size = System::Drawing::Size(82, 62);
			this->button_num_6->TabIndex = 31;
			this->button_num_6->Text = L"6";
			this->button_num_6->UseCompatibleTextRendering = true;
			this->button_num_6->UseVisualStyleBackColor = false;
			this->button_num_6->Click += gcnew System::EventHandler(this, &MyForm::button_num_6_Click);
			// 
			// button_num_9
			// 
			this->button_num_9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_9->Location = System::Drawing::Point(193, 263);
			this->button_num_9->Margin = System::Windows::Forms::Padding(4);
			this->button_num_9->Name = L"button_num_9";
			this->button_num_9->Size = System::Drawing::Size(82, 62);
			this->button_num_9->TabIndex = 34;
			this->button_num_9->Text = L"9";
			this->button_num_9->UseCompatibleTextRendering = true;
			this->button_num_9->UseVisualStyleBackColor = false;
			this->button_num_9->Click += gcnew System::EventHandler(this, &MyForm::button_num_9_Click);
			// 
			// button_num_8
			// 
			this->button_num_8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_8->Location = System::Drawing::Point(103, 263);
			this->button_num_8->Margin = System::Windows::Forms::Padding(4);
			this->button_num_8->Name = L"button_num_8";
			this->button_num_8->Size = System::Drawing::Size(82, 62);
			this->button_num_8->TabIndex = 33;
			this->button_num_8->Text = L"8";
			this->button_num_8->UseCompatibleTextRendering = true;
			this->button_num_8->UseVisualStyleBackColor = false;
			this->button_num_8->Click += gcnew System::EventHandler(this, &MyForm::button_num_8_Click);
			// 
			// button_num_7
			// 
			this->button_num_7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_num_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num_7->Location = System::Drawing::Point(13, 263);
			this->button_num_7->Margin = System::Windows::Forms::Padding(4);
			this->button_num_7->Name = L"button_num_7";
			this->button_num_7->Size = System::Drawing::Size(82, 62);
			this->button_num_7->TabIndex = 32;
			this->button_num_7->Text = L"7";
			this->button_num_7->UseCompatibleTextRendering = true;
			this->button_num_7->UseVisualStyleBackColor = false;
			this->button_num_7->Click += gcnew System::EventHandler(this, &MyForm::button_num_7_Click);
			// 
			// button_clear
			// 
			this->button_clear->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clear->Location = System::Drawing::Point(283, 43);
			this->button_clear->Margin = System::Windows::Forms::Padding(4);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(104, 55);
			this->button_clear->TabIndex = 35;
			this->button_clear->Text = L"Limpar";
			this->button_clear->UseCompatibleTextRendering = true;
			this->button_clear->UseVisualStyleBackColor = false;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(396, 389);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_num_9);
			this->Controls->Add(this->button_num_8);
			this->Controls->Add(this->button_num_7);
			this->Controls->Add(this->button_num_6);
			this->Controls->Add(this->button_num_5);
			this->Controls->Add(this->button_num_4);
			this->Controls->Add(this->button_num_3);
			this->Controls->Add(this->button_num_2);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_mais);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->button_menos);
			this->Controls->Add(this->label_resultado);
			this->Controls->Add(this->button_num_0);
			this->Controls->Add(this->button_num_1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_num_0_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "0";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "1";
}
private: System::Void button_num_2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "2";
}
private: System::Void button_num_3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "3";
}
private: System::Void button_num_4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "4";
}
private: System::Void button_num_5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "5";
}
private: System::Void button_num_6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "6";
}
private: System::Void button_num_7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "7";
}
private: System::Void button_num_8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "8";
}
private: System::Void button_num_9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text += "9";
}
private: System::Void button_mais_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label_resultado->Text == "") {
		return;
	}
	this->num1 = Convert::ToInt32(this->label_resultado->Text);
	this->label_resultado->Text = "";
	this->operacao = 1;
}
private: System::Void button_menos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label_resultado->Text == "") {
		return;
	}
	this->num1 = Convert::ToInt32(this->label_resultado->Text);
	this->label_resultado->Text = "";
	this->operacao = 2;
}
private: System::Void button_div_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label_resultado->Text == "") {
		return;
	}
	this->num1 = Convert::ToInt32(this->label_resultado->Text);
	this->label_resultado->Text = "";
	this->operacao = 3;
}
private: System::Void button_mult_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label_resultado->Text == "") {
		return;
	}
	this->num1 = Convert::ToInt32(this->label_resultado->Text);
	this->label_resultado->Text = "";
	this->operacao = 4;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label_resultado->Text == "") {
		return;
	}
	this->num2 = Convert::ToInt32(this->label_resultado->Text);
	if (this->num2 == 0 && this->operacao == 3) {
		this->label_resultado->Text = "";
		this->num1 = 0;
		return;
	}
	switch (this->operacao) {
	case 1:
		this->resultado = this->num1 + this->num2;
		break;
	case 2:
		this->resultado = this->num1 - this->num2;
		break;
	case 3:
		this->resultado = this->num1 / this->num2;
		break;
	case 4:
		this->resultado = this->num1 * this->num2;
		break;
	}
	this->num1 = 0;
	this->num2 = 0;
	this->label_resultado->Text = Convert::ToString(this->resultado);
}
private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_resultado->Text = "";
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}

};
}