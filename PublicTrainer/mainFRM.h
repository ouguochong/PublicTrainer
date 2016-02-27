#include "HacksFRM.h"
#include "BotsFRM.h"

#pragma once

namespace PublicTrainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainFRM
	/// </summary>
	public ref class mainFRM : public System::Windows::Forms::Form
	{
	private :

		HacksFRM ^hacksform; // Hack Form
		BotsFRM ^botsform; // Bot Form

	public:
		mainFRM(void)
		{
			InitializeComponent();

			hacksform = gcnew HacksFRM;  // Hack Form
			botsform = gcnew BotsFRM;  // Bot Form

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainFRM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  MainTMR;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  charStatus;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btnPS;

	private: System::Windows::Forms::Button^  btnMapRusher;
	private: System::Windows::Forms::Button^  btnBots;
	private: System::Windows::Forms::Button^  btnHack;
	private: System::Windows::Forms::Label^  lbCharCoord;
	private: System::Windows::Forms::Label^  lbMouseCoord;
	private: System::Windows::Forms::Label^  lbCharStats;
	private: System::Windows::Forms::Label^  lbMapID;








	protected: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainFRM::typeid));
			this->MainTMR = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->charStatus = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbMapID = (gcnew System::Windows::Forms::Label());
			this->lbCharStats = (gcnew System::Windows::Forms::Label());
			this->lbMouseCoord = (gcnew System::Windows::Forms::Label());
			this->lbCharCoord = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPS = (gcnew System::Windows::Forms::Button());
			this->btnMapRusher = (gcnew System::Windows::Forms::Button());
			this->btnBots = (gcnew System::Windows::Forms::Button());
			this->btnHack = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainTMR
			// 
			this->MainTMR->Enabled = true;
			this->MainTMR->Interval = 1;
			this->MainTMR->Tick += gcnew System::EventHandler(this, &mainFRM::MainTMR_Tick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->charStatus);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 156);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(432, 34);
			this->panel1->TabIndex = 0;
			// 
			// charStatus
			// 
			this->charStatus->AutoSize = true;
			this->charStatus->ForeColor = System::Drawing::Color::Red;
			this->charStatus->Location = System::Drawing::Point(12, 12);
			this->charStatus->Name = L"charStatus";
			this->charStatus->Size = System::Drawing::Size(131, 13);
			this->charStatus->TabIndex = 0;
			this->charStatus->Text = L"Character is not logged In.";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lbMapID);
			this->groupBox1->Controls->Add(this->lbCharStats);
			this->groupBox1->Controls->Add(this->lbMouseCoord);
			this->groupBox1->Controls->Add(this->lbCharCoord);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(302, 137);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Game Info";
			// 
			// lbMapID
			// 
			this->lbMapID->AutoSize = true;
			this->lbMapID->Location = System::Drawing::Point(6, 48);
			this->lbMapID->Name = L"lbMapID";
			this->lbMapID->Size = System::Drawing::Size(51, 13);
			this->lbMapID->TabIndex = 3;
			this->lbMapID->Text = L"Map ID : ";
			// 
			// lbCharStats
			// 
			this->lbCharStats->AutoSize = true;
			this->lbCharStats->Location = System::Drawing::Point(6, 19);
			this->lbCharStats->Name = L"lbCharStats";
			this->lbCharStats->Size = System::Drawing::Size(104, 13);
			this->lbCharStats->TabIndex = 2;
			this->lbCharStats->Text = L"HP : 0            MP : 0";
			// 
			// lbMouseCoord
			// 
			this->lbMouseCoord->AutoSize = true;
			this->lbMouseCoord->Location = System::Drawing::Point(6, 106);
			this->lbMouseCoord->Name = L"lbMouseCoord";
			this->lbMouseCoord->Size = System::Drawing::Size(131, 13);
			this->lbMouseCoord->TabIndex = 1;
			this->lbMouseCoord->Text = L"Mouse Coordinates : (0, 0)";
			// 
			// lbCharCoord
			// 
			this->lbCharCoord->AutoSize = true;
			this->lbCharCoord->Location = System::Drawing::Point(6, 77);
			this->lbCharCoord->Name = L"lbCharCoord";
			this->lbCharCoord->Size = System::Drawing::Size(145, 13);
			this->lbCharCoord->TabIndex = 0;
			this->lbCharCoord->Text = L"Character Coordinates : (0, 0)";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnPS);
			this->groupBox2->Controls->Add(this->btnMapRusher);
			this->groupBox2->Controls->Add(this->btnBots);
			this->groupBox2->Controls->Add(this->btnHack);
			this->groupBox2->Location = System::Drawing::Point(320, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(100, 137);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tools";
			// 
			// btnPS
			// 
			this->btnPS->Enabled = false;
			this->btnPS->Location = System::Drawing::Point(6, 106);
			this->btnPS->Name = L"btnPS";
			this->btnPS->Size = System::Drawing::Size(88, 23);
			this->btnPS->TabIndex = 3;
			this->btnPS->Text = L"Packet Sender";
			this->btnPS->UseVisualStyleBackColor = true;
			// 
			// btnMapRusher
			// 
			this->btnMapRusher->Enabled = false;
			this->btnMapRusher->Location = System::Drawing::Point(6, 77);
			this->btnMapRusher->Name = L"btnMapRusher";
			this->btnMapRusher->Size = System::Drawing::Size(88, 23);
			this->btnMapRusher->TabIndex = 2;
			this->btnMapRusher->Text = L"Map Rusher";
			this->btnMapRusher->UseVisualStyleBackColor = true;
			// 
			// btnBots
			// 
			this->btnBots->Location = System::Drawing::Point(6, 48);
			this->btnBots->Name = L"btnBots";
			this->btnBots->Size = System::Drawing::Size(88, 23);
			this->btnBots->TabIndex = 1;
			this->btnBots->Text = L"Bots";
			this->btnBots->UseVisualStyleBackColor = true;
			this->btnBots->Click += gcnew System::EventHandler(this, &mainFRM::btnBots_Click);
			// 
			// btnHack
			// 
			this->btnHack->Location = System::Drawing::Point(6, 19);
			this->btnHack->Name = L"btnHack";
			this->btnHack->Size = System::Drawing::Size(88, 23);
			this->btnHack->TabIndex = 0;
			this->btnHack->Text = L"Hacks";
			this->btnHack->UseVisualStyleBackColor = true;
			this->btnHack->Click += gcnew System::EventHandler(this, &mainFRM::btnHack_Click);
			// 
			// mainFRM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 190);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(440, 224);
			this->MinimumSize = System::Drawing::Size(440, 224);
			this->Name = L"mainFRM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"deyi Trainer Lite - (REVAMPTION.COM)";
			this->Load += gcnew System::EventHandler(this, &mainFRM::mainFRM_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainFRM_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainTMR_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnHack_Click(System::Object^  sender, System::EventArgs^  e);
    private: System::Void btnBots_Click(System::Object^  sender, System::EventArgs^  e);
};
}
