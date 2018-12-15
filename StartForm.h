#pragma once
#include "GameForm.h"

namespace SuperHot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// StartForm 的摘要
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_newGame;
	private: System::Windows::Forms::Button^  button_setting;
	private: System::Windows::Forms::Label^  label_corner;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_newGame = (gcnew System::Windows::Forms::Button());
			this->button_setting = (gcnew System::Windows::Forms::Button());
			this->label_corner = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_newGame
			// 
			this->button_newGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button_newGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_newGame->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_newGame->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button_newGame->Location = System::Drawing::Point(242, 369);
			this->button_newGame->Name = L"button_newGame";
			this->button_newGame->Size = System::Drawing::Size(233, 108);
			this->button_newGame->TabIndex = 1;
			this->button_newGame->Text = L"New Game";
			this->button_newGame->UseVisualStyleBackColor = false;
			this->button_newGame->Click += gcnew System::EventHandler(this, &StartForm::button_newGame_Click);
			// 
			// button_setting
			// 
			this->button_setting->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button_setting->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_setting->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_setting->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button_setting->Location = System::Drawing::Point(242, 603);
			this->button_setting->Name = L"button_setting";
			this->button_setting->Size = System::Drawing::Size(233, 108);
			this->button_setting->TabIndex = 2;
			this->button_setting->Text = L"Setting";
			this->button_setting->UseVisualStyleBackColor = false;
			// 
			// label_corner
			// 
			this->label_corner->AutoSize = true;
			this->label_corner->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_corner->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_corner->Location = System::Drawing::Point(1408, 935);
			this->label_corner->Name = L"label_corner";
			this->label_corner->Size = System::Drawing::Size(154, 33);
			this->label_corner->TabIndex = 5;
			this->label_corner->Text = L"@SuperHot";
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1573, 977);
			this->Controls->Add(this->label_corner);
			this->Controls->Add(this->button_setting);
			this->Controls->Add(this->button_newGame);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"熱浪 : Super Hot";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_newGame_Click(System::Object^  sender, System::EventArgs^  e) {
		GameForm^ gf = gcnew GameForm;
		gf->ShowDialog();
	}
};
}
