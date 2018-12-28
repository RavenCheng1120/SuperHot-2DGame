#pragma once
#include "bullet.h"
#include "enemyBullet.h"
#include <cstdlib>
#include <time.h>

namespace SuperHot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// StoryForm 的摘要
	/// </summary>
	public ref class StoryForm : public System::Windows::Forms::Form
	{
	public:
		StoryForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
			playerHeight = Player_image->Height;
			playerWidth = Player_image->Width;
			srand(time(NULL));
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~StoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_corner;
	private: System::Windows::Forms::PictureBox^  picture_chap1;
	private: System::Windows::Forms::PictureBox^  picture_chap2;
	private: System::Windows::Forms::PictureBox^  picture_chap3;
	private: System::Windows::Forms::PictureBox^  picture_chap4;
	private: System::Windows::Forms::PictureBox^  picture_chap5;

	private: System::Windows::Forms::Button^  button_nextPage;
	private: System::Windows::Forms::Button^  button_start;
	private: System::Windows::Forms::PictureBox^  Player_image;
	private: System::Windows::Forms::Label^  label_story;
	private: System::Windows::Forms::Label^  label_title;
	private: System::Windows::Forms::Label^  label_end;
	private: System::Windows::Forms::Button^  button_kill;
	private: System::Windows::Forms::Button^  button_spare;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Timer^  timer_enemy;
	private: System::Windows::Forms::Timer^  timer_movement;
	private: System::Windows::Forms::Timer^  timer_blood;
	private: System::Windows::Forms::Timer^  timer_checkDead;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::PictureBox^  bloodImg;
	private: System::Windows::Forms::Label^  Amo_count;
	private: System::Windows::Forms::Label^  ScoreLabel;
	private: System::Windows::Forms::PictureBox^  picture_superHot;
	private: System::Windows::Forms::Button^  button_menu;


	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StoryForm::typeid));
			this->label_corner = (gcnew System::Windows::Forms::Label());
			this->picture_chap1 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_chap2 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_chap3 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_chap4 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_chap5 = (gcnew System::Windows::Forms::PictureBox());
			this->button_nextPage = (gcnew System::Windows::Forms::Button());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->Player_image = (gcnew System::Windows::Forms::PictureBox());
			this->label_story = (gcnew System::Windows::Forms::Label());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->label_end = (gcnew System::Windows::Forms::Label());
			this->button_kill = (gcnew System::Windows::Forms::Button());
			this->button_spare = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer_enemy = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_movement = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_blood = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_checkDead = (gcnew System::Windows::Forms::Timer(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->bloodImg = (gcnew System::Windows::Forms::PictureBox());
			this->Amo_count = (gcnew System::Windows::Forms::Label());
			this->ScoreLabel = (gcnew System::Windows::Forms::Label());
			this->picture_superHot = (gcnew System::Windows::Forms::PictureBox());
			this->button_menu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bloodImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_superHot))->BeginInit();
			this->SuspendLayout();
			// 
			// label_corner
			// 
			this->label_corner->AutoSize = true;
			this->label_corner->BackColor = System::Drawing::Color::Transparent;
			this->label_corner->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_corner->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_corner->Location = System::Drawing::Point(2108, 1287);
			this->label_corner->Name = L"label_corner";
			this->label_corner->Size = System::Drawing::Size(154, 33);
			this->label_corner->TabIndex = 4;
			this->label_corner->Text = L"@SuperHot";
			// 
			// picture_chap1
			// 
			this->picture_chap1->BackColor = System::Drawing::Color::DimGray;
			this->picture_chap1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_chap1.BackgroundImage")));
			this->picture_chap1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picture_chap1->Location = System::Drawing::Point(29, 65);
			this->picture_chap1->Name = L"picture_chap1";
			this->picture_chap1->Size = System::Drawing::Size(432, 1198);
			this->picture_chap1->TabIndex = 5;
			this->picture_chap1->TabStop = false;
			this->picture_chap1->Click += gcnew System::EventHandler(this, &StoryForm::pictureBox1_Click);
			// 
			// picture_chap2
			// 
			this->picture_chap2->BackColor = System::Drawing::Color::DimGray;
			this->picture_chap2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_chap2.BackgroundImage")));
			this->picture_chap2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picture_chap2->Location = System::Drawing::Point(478, 65);
			this->picture_chap2->Name = L"picture_chap2";
			this->picture_chap2->Size = System::Drawing::Size(432, 1198);
			this->picture_chap2->TabIndex = 6;
			this->picture_chap2->TabStop = false;
			this->picture_chap2->Click += gcnew System::EventHandler(this, &StoryForm::pictureBox2_Click);
			// 
			// picture_chap3
			// 
			this->picture_chap3->BackColor = System::Drawing::Color::DimGray;
			this->picture_chap3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_chap3.BackgroundImage")));
			this->picture_chap3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picture_chap3->Location = System::Drawing::Point(927, 65);
			this->picture_chap3->Name = L"picture_chap3";
			this->picture_chap3->Size = System::Drawing::Size(432, 1198);
			this->picture_chap3->TabIndex = 7;
			this->picture_chap3->TabStop = false;
			this->picture_chap3->Click += gcnew System::EventHandler(this, &StoryForm::picture_chap3_Click);
			// 
			// picture_chap4
			// 
			this->picture_chap4->BackColor = System::Drawing::Color::DimGray;
			this->picture_chap4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_chap4.BackgroundImage")));
			this->picture_chap4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picture_chap4->Location = System::Drawing::Point(1376, 65);
			this->picture_chap4->Name = L"picture_chap4";
			this->picture_chap4->Size = System::Drawing::Size(432, 1198);
			this->picture_chap4->TabIndex = 8;
			this->picture_chap4->TabStop = false;
			this->picture_chap4->Click += gcnew System::EventHandler(this, &StoryForm::picture_chap4_Click);
			// 
			// picture_chap5
			// 
			this->picture_chap5->BackColor = System::Drawing::Color::DimGray;
			this->picture_chap5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_chap5.BackgroundImage")));
			this->picture_chap5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picture_chap5->Location = System::Drawing::Point(1824, 65);
			this->picture_chap5->Name = L"picture_chap5";
			this->picture_chap5->Size = System::Drawing::Size(432, 1198);
			this->picture_chap5->TabIndex = 9;
			this->picture_chap5->TabStop = false;
			this->picture_chap5->Click += gcnew System::EventHandler(this, &StoryForm::picture_chap5_Click);
			// 
			// button_nextPage
			// 
			this->button_nextPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_nextPage->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_nextPage->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_nextPage->Location = System::Drawing::Point(2023, 1200);
			this->button_nextPage->Name = L"button_nextPage";
			this->button_nextPage->Size = System::Drawing::Size(181, 84);
			this->button_nextPage->TabIndex = 12;
			this->button_nextPage->Text = L"下一頁";
			this->button_nextPage->UseVisualStyleBackColor = false;
			this->button_nextPage->Visible = false;
			this->button_nextPage->Click += gcnew System::EventHandler(this, &StoryForm::button_nextPage_Click);
			// 
			// button_start
			// 
			this->button_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_start->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_start->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_start->Location = System::Drawing::Point(1024, 1157);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(202, 95);
			this->button_start->TabIndex = 13;
			this->button_start->Text = L"開始遊戲";
			this->button_start->UseVisualStyleBackColor = false;
			this->button_start->Visible = false;
			this->button_start->Click += gcnew System::EventHandler(this, &StoryForm::button_start_Click);
			// 
			// Player_image
			// 
			this->Player_image->BackColor = System::Drawing::Color::Transparent;
			this->Player_image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player_image.BackgroundImage")));
			this->Player_image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Player_image->Location = System::Drawing::Point(1066, 512);
			this->Player_image->Name = L"Player_image";
			this->Player_image->Size = System::Drawing::Size(100, 100);
			this->Player_image->TabIndex = 14;
			this->Player_image->TabStop = false;
			this->Player_image->Visible = false;
			// 
			// label_story
			// 
			this->label_story->BackColor = System::Drawing::Color::Transparent;
			this->label_story->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_story->ForeColor = System::Drawing::SystemColors::Control;
			this->label_story->Location = System::Drawing::Point(77, 225);
			this->label_story->Name = L"label_story";
			this->label_story->Size = System::Drawing::Size(1257, 929);
			this->label_story->TabIndex = 15;
			this->label_story->Text = L"故事文字";
			this->label_story->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label_story->Visible = false;
			// 
			// label_title
			// 
			this->label_title->BackColor = System::Drawing::Color::Transparent;
			this->label_title->Font = (gcnew System::Drawing::Font(L"標楷體", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label_title->ForeColor = System::Drawing::Color::Firebrick;
			this->label_title->Location = System::Drawing::Point(560, 491);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(1124, 205);
			this->label_title->TabIndex = 16;
			this->label_title->Text = L"故事文字";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_title->Visible = false;
			// 
			// label_end
			// 
			this->label_end->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label_end->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_end->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_end->Location = System::Drawing::Point(1824, 1149);
			this->label_end->Name = L"label_end";
			this->label_end->Size = System::Drawing::Size(432, 114);
			this->label_end->TabIndex = 17;
			this->label_end->Text = L"Ending";
			this->label_end->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_end->Click += gcnew System::EventHandler(this, &StoryForm::label_end_Click);
			// 
			// button_kill
			// 
			this->button_kill->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_kill->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_kill->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_kill->Location = System::Drawing::Point(563, 932);
			this->button_kill->Name = L"button_kill";
			this->button_kill->Size = System::Drawing::Size(446, 95);
			this->button_kill->TabIndex = 18;
			this->button_kill->Text = L"殺死最後一隻怪物";
			this->button_kill->UseVisualStyleBackColor = false;
			this->button_kill->Visible = false;
			this->button_kill->Click += gcnew System::EventHandler(this, &StoryForm::button_kill_Click);
			// 
			// button_spare
			// 
			this->button_spare->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_spare->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_spare->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_spare->Location = System::Drawing::Point(1237, 932);
			this->button_spare->Name = L"button_spare";
			this->button_spare->Size = System::Drawing::Size(446, 95);
			this->button_spare->TabIndex = 19;
			this->button_spare->Text = L"赦免最後一隻怪物";
			this->button_spare->UseVisualStyleBackColor = false;
			this->button_spare->Visible = false;
			this->button_spare->Click += gcnew System::EventHandler(this, &StoryForm::button_spare_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"protagonist00.jpg");
			this->imageList1->Images->SetKeyName(1, L"protagonist01.jpg");
			this->imageList1->Images->SetKeyName(2, L"protagonist02.jpg");
			this->imageList1->Images->SetKeyName(3, L"protagonist03.jpg");
			this->imageList1->Images->SetKeyName(4, L"protagonist04.jpg");
			this->imageList1->Images->SetKeyName(5, L"protagonist05.jpg");
			this->imageList1->Images->SetKeyName(6, L"protagonist06.jpg");
			this->imageList1->Images->SetKeyName(7, L"protagonist07.jpg");
			// 
			// timer_enemy
			// 
			this->timer_enemy->Interval = 800;
			this->timer_enemy->Tick += gcnew System::EventHandler(this, &StoryForm::timer_enemy_Tick);
			// 
			// timer_movement
			// 
			this->timer_movement->Interval = 20;
			this->timer_movement->Tick += gcnew System::EventHandler(this, &StoryForm::timer_movement_Tick);
			// 
			// timer_blood
			// 
			this->timer_blood->Interval = 1500;
			this->timer_blood->Tick += gcnew System::EventHandler(this, &StoryForm::timer_blood_Tick);
			// 
			// timer_checkDead
			// 
			this->timer_checkDead->Interval = 20;
			this->timer_checkDead->Tick += gcnew System::EventHandler(this, &StoryForm::timer_checkDead_Tick_1);
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"health00.png");
			this->imageList2->Images->SetKeyName(1, L"health01.png");
			this->imageList2->Images->SetKeyName(2, L"health02.png");
			this->imageList2->Images->SetKeyName(3, L"health03.png");
			this->imageList2->Images->SetKeyName(4, L"health04.png");
			this->imageList2->Images->SetKeyName(5, L"health05.png");
			this->imageList2->Images->SetKeyName(6, L"health06.png");
			this->imageList2->Images->SetKeyName(7, L"health07.png");
			this->imageList2->Images->SetKeyName(8, L"health08.png");
			this->imageList2->Images->SetKeyName(9, L"health09.png");
			this->imageList2->Images->SetKeyName(10, L"health10.png");
			// 
			// bloodImg
			// 
			this->bloodImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bloodImg.BackgroundImage")));
			this->bloodImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bloodImg->Location = System::Drawing::Point(42, 40);
			this->bloodImg->Name = L"bloodImg";
			this->bloodImg->Size = System::Drawing::Size(280, 70);
			this->bloodImg->TabIndex = 20;
			this->bloodImg->TabStop = false;
			this->bloodImg->Visible = false;
			// 
			// Amo_count
			// 
			this->Amo_count->AutoSize = true;
			this->Amo_count->BackColor = System::Drawing::Color::Transparent;
			this->Amo_count->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Amo_count->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Amo_count->Location = System::Drawing::Point(45, 131);
			this->Amo_count->Name = L"Amo_count";
			this->Amo_count->Size = System::Drawing::Size(179, 40);
			this->Amo_count->TabIndex = 21;
			this->Amo_count->Text = L"子彈數量: 0";
			this->Amo_count->Visible = false;
			// 
			// ScoreLabel
			// 
			this->ScoreLabel->AutoSize = true;
			this->ScoreLabel->BackColor = System::Drawing::Color::Transparent;
			this->ScoreLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ScoreLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ScoreLabel->Location = System::Drawing::Point(45, 196);
			this->ScoreLabel->Name = L"ScoreLabel";
			this->ScoreLabel->Size = System::Drawing::Size(235, 80);
			this->ScoreLabel->TabIndex = 22;
			this->ScoreLabel->Text = L"擊殺數:  0\r\n(目標擊殺40人)";
			this->ScoreLabel->Visible = false;
			// 
			// picture_superHot
			// 
			this->picture_superHot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->picture_superHot->Enabled = false;
			this->picture_superHot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_superHot.Image")));
			this->picture_superHot->Location = System::Drawing::Point(152, 171);
			this->picture_superHot->Name = L"picture_superHot";
			this->picture_superHot->Size = System::Drawing::Size(1945, 980);
			this->picture_superHot->TabIndex = 23;
			this->picture_superHot->TabStop = false;
			this->picture_superHot->Visible = false;
			// 
			// button_menu
			// 
			this->button_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_menu->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_menu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_menu->Location = System::Drawing::Point(1024, 1200);
			this->button_menu->Name = L"button_menu";
			this->button_menu->Size = System::Drawing::Size(202, 95);
			this->button_menu->TabIndex = 24;
			this->button_menu->Text = L"回主選單";
			this->button_menu->UseVisualStyleBackColor = false;
			this->button_menu->Visible = false;
			this->button_menu->Click += gcnew System::EventHandler(this, &StoryForm::button_menu_Click);
			// 
			// StoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(2274, 1329);
			this->Controls->Add(this->button_menu);
			this->Controls->Add(this->Player_image);
			this->Controls->Add(this->ScoreLabel);
			this->Controls->Add(this->Amo_count);
			this->Controls->Add(this->bloodImg);
			this->Controls->Add(this->button_spare);
			this->Controls->Add(this->button_kill);
			this->Controls->Add(this->label_end);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->button_nextPage);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->label_story);
			this->Controls->Add(this->label_corner);
			this->Controls->Add(this->picture_superHot);
			this->Controls->Add(this->picture_chap1);
			this->Controls->Add(this->picture_chap2);
			this->Controls->Add(this->picture_chap3);
			this->Controls->Add(this->picture_chap4);
			this->Controls->Add(this->picture_chap5);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"StoryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Super Hot : 故事模式";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &StoryForm::GameForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &StoryForm::GameForm_KeyUp);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &StoryForm::GameForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_chap5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bloodImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_superHot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		Boolean goleft;
		Boolean goright;
		Boolean goup;
		Boolean godown;
		bool hurt = true;		//是否會受到傷害
		int bulletAdd = 10;		//倒數，子彈包出現
		int blood = 2;			//血量
		int playerSpeed = 13;	//水平移動速度
		int playerSpeedSlow = 10;//斜向移動速度
		int enemySpeed = 5;		//敵人移動速度
		int mouseX;				//滑鼠x座標位置
		int mouseY;				//滑鼠y座標位置
		int playerFacing = 0;	//面向北方(0)
		int playerX;			//玩家在x座標位置
		int playerY;			//玩家在y座標位置
		int playerHeight;		//玩家圖像高度
		int playerWidth;		//玩家圖像寬度
		int amo = 0;			//子彈數
		int score = 28;			//得分
		int enemy_count = 0;	//敵人數量
		List<bullet^>^ bulletList = gcnew List<bullet^>;
		List<enemyBullet^>^ enemyBulletList = gcnew List<enemyBullet^>;
		List<Control^>^ controlListB = gcnew List<Control^>;
		List<Control^>^ controlListE = gcnew List<Control^>;

		int chapter = 1;	//選擇章節
		int kill_goal = 30; //目標擊殺人數
		array<String^>^ storyLines = gcnew array<String^>(10);	//存放各章劇情
		int pageNumber;		//紀錄每一章節現在在第幾頁

