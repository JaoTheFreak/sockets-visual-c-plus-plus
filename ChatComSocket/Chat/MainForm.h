#pragma once

#include "Controller.h"
#include "Util.h"

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
	private: System::Windows::Forms::Label^  lblMessage;
	private: System::Windows::Forms::Label^  lblMensagens;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lblEndeIP;
	private: System::Windows::Forms::TextBox^  txtIP;


	private: System::Windows::Forms::Label^  lblPorta;
	private: System::Windows::Forms::TextBox^  txtPort;
	private: System::Windows::Forms::Label^  lblStatusHeart;
	private: System::Windows::Forms::Button^  btnConnect;




	public:

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
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->lblMensagens = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblStatusHeart = (gcnew System::Windows::Forms::Label());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->lblPorta = (gcnew System::Windows::Forms::Label());
			this->txtPort = (gcnew System::Windows::Forms::TextBox());
			this->lblEndeIP = (gcnew System::Windows::Forms::Label());
			this->txtIP = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbMessages
			// 
			this->lbMessages->FormattingEnabled = true;
			this->lbMessages->Location = System::Drawing::Point(12, 34);
			this->lbMessages->Name = L"lbMessages";
			this->lbMessages->Size = System::Drawing::Size(343, 251);
			this->lbMessages->TabIndex = 0;
			// 
			// btnSend
			// 
			this->btnSend->Enabled = false;
			this->btnSend->Location = System::Drawing::Point(12, 347);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(343, 38);
			this->btnSend->TabIndex = 1;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &MainForm::btnSend_Click);
			// 
			// txtMessage
			// 
			this->txtMessage->Location = System::Drawing::Point(12, 321);
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->Size = System::Drawing::Size(343, 20);
			this->txtMessage->TabIndex = 2;
			this->txtMessage->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			this->txtMessage->Enter += gcnew System::EventHandler(this, &MainForm::txtMessage_Enter);
			// 
			// lblMessage
			// 
			this->lblMessage->AutoSize = true;
			this->lblMessage->Location = System::Drawing::Point(9, 305);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(59, 13);
			this->lblMessage->TabIndex = 3;
			this->lblMessage->Text = L"Mensagem";
			// 
			// lblMensagens
			// 
			this->lblMensagens->AutoSize = true;
			this->lblMensagens->Location = System::Drawing::Point(9, 18);
			this->lblMensagens->Name = L"lblMensagens";
			this->lblMensagens->Size = System::Drawing::Size(62, 13);
			this->lblMensagens->TabIndex = 4;
			this->lblMensagens->Text = L"Mensagens";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblStatusHeart);
			this->groupBox1->Controls->Add(this->btnConnect);
			this->groupBox1->Controls->Add(this->lblPorta);
			this->groupBox1->Controls->Add(this->txtPort);
			this->groupBox1->Controls->Add(this->lblEndeIP);
			this->groupBox1->Controls->Add(this->txtIP);
			this->groupBox1->Location = System::Drawing::Point(361, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(148, 164);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Endereço Servidor";
			// 
			// lblStatusHeart
			// 
			this->lblStatusHeart->AutoSize = true;
			this->lblStatusHeart->BackColor = System::Drawing::Color::Transparent;
			this->lblStatusHeart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStatusHeart->ForeColor = System::Drawing::Color::Red;
			this->lblStatusHeart->Location = System::Drawing::Point(110, 7);
			this->lblStatusHeart->Name = L"lblStatusHeart";
			this->lblStatusHeart->Size = System::Drawing::Size(32, 36);
			this->lblStatusHeart->TabIndex = 6;
			this->lblStatusHeart->Text = L"♥";
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(7, 128);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(135, 23);
			this->btnConnect->TabIndex = 8;
			this->btnConnect->Text = L"Conectar";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MainForm::btnConnect_Click);
			// 
			// lblPorta
			// 
			this->lblPorta->AutoSize = true;
			this->lblPorta->Location = System::Drawing::Point(3, 85);
			this->lblPorta->Name = L"lblPorta";
			this->lblPorta->Size = System::Drawing::Size(32, 13);
			this->lblPorta->TabIndex = 7;
			this->lblPorta->Text = L"Porta";
			// 
			// txtPort
			// 
			this->txtPort->Location = System::Drawing::Point(6, 101);
			this->txtPort->Name = L"txtPort";
			this->txtPort->Size = System::Drawing::Size(136, 20);
			this->txtPort->TabIndex = 6;
			// 
			// lblEndeIP
			// 
			this->lblEndeIP->AutoSize = true;
			this->lblEndeIP->Location = System::Drawing::Point(3, 30);
			this->lblEndeIP->Name = L"lblEndeIP";
			this->lblEndeIP->Size = System::Drawing::Size(66, 13);
			this->lblEndeIP->TabIndex = 5;
			this->lblEndeIP->Text = L"Endereço IP";
			this->lblEndeIP->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// txtIP
			// 
			this->txtIP->Location = System::Drawing::Point(6, 46);
			this->txtIP->Name = L"txtIP";
			this->txtIP->Size = System::Drawing::Size(136, 20);
			this->txtIP->TabIndex = 4;
			this->txtIP->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 397);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lblMensagens);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->txtMessage);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->lbMessages);
			this->Name = L"MainForm";
			this->Text = L"Chat com Sockets - Aula Calvo";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void btnSend_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (!ValidateFieldsBeforeSend()) {
			return;
		}
		
		String^ messageToSend = this->txtMessage->Text;

		std::string messageToSendStd = Util::ToStdString(messageToSend);

		myController->SendMessage(messageToSendStd, "João Antonio");
	}

	private: bool ValidateFieldsBeforeSend() {
		String^ captionError = "Erro de ";
		/*
		if (!this->btnSend->Enabled) {
			System::Windows::Forms::MessageBox::Show("Antes do envio da mensagem é necessário se conectar ao Socket.", captionError + "Conexão não estabelecida");
			return false;
		}*/

		String^ messageToSend = this->txtMessage->Text;		

		if (String::IsNullOrEmpty(messageToSend) && this->myController->StillConnected()) {
			System::Windows::Forms::MessageBox::Show("A messagem não pode estar vazia.", captionError + "Mensagem vazia");
			return false;
		}	

		return true;
	}

	private: System::Void btnConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (!this->myController->StillConnected()) {
			String^ captionError = "Erro de ";

			if (String::IsNullOrEmpty(this->txtIP->Text)) {
				Windows::Forms::MessageBox::Show("O endereço de IP não pode estar vazio.", captionError + " endereço de IP vazio");
				return;
			}

			if (String::IsNullOrEmpty(this->txtPort->Text)) {
				Windows::Forms::MessageBox::Show("A porta não pode estar vazio.", captionError + " porta vazio");
				return;
			}

			std::string ipAddressToConnect = Util::ToStdString(this->txtIP->Text);

			std::string portToConnect = Util::ToStdString(this->txtPort->Text);

			if (this->myController->ConnectToSocket(ipAddressToConnect, portToConnect)) {
				this->lblStatusHeart->ForeColor = Color::Green;
				this->btnSend->Enabled = true;
				this->btnConnect->Text = "Desconectar";
			}
		}
		else
		{
			if (this->myController->Disconnect()) {
				this->lblStatusHeart->ForeColor = Color::Red;
				this->btnSend->Enabled = false;
				this->btnConnect->Text = "Connectar";
			}			
		}		

	}

	private: System::Void txtMessage_Enter(System::Object^  sender, System::EventArgs^  e) {
		//this->ValidateFieldsBeforeSend();
	}
};
}
