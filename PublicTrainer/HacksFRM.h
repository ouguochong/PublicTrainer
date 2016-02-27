#pragma once

namespace PublicTrainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HacksFRM
	/// </summary>
	public ref class HacksFRM : public System::Windows::Forms::Form
	{
	public:
		HacksFRM(void)
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
		~HacksFRM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  gbTools;
	protected: 
	private: System::Windows::Forms::CheckBox^  cbSuperTubi;
	private: System::Windows::Forms::GroupBox^  gbMouseFly;
	private: System::Windows::Forms::ComboBox^  comboMouseHK;
	private: System::Windows::Forms::CheckBox^  cbFlyHack;
	private: System::Windows::Forms::RadioButton^  radioMouseClick;
	private: System::Windows::Forms::RadioButton^  radioMouseFly;
	private: System::Windows::Forms::GroupBox^  gbKami;
	private: System::Windows::Forms::TrackBar^  trackbKamiX;

	private: System::Windows::Forms::CheckBox^  cbKami;
	private: System::Windows::Forms::TrackBar^  trackbKamiY;
	private: System::Windows::Forms::ComboBox^  comboKamiHK;
	private: System::Windows::Forms::Timer^  MainTMR;
	private: System::Windows::Forms::Timer^  MouseFlyTMR;
	private: System::Windows::Forms::Timer^  MouseClickTMR;
	private: System::Windows::Forms::Timer^  KamiTMR;
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
			this->gbTools = (gcnew System::Windows::Forms::GroupBox());
			this->cbSuperTubi = (gcnew System::Windows::Forms::CheckBox());
			this->gbMouseFly = (gcnew System::Windows::Forms::GroupBox());
			this->comboMouseHK = (gcnew System::Windows::Forms::ComboBox());
			this->cbFlyHack = (gcnew System::Windows::Forms::CheckBox());
			this->radioMouseClick = (gcnew System::Windows::Forms::RadioButton());
			this->radioMouseFly = (gcnew System::Windows::Forms::RadioButton());
			this->gbKami = (gcnew System::Windows::Forms::GroupBox());
			this->comboKamiHK = (gcnew System::Windows::Forms::ComboBox());
			this->trackbKamiY = (gcnew System::Windows::Forms::TrackBar());
			this->trackbKamiX = (gcnew System::Windows::Forms::TrackBar());
			this->cbKami = (gcnew System::Windows::Forms::CheckBox());
			this->MainTMR = (gcnew System::Windows::Forms::Timer(this->components));
			this->MouseFlyTMR = (gcnew System::Windows::Forms::Timer(this->components));
			this->MouseClickTMR = (gcnew System::Windows::Forms::Timer(this->components));
			this->KamiTMR = (gcnew System::Windows::Forms::Timer(this->components));
			this->gbTools->SuspendLayout();
			this->gbMouseFly->SuspendLayout();
			this->gbKami->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackbKamiY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackbKamiX))->BeginInit();
			this->SuspendLayout();
			// 
			// gbTools
			// 
			this->gbTools->Controls->Add(this->cbSuperTubi);
			this->gbTools->Location = System::Drawing::Point(12, 12);
			this->gbTools->Name = L"gbTools";
			this->gbTools->Size = System::Drawing::Size(200, 44);
			this->gbTools->TabIndex = 0;
			this->gbTools->TabStop = false;
			this->gbTools->Text = L"Tools";
			// 
			// cbSuperTubi
			// 
			this->cbSuperTubi->AutoSize = true;
			this->cbSuperTubi->Location = System::Drawing::Point(6, 19);
			this->cbSuperTubi->Name = L"cbSuperTubi";
			this->cbSuperTubi->Size = System::Drawing::Size(78, 17);
			this->cbSuperTubi->TabIndex = 0;
			this->cbSuperTubi->Text = L"Super Tubi";
			this->cbSuperTubi->UseVisualStyleBackColor = true;
			// 
			// gbMouseFly
			// 
			this->gbMouseFly->Controls->Add(this->comboMouseHK);
			this->gbMouseFly->Controls->Add(this->cbFlyHack);
			this->gbMouseFly->Controls->Add(this->radioMouseClick);
			this->gbMouseFly->Controls->Add(this->radioMouseFly);
			this->gbMouseFly->Location = System::Drawing::Point(12, 62);
			this->gbMouseFly->Name = L"gbMouseFly";
			this->gbMouseFly->Size = System::Drawing::Size(200, 99);
			this->gbMouseFly->TabIndex = 1;
			this->gbMouseFly->TabStop = false;
			this->gbMouseFly->Text = L"Mouse Fly";
			// 
			// comboMouseHK
			// 
			this->comboMouseHK->FormattingEnabled = true;
			this->comboMouseHK->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"F9", L"F10"});
			this->comboMouseHK->Location = System::Drawing::Point(71, 72);
			this->comboMouseHK->Name = L"comboMouseHK";
			this->comboMouseHK->Size = System::Drawing::Size(52, 21);
			this->comboMouseHK->TabIndex = 3;
			// 
			// cbFlyHack
			// 
			this->cbFlyHack->AutoSize = true;
			this->cbFlyHack->Location = System::Drawing::Point(6, 74);
			this->cbFlyHack->Name = L"cbFlyHack";
			this->cbFlyHack->Size = System::Drawing::Size(59, 17);
			this->cbFlyHack->TabIndex = 2;
			this->cbFlyHack->Text = L"On/Off";
			this->cbFlyHack->UseVisualStyleBackColor = true;
			// 
			// radioMouseClick
			// 
			this->radioMouseClick->AutoSize = true;
			this->radioMouseClick->Location = System::Drawing::Point(6, 42);
			this->radioMouseClick->Name = L"radioMouseClick";
			this->radioMouseClick->Size = System::Drawing::Size(83, 17);
			this->radioMouseClick->TabIndex = 1;
			this->radioMouseClick->Text = L"Mouse Click";
			this->radioMouseClick->UseVisualStyleBackColor = true;
			// 
			// radioMouseFly
			// 
			this->radioMouseFly->AutoSize = true;
			this->radioMouseFly->Checked = true;
			this->radioMouseFly->Location = System::Drawing::Point(6, 19);
			this->radioMouseFly->Name = L"radioMouseFly";
			this->radioMouseFly->Size = System::Drawing::Size(73, 17);
			this->radioMouseFly->TabIndex = 0;
			this->radioMouseFly->TabStop = true;
			this->radioMouseFly->Text = L"Mouse Fly";
			this->radioMouseFly->UseVisualStyleBackColor = true;
			// 
			// gbKami
			// 
			this->gbKami->Controls->Add(this->comboKamiHK);
			this->gbKami->Controls->Add(this->trackbKamiY);
			this->gbKami->Controls->Add(this->trackbKamiX);
			this->gbKami->Controls->Add(this->cbKami);
			this->gbKami->Location = System::Drawing::Point(12, 167);
			this->gbKami->Name = L"gbKami";
			this->gbKami->Size = System::Drawing::Size(200, 154);
			this->gbKami->TabIndex = 2;
			this->gbKami->TabStop = false;
			this->gbKami->Text = L"Kami";
			// 
			// comboKamiHK
			// 
			this->comboKamiHK->FormattingEnabled = true;
			this->comboKamiHK->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"F11", L"F12"});
			this->comboKamiHK->Location = System::Drawing::Point(77, 17);
			this->comboKamiHK->Name = L"comboKamiHK";
			this->comboKamiHK->Size = System::Drawing::Size(66, 21);
			this->comboKamiHK->TabIndex = 3;
			// 
			// trackbKamiY
			// 
			this->trackbKamiY->Location = System::Drawing::Point(6, 104);
			this->trackbKamiY->Maximum = 150;
			this->trackbKamiY->Minimum = -150;
			this->trackbKamiY->Name = L"trackbKamiY";
			this->trackbKamiY->Size = System::Drawing::Size(188, 45);
			this->trackbKamiY->TabIndex = 2;
			this->trackbKamiY->TickFrequency = 10;
			// 
			// trackbKamiX
			// 
			this->trackbKamiX->Location = System::Drawing::Point(6, 53);
			this->trackbKamiX->Maximum = 150;
			this->trackbKamiX->Minimum = -150;
			this->trackbKamiX->Name = L"trackbKamiX";
			this->trackbKamiX->Size = System::Drawing::Size(188, 45);
			this->trackbKamiX->TabIndex = 1;
			this->trackbKamiX->TickFrequency = 10;
			// 
			// cbKami
			// 
			this->cbKami->AutoSize = true;
			this->cbKami->Location = System::Drawing::Point(6, 19);
			this->cbKami->Name = L"cbKami";
			this->cbKami->Size = System::Drawing::Size(65, 17);
			this->cbKami->TabIndex = 0;
			this->cbKami->Text = L"On / Off";
			this->cbKami->UseVisualStyleBackColor = true;
			// 
			// MainTMR
			// 
			this->MainTMR->Enabled = true;
			this->MainTMR->Interval = 1;
			this->MainTMR->Tick += gcnew System::EventHandler(this, &HacksFRM::MainTMR_Tick);
			// 
			// MouseFlyTMR
			// 
			this->MouseFlyTMR->Interval = 1;
			this->MouseFlyTMR->Tick += gcnew System::EventHandler(this, &HacksFRM::MouseFlyTMR_Tick);
			// 
			// MouseClickTMR
			// 
			this->MouseClickTMR->Interval = 1;
			this->MouseClickTMR->Tick += gcnew System::EventHandler(this, &HacksFRM::MouseClickTMR_Tick);
			// 
			// KamiTMR
			// 
			this->KamiTMR->Interval = 1;
			this->KamiTMR->Tick += gcnew System::EventHandler(this, &HacksFRM::KamiTMR_Tick);
			// 
			// HacksFRM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(220, 334);
			this->ControlBox = false;
			this->Controls->Add(this->gbKami);
			this->Controls->Add(this->gbMouseFly);
			this->Controls->Add(this->gbTools);
			this->Location = System::Drawing::Point(228, 417);
			this->MaximumSize = System::Drawing::Size(228, 368);
			this->MinimumSize = System::Drawing::Size(228, 368);
			this->Name = L"HacksFRM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Hacks";
			this->gbTools->ResumeLayout(false);
			this->gbTools->PerformLayout();
			this->gbMouseFly->ResumeLayout(false);
			this->gbMouseFly->PerformLayout();
			this->gbKami->ResumeLayout(false);
			this->gbKami->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackbKamiY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackbKamiX))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
        private: System::Void MainTMR_Tick(System::Object^  sender, System::EventArgs^  e);
        private: System::Void MouseFlyTMR_Tick(System::Object^  sender, System::EventArgs^  e);
        private: System::Void MouseClickTMR_Tick(System::Object^  sender, System::EventArgs^  e);
        private: System::Void KamiTMR_Tick(System::Object^  sender, System::EventArgs^  e);
};
}
