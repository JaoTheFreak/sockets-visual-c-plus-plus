#pragma once

#include "Controller.h"

namespace Chat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			myController = new Controller();
		}

	private:
		Controller * myController;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lbMessages;
	protected:

	private: System::Windows::Forms::Button^  btnSend;
	private: System::Windows::Forms::TextBox^  txtMessage;


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
			this->lbMessages = (gcnew System::Windows::Forms::ListBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbMessages
			// 
			this->lbMessages->FormattingEnabled = true;
			this->lbMessages->Location = System::Drawing::Point(12, 29);
			this->lbMessages->Name = L"lbMessages";
			this->lbMessages->Size = System::Drawing::Size(343, 251);
			this->lbMessages->TabIndex = 0;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(12, 312);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(343, 38);
			this->btnSend->TabIndex = 1;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			// 
			// txtMessage
			// 
			this->txtMessage->Location = System::Drawing::Point(12, 286);
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->Size = System::Drawing::Size(343, 20);
			this->txtMessage->TabIndex = 2;
			this->txtMessage->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 362);
			this->Controls->Add(this->txtMessage);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->lbMessages);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	};
}
