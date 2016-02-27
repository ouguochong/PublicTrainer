#pragma once

namespace PublicTrainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BotsFRM
	/// </summary>
	public ref class BotsFRM : public System::Windows::Forms::Form
	{
	public:
		BotsFRM(void)
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
		~BotsFRM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  gbBots;
	protected: 

	private: System::Windows::Forms::ComboBox^  comboLootK;
	protected: 

	private: System::Windows::Forms::ComboBox^  comboAttackK;

	private: System::Windows::Forms::CheckBox^  cbAutoLoot;

	private: System::Windows::Forms::CheckBox^  cbAutoAttack;
	private: System::Windows::Forms::GroupBox^  gbAutoCC;

	private: System::Windows::Forms::NumericUpDown^  numericCC;

	private: System::Windows::Forms::Label^  lbCCPeople;
	private: System::Windows::Forms::RadioButton^  radioCCNext;

	private: System::Windows::Forms::RadioButton^  radioCCRandom;

	private: System::Windows::Forms::CheckBox^  cbAutoCC;
	private: System::Windows::Forms::Timer^  MainTMR;
	private: System::Windows::Forms::GroupBox^  gbAutoPot;

	private: System::Windows::Forms::TextBox^  tbAPMP;

	private: System::Windows::Forms::TextBox^  tbAPHP;
	private: System::Windows::Forms::Label^  lbAPMP;
	private: System::Windows::Forms::Label^  lbAPHP;
	private: System::Windows::Forms::CheckBox^  cbAutoPot;
	private: System::Windows::Forms::ComboBox^  comboAPMPK;

	private: System::Windows::Forms::ComboBox^  comboAPHPK;


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
			this->gbBots = (gcnew System::Windows::Forms::GroupBox());
			this->comboLootK = (gcnew System::Windows::Forms::ComboBox());
			this->comboAttackK = (gcnew System::Windows::Forms::ComboBox());
			this->cbAutoLoot = (gcnew System::Windows::Forms::CheckBox());
			this->cbAutoAttack = (gcnew System::Windows::Forms::CheckBox());
			this->gbAutoCC = (gcnew System::Windows::Forms::GroupBox());
			this->numericCC = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbCCPeople = (gcnew System::Windows::Forms::Label());
			this->radioCCNext = (gcnew System::Windows::Forms::RadioButton());
			this->radioCCRandom = (gcnew System::Windows::Forms::RadioButton());
			this->cbAutoCC = (gcnew System::Windows::Forms::CheckBox());
			this->MainTMR = (gcnew System::Windows::Forms::Timer(this->components));
			this->gbAutoPot = (gcnew System::Windows::Forms::GroupBox());
			this->lbAPMP = (gcnew System::Windows::Forms::Label());
			this->lbAPHP = (gcnew System::Windows::Forms::Label());
			this->cbAutoPot = (gcnew System::Windows::Forms::CheckBox());
			this->comboAPMPK = (gcnew System::Windows::Forms::ComboBox());
			this->comboAPHPK = (gcnew System::Windows::Forms::ComboBox());
			this->tbAPMP = (gcnew System::Windows::Forms::TextBox());
			this->tbAPHP = (gcnew System::Windows::Forms::TextBox());
			this->gbBots->SuspendLayout();
			this->gbAutoCC->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericCC))->BeginInit();
			this->gbAutoPot->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbBots
			// 
			this->gbBots->Controls->Add(this->comboLootK);
			this->gbBots->Controls->Add(this->comboAttackK);
			this->gbBots->Controls->Add(this->cbAutoLoot);
			this->gbBots->Controls->Add(this->cbAutoAttack);
			this->gbBots->Location = System::Drawing::Point(12, 12);
			this->gbBots->Name = L"gbBots";
			this->gbBots->Size = System::Drawing::Size(200, 67);
			this->gbBots->TabIndex = 0;
			this->gbBots->TabStop = false;
			// 
			// comboLootK
			// 
			this->comboLootK->FormattingEnabled = true;
			this->comboLootK->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Z", L"Numpad 0"});
			this->comboLootK->Location = System::Drawing::Point(92, 42);
			this->comboLootK->Name = L"comboLootK";
			this->comboLootK->Size = System::Drawing::Size(92, 21);
			this->comboLootK->TabIndex = 3;
			// 
			// comboAttackK
			// 
			this->comboAttackK->FormattingEnabled = true;
			this->comboAttackK->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"C", L"V", L"B", L"N", L"CTRL", L"ALT", L"SHIFT"});
			this->comboAttackK->Location = System::Drawing::Point(92, 17);
			this->comboAttackK->Name = L"comboAttackK";
			this->comboAttackK->Size = System::Drawing::Size(92, 21);
			this->comboAttackK->TabIndex = 2;
			// 
			// cbAutoLoot
			// 
			this->cbAutoLoot->AutoSize = true;
			this->cbAutoLoot->Location = System::Drawing::Point(6, 44);
			this->cbAutoLoot->Name = L"cbAutoLoot";
			this->cbAutoLoot->Size = System::Drawing::Size(72, 17);
			this->cbAutoLoot->TabIndex = 1;
			this->cbAutoLoot->Text = L"Auto Loot";
			this->cbAutoLoot->UseVisualStyleBackColor = true;
			// 
			// cbAutoAttack
			// 
			this->cbAutoAttack->AutoSize = true;
			this->cbAutoAttack->Location = System::Drawing::Point(6, 19);
			this->cbAutoAttack->Name = L"cbAutoAttack";
			this->cbAutoAttack->Size = System::Drawing::Size(82, 17);
			this->cbAutoAttack->TabIndex = 0;
			this->cbAutoAttack->Text = L"Auto Attack";
			this->cbAutoAttack->UseVisualStyleBackColor = true;
			// 
			// gbAutoCC
			// 
			this->gbAutoCC->Controls->Add(this->numericCC);
			this->gbAutoCC->Controls->Add(this->lbCCPeople);
			this->gbAutoCC->Controls->Add(this->radioCCNext);
			this->gbAutoCC->Controls->Add(this->radioCCRandom);
			this->gbAutoCC->Controls->Add(this->cbAutoCC);
			this->gbAutoCC->Location = System::Drawing::Point(12, 85);
			this->gbAutoCC->Name = L"gbAutoCC";
			this->gbAutoCC->Size = System::Drawing::Size(200, 115);
			this->gbAutoCC->TabIndex = 1;
			this->gbAutoCC->TabStop = false;
			this->gbAutoCC->Text = L"Auto CC";
			// 
			// numericCC
			// 
			this->numericCC->Location = System::Drawing::Point(90, 66);
			this->numericCC->Name = L"numericCC";
			this->numericCC->ReadOnly = true;
			this->numericCC->Size = System::Drawing::Size(51, 20);
			this->numericCC->TabIndex = 5;
			this->numericCC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericCC->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// lbCCPeople
			// 
			this->lbCCPeople->AutoSize = true;
			this->lbCCPeople->Location = System::Drawing::Point(6, 68);
			this->lbCCPeople->Name = L"lbCCPeople";
			this->lbCCPeople->Size = System::Drawing::Size(78, 13);
			this->lbCCPeople->TabIndex = 4;
			this->lbCCPeople->Text = L"No. of People :";
			// 
			// radioCCNext
			// 
			this->radioCCNext->AutoSize = true;
			this->radioCCNext->Location = System::Drawing::Point(8, 42);
			this->radioCCNext->Name = L"radioCCNext";
			this->radioCCNext->Size = System::Drawing::Size(64, 17);
			this->radioCCNext->TabIndex = 2;
			this->radioCCNext->Text = L"CC Next";
			this->radioCCNext->UseVisualStyleBackColor = true;
			// 
			// radioCCRandom
			// 
			this->radioCCRandom->AutoSize = true;
			this->radioCCRandom->Checked = true;
			this->radioCCRandom->Location = System::Drawing::Point(8, 19);
			this->radioCCRandom->Name = L"radioCCRandom";
			this->radioCCRandom->Size = System::Drawing::Size(82, 17);
			this->radioCCRandom->TabIndex = 1;
			this->radioCCRandom->TabStop = true;
			this->radioCCRandom->Text = L"CC Random";
			this->radioCCRandom->UseVisualStyleBackColor = true;
			// 
			// cbAutoCC
			// 
			this->cbAutoCC->AutoSize = true;
			this->cbAutoCC->Location = System::Drawing::Point(8, 92);
			this->cbAutoCC->Name = L"cbAutoCC";
			this->cbAutoCC->Size = System::Drawing::Size(59, 17);
			this->cbAutoCC->TabIndex = 0;
			this->cbAutoCC->Text = L"On/Off";
			this->cbAutoCC->UseVisualStyleBackColor = true;
			// 
			// MainTMR
			// 
			this->MainTMR->Enabled = true;
			this->MainTMR->Interval = 1;
			this->MainTMR->Tick += gcnew System::EventHandler(this, &BotsFRM::MainTMR_Tick);
			// 
			// gbAutoPot
			// 
			this->gbAutoPot->Controls->Add(this->lbAPMP);
			this->gbAutoPot->Controls->Add(this->lbAPHP);
			this->gbAutoPot->Controls->Add(this->cbAutoPot);
			this->gbAutoPot->Controls->Add(this->comboAPMPK);
			this->gbAutoPot->Controls->Add(this->comboAPHPK);
			this->gbAutoPot->Controls->Add(this->tbAPMP);
			this->gbAutoPot->Controls->Add(this->tbAPHP);
			this->gbAutoPot->Location = System::Drawing::Point(12, 206);
			this->gbAutoPot->Name = L"gbAutoPot";
			this->gbAutoPot->Size = System::Drawing::Size(200, 108);
			this->gbAutoPot->TabIndex = 2;
			this->gbAutoPot->TabStop = false;
			this->gbAutoPot->Text = L"Auto Pot";
			// 
			// lbAPMP
			// 
			this->lbAPMP->AutoSize = true;
			this->lbAPMP->Location = System::Drawing::Point(28, 48);
			this->lbAPMP->Name = L"lbAPMP";
			this->lbAPMP->Size = System::Drawing::Size(29, 13);
			this->lbAPMP->TabIndex = 9;
			this->lbAPMP->Text = L"MP :";
			// 
			// lbAPHP
			// 
			this->lbAPHP->AutoSize = true;
			this->lbAPHP->Location = System::Drawing::Point(28, 22);
			this->lbAPHP->Name = L"lbAPHP";
			this->lbAPHP->Size = System::Drawing::Size(28, 13);
			this->lbAPHP->TabIndex = 8;
			this->lbAPHP->Text = L"HP :";
			// 
			// cbAutoPot
			// 
			this->cbAutoPot->AutoSize = true;
			this->cbAutoPot->Location = System::Drawing::Point(62, 86);
			this->cbAutoPot->Name = L"cbAutoPot";
			this->cbAutoPot->Size = System::Drawing::Size(67, 17);
			this->cbAutoPot->TabIndex = 7;
			this->cbAutoPot->Text = L"Auto Pot";
			this->cbAutoPot->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbAutoPot->UseVisualStyleBackColor = true;
			// 
			// comboAPMPK
			// 
			this->comboAPMPK->FormattingEnabled = true;
			this->comboAPMPK->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Page UP", L"Page Down"});
			this->comboAPMPK->Location = System::Drawing::Point(137, 45);
			this->comboAPMPK->Name = L"comboAPMPK";
			this->comboAPMPK->Size = System::Drawing::Size(57, 21);
			this->comboAPMPK->TabIndex = 6;
			// 
			// comboAPHPK
			// 
			this->comboAPHPK->FormattingEnabled = true;
			this->comboAPHPK->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Page UP", L"Page Down"});
			this->comboAPHPK->Location = System::Drawing::Point(137, 19);
			this->comboAPHPK->Name = L"comboAPHPK";
			this->comboAPHPK->Size = System::Drawing::Size(57, 21);
			this->comboAPHPK->TabIndex = 5;
			// 
			// tbAPMP
			// 
			this->tbAPMP->Location = System::Drawing::Point(62, 45);
			this->tbAPMP->Name = L"tbAPMP";
			this->tbAPMP->Size = System::Drawing::Size(69, 20);
			this->tbAPMP->TabIndex = 4;
			this->tbAPMP->Text = L"50";
			this->tbAPMP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbAPHP
			// 
			this->tbAPHP->Location = System::Drawing::Point(62, 19);
			this->tbAPHP->Name = L"tbAPHP";
			this->tbAPHP->Size = System::Drawing::Size(69, 20);
			this->tbAPHP->TabIndex = 3;
			this->tbAPHP->Text = L"50";
			this->tbAPHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// BotsFRM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(222, 322);
			this->ControlBox = false;
			this->Controls->Add(this->gbAutoPot);
			this->Controls->Add(this->gbAutoCC);
			this->Controls->Add(this->gbBots);
			this->MaximumSize = System::Drawing::Size(230, 356);
			this->MinimumSize = System::Drawing::Size(230, 356);
			this->Name = L"BotsFRM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Bots";
			this->gbBots->ResumeLayout(false);
			this->gbBots->PerformLayout();
			this->gbAutoCC->ResumeLayout(false);
			this->gbAutoCC->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericCC))->EndInit();
			this->gbAutoPot->ResumeLayout(false);
			this->gbAutoPot->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainTMR_Tick(System::Object^  sender, System::EventArgs^  e);
};
}
