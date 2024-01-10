#pragma once
#include "GameManager.h"

namespace HangmanGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ Art_Hangman_label;
	protected:

	private: System::Windows::Forms::Label^ Guessing_word_label;
	private: System::Windows::Forms::Label^ WIN_LOSE_label;
	private: System::Windows::Forms::Label^ Used_Letters_label;
	private: System::Windows::Forms::TextBox^ Letter_TextBox;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Art_Hangman_label = (gcnew System::Windows::Forms::Label());
			this->Guessing_word_label = (gcnew System::Windows::Forms::Label());
			this->WIN_LOSE_label = (gcnew System::Windows::Forms::Label());
			this->Used_Letters_label = (gcnew System::Windows::Forms::Label());
			this->Letter_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Art_Hangman_label
			// 
			this->Art_Hangman_label->Font = (gcnew System::Drawing::Font(L"Calibri", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Art_Hangman_label->Location = System::Drawing::Point(10, 9);
			this->Art_Hangman_label->Margin = System::Windows::Forms::Padding(21, 19, 21, 19);
			this->Art_Hangman_label->Name = L"Art_Hangman_label";
			this->Art_Hangman_label->Size = System::Drawing::Size(208, 276);
			this->Art_Hangman_label->TabIndex = 0;
			this->Art_Hangman_label->Text = L"  + - - - +\r\n  |        |\r\n  |    \r\n  |    \r\n  |    \r\n  |    \r\n==========";
			this->Art_Hangman_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Art_Hangman_label->Click += gcnew System::EventHandler(this, &MyForm::Art_Hangman_label_Click);
			// 
			// Guessing_word_label
			// 
			this->Guessing_word_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Guessing_word_label->Location = System::Drawing::Point(35, 304);
			this->Guessing_word_label->Name = L"Guessing_word_label";
			this->Guessing_word_label->Size = System::Drawing::Size(558, 69);
			this->Guessing_word_label->TabIndex = 1;
			this->Guessing_word_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Guessing_word_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// WIN_LOSE_label
			// 
			this->WIN_LOSE_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WIN_LOSE_label->Location = System::Drawing::Point(54, 373);
			this->WIN_LOSE_label->Name = L"WIN_LOSE_label";
			this->WIN_LOSE_label->Size = System::Drawing::Size(527, 52);
			this->WIN_LOSE_label->TabIndex = 2;
			this->WIN_LOSE_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->WIN_LOSE_label->Click += gcnew System::EventHandler(this, &MyForm::WIN_LOSE_label_Click);
			// 
			// Used_Letters_label
			// 
			this->Used_Letters_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Used_Letters_label->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Used_Letters_label->Location = System::Drawing::Point(297, 38);
			this->Used_Letters_label->Name = L"Used_Letters_label";
			this->Used_Letters_label->Size = System::Drawing::Size(296, 142);
			this->Used_Letters_label->TabIndex = 3;
			this->Used_Letters_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Used_Letters_label->Click += gcnew System::EventHandler(this, &MyForm::Used_Letters_label_Click);
			// 
			// Letter_TextBox
			// 
			this->Letter_TextBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Letter_TextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->Letter_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Letter_TextBox->ForeColor = System::Drawing::Color::Black;
			this->Letter_TextBox->Location = System::Drawing::Point(276, 248);
			this->Letter_TextBox->MaxLength = 1;
			this->Letter_TextBox->Name = L"Letter_TextBox";
			this->Letter_TextBox->Size = System::Drawing::Size(80, 45);
			this->Letter_TextBox->TabIndex = 4;
			this->Letter_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Letter_TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Letter_TextBox_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(639, 469);
			this->Controls->Add(this->Letter_TextBox);
			this->Controls->Add(this->Used_Letters_label);
			this->Controls->Add(this->WIN_LOSE_label);
			this->Controls->Add(this->Guessing_word_label);
			this->Controls->Add(this->Art_Hangman_label);
			this->Font = (gcnew System::Drawing::Font(L"PanRoman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"HangMan Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		GameManager Game;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) { 
		//Showing the Guessng Word
	}
	private: System::Void Art_Hangman_label_Click(System::Object^ sender, System::EventArgs^ e) {
		//Hangman Draw 
	}
	private: System::Void Used_Letters_label_Click(System::Object^ sender, System::EventArgs^ e) {
		//Used Letters List
	}
	private: System::Void WIN_LOSE_label_Click(System::Object^ sender, System::EventArgs^ e) {
		//YOU WIN / YOU LOST messege
	}
	private: System::Void Letter_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//Introducing Letter TextBox
	}
};
}