#pragma endregion
	//按鍵:上下左右
	private: System::Void GameForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::A) {
			goleft = true;
		}
		if (e->KeyCode == Keys::D)
			goright = true;
		if (e->KeyCode == Keys::W)
			goup = true;
		if (e->KeyCode == Keys::S)
			godown = true;
	}
	//放開按鍵:上下左右，空白鍵射擊
	private: System::Void GameForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::A) {
			goleft = false;
		}
		if (e->KeyCode == Keys::D)
			goright = false;
		if (e->KeyCode == Keys::W)
			goup = false;
		if (e->KeyCode == Keys::S)
			godown = false;
		if (e->KeyCode == Keys::Space && amo > 0 && blood > 0) {
			amo--;
			shoot(this);
		}
		Amo_count->Text = "子彈數量: " + amo;
	}

	//角色和敵人移動的timer
	private: System::Void timer_movement_Tick(System::Object^  sender, System::EventArgs^  e) {
		playerX = Player_image->Location.X;
		playerY = Player_image->Location.Y;
		//不動時，SLOW MOTION慢動作模式
		if (goleft == false && goright == false && goup == false && godown == false) {
			enemySpeed = 1;
			for each (bullet^ each_bullet in bulletList) {
				each_bullet->dx = each_bullet->slowSpeedX;
				each_bullet->dy = each_bullet->slowSpeedY;
			}
			for each (enemyBullet^ each_bullet in enemyBulletList) {
				each_bullet->dx = each_bullet->slowSpeedX;
				each_bullet->dy = each_bullet->slowSpeedY;
			}
		}
		else {
			enemySpeed = 5;
			for each (bullet^ each_bullet in bulletList) {
				each_bullet->dx = each_bullet->normalSpeedX;
				each_bullet->dy = each_bullet->normalSpeedY;
			}
			for each (enemyBullet^ each_bullet in enemyBulletList) {
				each_bullet->dx = each_bullet->normalSpeedX;
				each_bullet->dy = each_bullet->normalSpeedY;
			}
		}

		//上下左右
		if (goleft == true && Player_image->Location.X > 15) {
			Player_image->Location = Point(playerX - playerSpeed, playerY);
		}
		if (goright == true && goleft == false && Player_image->Location.X < (1040 - playerWidth)) {
			Player_image->Location = Point(playerX + playerSpeed, playerY);
		}
		if (goup == true && Player_image->Location.Y > 10) {
			Player_image->Location = Point(playerX, playerY - playerSpeed);
		}
		if (godown == true && goup == false && Player_image->Location.Y < (650 - playerHeight)) {
			Player_image->Location = Point(playerX, playerY + playerSpeed);
		}

		//斜方向移動
		if (goup == true && goleft == true && Player_image->Location.X > 10 && Player_image->Location.Y > 10) {
			Player_image->Location = Point(playerX - playerSpeedSlow, playerY - playerSpeedSlow);
		}
		if (goup == true && goright == true && Player_image->Location.X < (1040 - playerWidth) && Player_image->Location.Y > 10) {
			Player_image->Location = Point(playerX + playerSpeedSlow, playerY - playerSpeedSlow);
		}
		if (godown == true && goleft == true && Player_image->Location.X > 10 && Player_image->Location.Y < (650 - playerHeight)) {
			Player_image->Location = Point(playerX - playerSpeedSlow, playerY + playerSpeedSlow);
		}
		if (godown == true && goright == true && Player_image->Location.X < (1040 - playerWidth) && Player_image->Location.Y < (650 - playerHeight)) {
			Player_image->Location = Point(playerX + playerSpeedSlow, playerY + playerSpeedSlow);
		}

		//改變角色圖像，共八個方位，用imageList儲存8張圖片
		float slope = 100.0;
		if (mouseX != playerX)
			slope = (float)(mouseY - playerY - 0.5* playerHeight) / (float)(mouseX - playerX - 0.5* playerWidth);

		if (slope < -2.5 && mouseY < playerY + 0.5* playerHeight) {
			Player_image->BackgroundImage = imageList1->Images[0];	//正上方
			playerFacing = 0;
		}
		else if (slope < -0.3 && slope > -2.5 && mouseX > playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[1];	//右上方
			playerFacing = 1;
		}
		else if (slope < 0.3 && slope > -0.3 && mouseX > playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[2];	//正右方
			playerFacing = 2;
		}
		else if (slope < 2.5 && slope > 0.3 && mouseX > playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[3];	//右下方
			playerFacing = 3;
		}
		else if (slope > 2.5 &&  mouseY > playerY + 0.5* playerHeight) {
			Player_image->BackgroundImage = imageList1->Images[4];	//正下方
			playerFacing = 4;
		}
		else if (slope < -0.3 && slope > -2.5 &&  mouseY > playerY + 0.5* playerHeight) {
			Player_image->BackgroundImage = imageList1->Images[5];	//左下方
			playerFacing = 5;
		}
		else if (slope < 0.3 && slope > -0.3 && mouseX < playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[6];	//正左方
			playerFacing = 6;
		}
		else if (slope < 2.5 && slope > 0.3 && mouseX < playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[7];	//左上方
			playerFacing = 7;
		}

		//角色血量
		bloodImg->BackgroundImage = imageList2->Images[blood];
		Player_image->BringToFront();

		//遊戲結束
		if (blood == 0)
			timer_checkDead->Enabled = true;
		if ((chapter == 1 && score >= 30) || (chapter == 2 && score >= 25) || (chapter == 3 && score >= 30)
			|| (chapter == 4 && score >= 35)) {
			timer_checkDead->Enabled = true;
			picture_superHot->Enabled = true;
			picture_superHot->Visible = true;	//播放過關gif
		}

		//敵人行動
		for each (Control^ x in this->Controls) {
			//如果敵人和子彈接觸
			for each (Control^ y in this->Controls) {
				if (y->Tag == "Bullet" && x->Tag == "Enemy") {
					if (x->Bounds.IntersectsWith(y->Bounds)) {
						delete y;	//子彈消失
						int temp = controlListB->IndexOf(y);
						controlListB->Remove(y);
						bulletList->Remove(bulletList[temp]);
						delete x;	//敵人消失
						bulletAdd--;	//倒數
						if (bulletAdd == 0) {
							bulletAdd = 10;
							bulletshow();	//生成子彈包
						}
						score += 1;
						ScoreLabel->Text = "擊殺數: " + score + "\n(目標擊殺" + kill_goal + "人)";
						enemy_count--;
					}
				}
			}
			//敵人移動
			if (x->Tag == "Enemy") {
				if (x->Bounds.IntersectsWith(Player_image->Bounds)) {	//撞上玩家
					if (blood != 0 && hurt == true) {
						blood--;
						hurt = false;
						timer_blood->Start();
					}
					if (blood == 0)
						delete x;
				}
				//朝向角色移動
				if (x->Left > playerX && x->Location.X > 15) {
					x->Location = Point(x->Left - enemySpeed, x->Top);
				}
				if (x->Left < playerX && x->Location.X < (1040 - x->Width)) {
					x->Location = Point(x->Left + enemySpeed, x->Top);
				}
				if (x->Top > playerY && x->Location.Y > 10) {
					x->Location = Point(x->Left, x->Top - enemySpeed);
				}
				if (x->Top < playerY && x->Location.Y < (650 - x->Height)) {
					x->Location = Point(x->Left, x->Top + enemySpeed);
				}
			}
			//敵人子彈打到玩家
			if (x->Tag == "EnemyBullet") {
				if (x->Bounds.IntersectsWith(Player_image->Bounds)) {
					delete x;	//子彈消失
					int temp = controlListE->IndexOf(x);
					controlListE->Remove(x);
					enemyBulletList->Remove(enemyBulletList[temp]);
					if (blood != 0 && hurt == true) {
						blood--;
						hurt = false;
						timer_blood->Start();
					}
				}
			}
			//玩家遇到子彈包
			if (x->Tag == "Bulletbag") {
				if (x->Bounds.IntersectsWith(Player_image->Bounds)) {
					delete x;	//子彈包消失
					controlListE->Remove(x);
					amo += 10;
					Amo_count->Text = "子彈數量: " + amo;
				}
			}
		}
		//敵人隨機產生
		if (chapter == 1) {		//第一章敵人
			if ((rand() % 300) % 30 == 0) {
				if (enemy_count < 7)
					make_enemy();
			}
		}
		else if(chapter == 2){		//第二章敵人
			if ((rand() % 480) % 50 == 0) {
				if (enemy_count < 5)
					make_enemy();
			}
		}
		else if (chapter == 3) {	//第三章敵人
			if ((rand() % 450) % 45 == 0) {
				if (enemy_count < 6)
					make_enemy();
			}
		}
		else if (chapter == 4) {	//第四章敵人
			if ((rand() % 460) % 45 == 0) {
				if (enemy_count < 9)
					make_enemy();
			}
		}
	}

	//生成子彈包
	public: System::Void bulletshow() {
		System::Windows::Forms::PictureBox^ bulletbag = gcnew  System::Windows::Forms::PictureBox;
		bulletbag->Tag = "Bulletbag";
		bulletbag->Size = System::Drawing::Size(20, 20);
		bulletbag->BackColor = System::Drawing::Color::Yellow;
		bulletbag->Location = System::Drawing::Point(rand() % 1000, rand() % 600);
		bulletbag->TabStop = false;
		this->Controls->Add(bulletbag);
	}

	//偵測滑鼠的位置
	private: System::Void GameForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseX = e->Location.X;
		mouseY = e->Location.Y;
	}

	//按下滑鼠左鍵，發射子彈
	private: System::Void GameForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (amo > 0) {
			amo--;
			shoot(this);
		}
		Amo_count->Text = "子彈數量: " + amo;
	}
	//發射子彈
	private: System::Void shoot(Form^ form) {
		bullet^ one_bullet = gcnew bullet;
		one_bullet->bullet_left = playerX + 0.5*playerWidth;
		one_bullet->bullet_top = playerY + 0.5*playerHeight;
		one_bullet->directionX = mouseX;
		one_bullet->directionY = mouseY;
		one_bullet->make_bullet(form);
		bulletList->Add(one_bullet);
		controlListB->Add(one_bullet->Bullet);
	}
	//敵人發射子彈
	private: System::Void timer_enemy_Tick(System::Object^  sender, System::EventArgs^  e) {
		for each (Control^ x in this->Controls) {
			if(chapter == 2 || chapter == 3){
				if (x->Tag == "Enemy" && rand() % 50>25)
					enemyshoot(x, this);
			}
			else if (chapter == 4) {
				if (x->Tag == "Enemy" && rand() % 60>25)
					enemyshoot(x, this);
			}
		}
	}
	//生成敵人子彈
	private: System::Void enemyshoot(Control^ x, Form^ form) {
		enemyBullet^ one_enemyShoot = gcnew enemyBullet;
		one_enemyShoot->bullet_left = x->Left + 0.5*x->Width;
		one_enemyShoot->bullet_top = x->Top + 0.5*x->Height;
		one_enemyShoot->directionX = playerX + 0.5*playerWidth;
		one_enemyShoot->directionY = playerY + 0.5*playerHeight;
		one_enemyShoot->make_bullet(form);
		enemyBulletList->Add(one_enemyShoot);
		controlListE->Add(one_enemyShoot->Bullet);
	}
	//敵人重生
	private: System::Void make_enemy() {
		enemy_count++;
		System::Windows::Forms::PictureBox^ enemies = gcnew  System::Windows::Forms::PictureBox;
		enemies->Tag = "Enemy";
		enemies->Size = System::Drawing::Size(50, 50);
		enemies->BackColor = System::Drawing::Color::Firebrick;
		enemies->TabStop = false;
		//隨機重生點，在視窗外框
		switch (rand() % 4)
		{
		case 0:
			enemies->Location = System::Drawing::Point(rand() % 1000, 0);	//上方
			break;
		case 1:
			enemies->Location = System::Drawing::Point(rand() % 1000, 600);	//下方
			break;
		case 2:
			enemies->Location = System::Drawing::Point(0, rand() % 600);	//左方
			break;
		case 3:
			enemies->Location = System::Drawing::Point(1000, rand() % 600);	//右方
			break;
		default:
			break;
		}
		this->Controls->Add(enemies);
	}
	//扣血的冷卻時間
	private: System::Void timer_blood_Tick(System::Object^  sender, System::EventArgs^  e) {
		hurt = true;
		timer_blood->Stop();
	}
	//關卡停止
	private: System::Void timer_checkDead_Tick_1(System::Object^  sender, System::EventArgs^  e) {
		//隱藏物件
		for each(Control^ x in this->Controls) {
			if (x->Tag == "Enemy" || x->Tag == "EnemyBullet" || x->Tag == "Bulletbag")
				delete x;
		}
		ScoreLabel->Visible = false;
		Amo_count->Visible = false;
		bloodImg->Visible = false;
		Player_image->Visible = false;
		bulletList->Clear();
		enemyBulletList->Clear();
		controlListB->Clear();
		controlListE->Clear();
		amo = 0;
		enemy_count = 0;
		bulletAdd = 10;
		//角色死亡
		if (blood == 0) {
			label_title->Visible = true;
			label_title->Text = "Game Over";
		}
		button_menu->Enabled = true;
		button_menu->Visible = true;
		timer_movement->Stop();
		timer_enemy->Stop();
	}

	//點擊第一章
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		chapter = 1;
		kill_goal = 30;
		picture_chap1->Visible = false;
		picture_chap2->Visible = false;
		picture_chap3->Visible = false;
		picture_chap4->Visible = false;
		picture_chap5->Visible = false;
		label_end->Visible = false;
		label_story->Visible = true;
		button_nextPage -> Visible = true;
		this->BackColor = System::Drawing::Color::Black;

		label_story->Text = "";
		label_title->Text = "殺光他們";
		pageNumber = 0;
		storyLines[0] = "他睜開眼，起身望向窗外。";
		storyLines[1] = "\n一半的城市昏暗殘破，一半的城市浸染血紅。";
		storyLines[2] = "\n這樣的日子已經多久了呢？一百天？半年？他已失去計數。";
		storyLines[3] = "\n\n早晨不再是清脆的鳥鳴，而是人們淒厲的慘叫與哭喊。";
		storyLines[4] = "\n漸漸的，連人的聲音都消失了，只剩下詭異的水晶碰撞聲。";
		storyLines[5] = "\n\n那些該死的、可怕的水晶聲...正從窗外傳來。";
		storyLines[6] = "\n他探頭出去，一群鮮紅色的水晶怪物，在大街上漫遊著。";
		storyLines[7] = "\n\n毫無猶豫的抓起槍，他衝下樓去，腦中閃過一個清晰的聲音:";
	}
	//下一頁按鈕
	private: System::Void button_nextPage_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (chapter)
		{
		case 1:
			if (pageNumber == 8) {
				button_start->Visible = true;
				label_title->Visible = true;
				button_nextPage->Visible = false;
				label_story->Visible = false;
				amo = 30;
			}
			break;
		case 2:
			if (pageNumber == 9) {
				button_start->Visible = true;
				label_title->Visible = true;
				button_nextPage->Visible = false;
				label_story->Visible = false;
				amo = 40;
			}
			break;
		case 3:
			if (pageNumber == 4) {
				label_title->Visible = true;
				label_story->Visible = false;
			}
			else if (pageNumber == 5) {
				label_title->Visible = false;
				label_story->Visible = true;
				label_title->Text = "越多越好";
			}
			else if (pageNumber == 7) {
				button_start->Visible = true;
				label_title->Visible = true;
				button_nextPage->Visible = false;
				label_story->Visible = false;
				amo = 50;
			}
			break;
		case 4:
			if (pageNumber == 3) {
				label_title->Visible = true;
				label_story->Visible = false;
			}
			else if (pageNumber == 4) {
				label_title->Visible = false;
				label_story->Visible = true;
				label_title->Text = "成為我們吧";
			}
			else if (pageNumber == 5) {
				label_title->Visible = true;
				label_story->Visible = false;
			}
			else if (pageNumber == 6) {
				label_title->Visible = false;
				label_story->Visible = true;
				label_title->Text = "你沒有選擇";
			}
			else if (pageNumber == 7) {
				label_title->Visible = true;
				label_story->Visible = false;
			}
			else if (pageNumber == 8) {
				label_title->Visible = false;
				label_story->Visible = true;
				button_start->Visible = true;
				button_nextPage->Visible = false;
				amo = 50;
			}
			break;
		case 5:
			if (pageNumber == 4) {
				button_start->Visible = true;
				label_title->Visible = true;
				button_nextPage->Visible = false;
				label_story->Visible = false;
				amo = 50;
			}
			break;
		case 6:
			if (pageNumber == 1) {
				label_title->Visible = true;
				label_story->Visible = false;
			}
			else if (pageNumber == 2) {
				label_title->Visible = false;
				label_story->Visible = true;
				label_title->Text = "你將成為我";
			}
			else if (pageNumber == 4) {
				label_title->Visible = true;
				label_story->Visible = false;
			}
			else if (pageNumber == 5) {
				label_title->Visible = false;
				label_story->Visible = true;
				label_title->Text = "做出選擇";
			}
			else if (pageNumber == 6) {
				label_title->Visible = true;
				label_story->Visible = false;
				button_nextPage->Visible = false;
				button_kill->Visible = true;
				button_spare->Visible = true;
			}
			break;
		case 7:
			if (pageNumber == 3)
				button_nextPage->Visible = false;
			break;
		case 8:
			if (pageNumber == 3)
				button_nextPage->Visible = false;
			break;
		default:
			break;
		}
		label_story->Text += storyLines[pageNumber];
		pageNumber++;
	}
	//開始遊戲按鈕
	private: System::Void button_start_Click(System::Object^  sender, System::EventArgs^  e) {
		button_start->Visible = false;
		label_title->Visible = false;
		label_story->Visible = false;
		Player_image->Visible = true;
		bloodImg->Visible = true;
		Amo_count->Visible = true;
		ScoreLabel->Visible = true;

		timer_enemy->Enabled = true;
		timer_movement->Enabled = true;
		Amo_count->Text = "子彈數量: " + amo;
		ScoreLabel->Text = "擊殺數: " + score + "\n(目標擊殺" + kill_goal + "人)";
	}
	//點擊第二章
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		chapter = 2;
		kill_goal = 25;
		picture_chap1->Visible = false;
		picture_chap2->Visible = false;
		picture_chap3->Visible = false;
		picture_chap4->Visible = false;
		picture_chap5->Visible = false;
		label_end->Visible = false;
		label_story->Visible = true;
		button_nextPage->Visible = true;
		this->BackColor = System::Drawing::Color::Black;

		label_story->Text = "望著滿地怪物的屍體，他將槍重新上膛。";
		label_title->Text = "反擊";
		pageNumber = 0;
		storyLines[0] = "\n碰!\n";
		storyLines[1] = "一道紅光劃過他的手臂，留下一條血痕。";
		storyLines[2] = "\n他轉頭，身後的水晶怪物舉著手，掌心冒著開槍後的硝煙。";
		storyLines[3] = "\n還未反應，又一顆紅色的水晶子彈朝他飛來。";
		storyLines[4] = "\n\n這個景象無比熟悉。";
		storyLines[5] = "\n同樣絢麗的紅水晶，就曾插在他妹妹的胸前與母親的腦門上。";
		storyLines[6] = "\n\n怒火彷彿灼燒著他的臉頰。";
		storyLines[7] = "\n他屏住呼吸，時間的流動變得緩慢，子彈從他眼前破開空氣，射進了一旁的柏油路中。";
		storyLines[8] = "\n躲開子彈後，他手中的槍管隨即爆出火光。";
	}
	//點擊第三章
	private: System::Void picture_chap3_Click(System::Object^  sender, System::EventArgs^  e) {
		chapter = 3;
		kill_goal = 30;
		picture_chap1->Visible = false;
		picture_chap2->Visible = false;
		picture_chap3->Visible = false;
		picture_chap4->Visible = false;
		picture_chap5->Visible = false;
		label_end->Visible = false;
		label_story->Visible = true;
		button_nextPage->Visible = true;
		this->BackColor = System::Drawing::Color::Black;

		label_story->Text = "這不是一場豪華的復仇盛宴，至少他並不這麼認為。";
		label_title->Text = "不要停止";
		pageNumber = 0;
		storyLines[0] = "\n使命，也許是比較適合的詞彙。";
		storyLines[1] = "\n把這群不知從何而來、異常嗜血的水晶怪物通通消滅，變成了他的責任。";
		storyLines[2] = "\n\n有時他會疑惑為何自己如此執著，甚至興起想要放棄的念頭。";
		storyLines[3] = "\n當他在末日後杳無人煙的城市漫步時，忍不住又開始懷疑自己。";
		storyLines[4] = "\n\n『不要停止』";
		storyLines[5] = "\n\n清楚的耳語使他身軀一震，警惕的環顧四周。";
		storyLines[6] = "\n竄動的紅影印入眼簾，他無暇顧及那詭異的嗓音，手指再度扣上板機。";
	}
	//點擊第四章
	private: System::Void picture_chap4_Click(System::Object^  sender, System::EventArgs^  e) {
		chapter = 4;
		kill_goal = 35;
		picture_chap1->Visible = false;
		picture_chap2->Visible = false;
		picture_chap3->Visible = false;
		picture_chap4->Visible = false;
		picture_chap5->Visible = false;
		label_end->Visible = false;
		label_story->Visible = true;
		button_nextPage->Visible = true;
		this->BackColor = System::Drawing::Color::Black;

		label_story->Text = "他摸著左臉的皮膚，觸手冰冷。";
		label_title->Text = "不需要逃跑";
		pageNumber = 0;
		storyLines[0] = "\n感染正在侵蝕他的身體，以及他的理智。";
		storyLines[1] = "\n病毒般的紅色水晶扎根擴散，僵硬了半邊的身體，卻也賜予他過人的反應力。";
		storyLines[2] = "\n他越來越相信這是使命，是無法逃脫的宿命。";
		storyLines[3] = "\n\n『不需要逃跑』";
		storyLines[4] = "\n\n腦中傳來惡魔的低語，水晶正在搞亂他的思考。";
		storyLines[5] = "\n\n『成為我們吧』";
		storyLines[6] = "\n\n他甩甩頭。";
		storyLines[7] = "\n\n『你沒有選擇』";
		storyLines[8] = "\n\n「我永遠都有選擇。」他反駁。";
	}
	//點擊第五章
	private: System::Void picture_chap5_Click(System::Object^  sender, System::EventArgs^  e) {
		chapter = 5;
		picture_chap1->Visible = false;
		picture_chap2->Visible = false;
		picture_chap3->Visible = false;
		picture_chap4->Visible = false;
		picture_chap5->Visible = false;
		label_end->Visible = false;
		label_story->Visible = true;
		button_nextPage->Visible = true;
		this->BackColor = System::Drawing::Color::Black;

		label_story->Text = "看著眼前的龐然大物，他露出疲憊的笑容。";
		label_title->Text = "下地獄去吧";
		pageNumber = 0;
		storyLines[0] = "\n「你就是那群紅色玻璃渣的首領吧？」";
		storyLines[1] = "\n王以震耳欲聾的吼叫作為回應。";
		storyLines[2] = "\n\n時間所剩不多，子彈即將用罄，體力幾乎見底。";
		storyLines[3] = "\n\n但這一切阻擋不了他眼中熊熊的烈火。";
	}
	//結局按鈕
	private: System::Void label_end_Click(System::Object^  sender, System::EventArgs^  e) {
		chapter = 6;
		picture_chap1->Visible = false;
		picture_chap2->Visible = false;
		picture_chap3->Visible = false;
		picture_chap4->Visible = false;
		picture_chap5->Visible = false;
		label_end->Visible = false;
		label_story->Visible = true;
		button_nextPage->Visible = true;
		this->BackColor = System::Drawing::Color::Black;

		label_story->Text = "終於來到旅途的終點。";
		label_title->Text = "你將成為新的王";
		pageNumber = 0;
		storyLines[0] = "\n疲累不堪，他不禁跪坐在地上，雙手顫抖。";
		storyLines[1] = "\n\n『你將成為新的王』";
		storyLines[2] = "\n\n紅色的水晶幾乎把他整個人吞噬，那煩人的耳語比以往還要大聲。";
		storyLines[3] = "\n離他的目標只差一步，怪物將永遠從地表上消失。";
		storyLines[4] = "\n\n『你將成為我』";
		storyLines[5] = "\n\n只差一點點...他緩緩把槍抵住太陽穴。";
	}
	//殺死最後一隻怪物
	private: System::Void button_kill_Click(System::Object^  sender, System::EventArgs^  e) {
		label_title->Visible = false;
		button_kill->Visible = false;
		button_spare->Visible = false;
		button_nextPage->Visible = true;
		label_story->Visible = true;
		chapter = 7;
		label_story->Text = "或許這是最好的結局吧。";
		pageNumber = 0;
		storyLines[0] = "\n\n槍響過後，無人的城市非常的寧靜。";
		storyLines[1] = "\n遠處白雲翻騰，夕陽染紅天空，萬物祥和。";
		storyLines[2] = "\n\n許久，一隻麻雀停在了他的屍體上。";
		storyLines[3] = "\n\n\n他的臉上依舊掛著最後一抹微笑。";
	}
	//赦免最後一隻怪物
	private: System::Void button_spare_Click(System::Object^  sender, System::EventArgs^  e) {
		label_title->Visible = false;
		button_kill->Visible = false;
		button_spare->Visible = false;
		button_nextPage->Visible = true;
		label_story->Visible = true;
		chapter = 8;
		label_story->Text = "終究還是沒有那個勇氣。";
		pageNumber = 0;
		storyLines[0] = "\n\n他將槍一扔，任由水晶爬滿他的身軀。";
		storyLines[1] = "\n當他再度睜開眼睛，鮮紅色的雙眼毫無感情。";
		storyLines[2] = "\n\n他成為唯一的、最後的怪物。";
		storyLines[3] = "\n\n\n他仍在這烏煙瘴氣的世界行走著，即使烈火焚身。";
	}
	//回到章節選擇
	private: System::Void button_menu_Click(System::Object^  sender, System::EventArgs^  e) {
		timer_checkDead->Stop();
		picture_superHot->Visible = false;
		picture_superHot->Enabled = false;
		label_title->Visible = false;
		button_menu->Visible = false;
		button_menu->Enabled = false;
		picture_chap1->Visible = true;
		picture_chap2->Visible = true;
		picture_chap3->Visible = true;
		picture_chap4->Visible = true;
		picture_chap5->Visible = true;
		label_end->Visible = true;
		score = 0;
		blood = 10;
		this->Player_image->Location = System::Drawing::Point(500, 250);
	}
};
}
