#pragma once

#include "DataAccess.h"
#include "Util.h"

namespace Chat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtLogin;

	private: System::Windows::Forms::TextBox^  txtNome;
	private: System::Windows::Forms::TextBox^  txtPass;
	private: System::Windows::Forms::TextBox^  txtPassConf;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnNew;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtPassConf = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnNew = (gcnew System::Windows::Forms::Button());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtPassConf);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->btnCancel);
			this->groupBox1->Controls->Add(this->btnNew);
			this->groupBox1->Controls->Add(this->txtLogin);
			this->groupBox1->Controls->Add(this->txtNome);
			this->groupBox1->Controls->Add(this->txtPass);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(304, 252);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados para o Registro";
			// 
			// txtPassConf
			// 
			this->txtPassConf->Location = System::Drawing::Point(127, 153);
			this->txtPassConf->Name = L"txtPassConf";
			this->txtPassConf->PasswordChar = '*';
			this->txtPassConf->Size = System::Drawing::Size(107, 26);
			this->txtPassConf->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(123, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 20);
			this->label4->TabIndex = 84;
			this->label4->Text = L"Confirmar Senha";
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(154, 220);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(138, 26);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Voltar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// btnNew
			// 
			this->btnNew->BackColor = System::Drawing::Color::Green;
			this->btnNew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnNew->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNew->Location = System::Drawing::Point(10, 220);
			this->btnNew->Name = L"btnNew";
			this->btnNew->Size = System::Drawing::Size(138, 26);
			this->btnNew->TabIndex = 4;
			this->btnNew->Text = L"Criar";
			this->btnNew->UseVisualStyleBackColor = false;
			this->btnNew->Click += gcnew System::EventHandler(this, &RegisterForm::btnNew_Click);
			// 
			// txtLogin
			// 
			this->txtLogin->Location = System::Drawing::Point(10, 103);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(138, 26);
			this->txtLogin->TabIndex = 1;
			// 
			// txtNome
			// 
			this->txtNome->Location = System::Drawing::Point(10, 51);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(282, 26);
			this->txtNome->TabIndex = 0;
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(10, 153);
			this->txtPass->Name = L"txtPass";
			this->txtPass->PasswordChar = '*';
			this->txtPass->Size = System::Drawing::Size(107, 26);
			this->txtPass->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Senha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nome";
			this->label1->Click += gcnew System::EventHandler(this, &RegisterForm::label1_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 275);
			this->Controls->Add(this->groupBox1);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"RegisterForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if(
			MessageBox::Show("Deseja voltar sem criar seu login?", "Registro Não Será Salvo",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes
		)
		{
			this->Close();
		}
		
		

	}
	private: System::Void btnNew_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if ( !this->CheckPasswordMatch(this->txtPass->Text, this->txtPassConf->Text) ) {
			MessageBox::Show("As senhas não são iguais", "Problema ao Cadastrar", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);

			return;
		}

		std::string newUserLogin = Util::ToStdString(this->txtLogin->Text);

		std::string newUserName = Util::ToStdString(this->txtNome->Text);
				
		std::string newUserPassword = Util::HashThis(Util::ToStdString(this->txtPass->Text).c_str());

		DataAccess * db = DataAccess::GetInstance();

		db->CreateNewUser(newUserName, newUserPassword, newUserLogin);

		db->~DataAccess();
	
	}

	private: bool CheckPasswordMatch(System::String ^ passOne, System::String ^ passTwo) {
		return passOne->Equals(passTwo);
	}
};
}
