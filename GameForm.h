#pragma once
#include "bullet.h"
#include "enemyBullet.h"
#include <cstdlib>
#include <time.h>

namespace SuperHot {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// GameForm 的摘要
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
			loadHighest();
			playerHeight = Player_image->Height;
			playerWidth = Player_image->Width;
			srand(time(NULL));
		}

		void loadHighest(void) {
			String^ fileName = "record.txt";
			try {
				StreamReader^ din = File::OpenText(fileName);
				String^ str;

				while ((str = din->ReadLine()) != nullptr) {
					highest = Int32::Parse(str);
				}
				din->Close();
				delete str;
			}
			catch (Exception^ e) {
				if (dynamic_cast<FileNotFoundException^>(e))
					Console::WriteLine("file '{0}' not found", fileName);
				else
					Console::WriteLine("problem reading file '{0}'", fileName);
			}
			delete fileName;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Player_image;

	private: System::Windows::Forms::Timer^  timer_movement;
	private: System::Windows::Forms::Label^  ScoreLabel;
	private: System::Windows::Forms::Label^  Amo_count;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Timer^  timer_enemy;

	private: System::Windows::Forms::Timer^  timer_blood;
	private: System::Windows::Forms::PictureBox^  bloodImg;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer_checkDead;
	private: System::Windows::Forms::Label^  label_corner;


	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->Player_image = (gcnew System::Windows::Forms::PictureBox());
			this->timer_movement = (gcnew System::Windows::Forms::Timer(this->components));
			this->ScoreLabel = (gcnew System::Windows::Forms::Label());
			this->Amo_count = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer_enemy = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_blood = (gcnew System::Windows::Forms::Timer(this->components));
			this->bloodImg = (gcnew System::Windows::Forms::PictureBox());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer_checkDead = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_corner = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bloodImg))->BeginInit();
			this->SuspendLayout();
			// 
			// Player_image
			// 
			this->Player_image->BackColor = System::Drawing::Color::Transparent;
			this->Player_image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player_image.BackgroundImage")));
			this->Player_image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Player_image->Location = System::Drawing::Point(1056, 544);
			this->Player_image->Name = L"Player_image";
			this->Player_image->Size = System::Drawing::Size(100, 100);
			this->Player_image->TabIndex = 0;
			this->Player_image->TabStop = false;
			// 
			// timer_movement
			// 
			this->timer_movement->Enabled = true;
			this->timer_movement->Interval = 20;
			this->timer_movement->Tick += gcnew System::EventHandler(this, &GameForm::timer_movement_Tick);
			// 
			// ScoreLabel
			// 
			this->ScoreLabel->AutoSize = true;
			this->ScoreLabel->BackColor = System::Drawing::Color::Transparent;
			this->ScoreLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ScoreLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ScoreLabel->Location = System::Drawing::Point(672, 53);
			this->ScoreLabel->Name = L"ScoreLabel";
			this->ScoreLabel->Size = System::Drawing::Size(123, 40);
			this->ScoreLabel->TabIndex = 4;
			this->ScoreLabel->Text = L"得分:  0";
			// 
			// Amo_count
			// 
			this->Amo_count->AutoSize = true;
			this->Amo_count->BackColor = System::Drawing::Color::Transparent;
			this->Amo_count->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Amo_count->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Amo_count->Location = System::Drawing::Point(409, 53);
			this->Amo_count->Name = L"Amo_count";
			this->Amo_count->Size = System::Drawing::Size(206, 40);
			this->Amo_count->TabIndex = 5;
			this->Amo_count->Text = L"子彈數量:  50";
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
			this->timer_enemy->Enabled = true;
			this->timer_enemy->Interval = 800;
			this->timer_enemy->Tick += gcnew System::EventHandler(this, &GameForm::timer_enemy_Tick);
			// 
			// timer_blood
			// 
			this->timer_blood->Interval = 1500;
			this->timer_blood->Tick += gcnew System::EventHandler(this, &GameForm::timer_blood_Tick);
			// 
			// bloodImg
			// 
			this->bloodImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bloodImg.BackgroundImage")));
			this->bloodImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bloodImg->Location = System::Drawing::Point(65, 33);
			this->bloodImg->Name = L"bloodImg";
			this->bloodImg->Size = System::Drawing::Size(280, 70);
			this->bloodImg->TabIndex = 6;
			this->bloodImg->TabStop = false;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(766, 480);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(674, 142);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Game Over";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(882, 697);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 81);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Score:";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(893, 841);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 81);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Best:";
			this->label4->Visible = false;
			// 
			// timer_checkDead
			// 
			this->timer_checkDead->Interval = 20;
			this->timer_checkDead->Tick += gcnew System::EventHandler(this, &GameForm::timer_checkDead_Tick_1);
			// 
			// label_corner
			// 
			this->label_corner->AutoSize = true;
			this->label_corner->BackColor = System::Drawing::Color::Transparent;
			this->label_corner->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_corner->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_corner->Location = System::Drawing::Point(1989, 1280);
			this->label_corner->Name = L"label_corner";
			this->label_corner->Size = System::Drawing::Size(273, 40);
			this->label_corner->TabIndex = 13;
			this->label_corner->Text = L"點我開關作弊模式";
			this->label_corner->Click += gcnew System::EventHandler(this, &GameForm::label_corner_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(2274, 1329);
			this->Controls->Add(this->label_corner);
			this->Controls->Add(this->Player_image);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bloodImg);
			this->Controls->Add(this->Amo_count);
			this->Controls->Add(this->ScoreLabel);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Super Hot";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bloodImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Boolean goleft;
		Boolean goright;
		Boolean goup;
		Boolean godown;
		int temp_score = 0;		//得分動畫用的變數
		int highest = 0;		//最高分
		bool hurt = true;		//是否會受到傷害
		int bulletAdd = 10;		//倒數，子彈包出現
		int blood = 10;			//血量
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
		int amo = 50;			//子彈數
		int score = 0;			//得分
		int enemy_count = 0;	//敵人數量
		Boolean cheat = false;
		List<bullet^>^ bulletList = gcnew List<bullet^>;
		List<enemyBullet^>^ enemyBulletList = gcnew List<enemyBullet^>;
		List<Control^>^ controlListB = gcnew List<Control^>;
		List<Control^>^ controlListE = gcnew List<Control^>;

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
			if(cheat == false)
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
			for each (bullet^ each_bullet in bulletList){
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
		if (godown == true && goright == true && Player_image->Location.X < (1040 - playerWidth) &&Player_image->Location.Y < (650 - playerHeight)) {
			Player_image->Location = Point(playerX + playerSpeedSlow , playerY + playerSpeedSlow);
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
		//this->Controls["bloodImg"]->BackgroundImage = imageList2->Images[blood];
		bloodImg->BackgroundImage = imageList2->Images[blood];
		Player_image->BringToFront();

		if (blood == 0) {
			score += amo;
			timer_checkDead->Enabled = true;
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
						score += 10;
						ScoreLabel->Text = "得分: " + score;
						enemy_count--;
					}
				}
			}
			//敵人移動
			if (x->Tag == "Enemy") {
				if (x->Bounds.IntersectsWith(Player_image->Bounds)) {	//撞上玩家
					if (blood != 0 && hurt == true && cheat == false) {
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
					if (blood != 0 && hurt == true && cheat == false) {
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
		if ((rand() % 480) % 50 == 0) {
			if (enemy_count < 5)
				make_enemy();
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
			if(cheat == false)
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
			if (x->Tag == "Enemy" && rand()%50>25) {
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
		switch (rand()%4)
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
	//檢查死亡
	private: System::Void timer_checkDead_Tick_1(System::Object^  sender, System::EventArgs^  e) {
		if (blood == 0) {
			for each(Control^ x in this->Controls) {
				if (x->Tag == "Enemy" || x->Tag == "EnemyBullet" || x->Tag == "Bulletbag")
					delete x;
			}
			delete ScoreLabel;
			delete Amo_count;
			delete bloodImg;
			delete Player_image;
			delete bulletList;
			delete enemyBulletList;
			delete controlListB;
			delete controlListE;
			label2->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			timer_movement->Stop();
			timer_enemy->Stop();

			//跑得分動畫
			if (temp_score < score) {
				temp_score += 5;
				if (temp_score > score) {
					temp_score -= (temp_score - score);
				}
				label3->Text = "Score: " + temp_score;

				//改變最高分
				if (score > highest) {
					label4->Text = "Best: " + temp_score;
					String^ fileName = "record.txt";
					FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
					StreamWriter^ sw = gcnew StreamWriter(fs);

					sw->WriteLine(score);
					sw->Close();
					delete fs;
					delete fileName;
				}
				else {
					label4->Text = "Best: " + highest;
				}
			}
		}
	}
	 //作弊模式開關
	private: System::Void label_corner_Click(System::Object^  sender, System::EventArgs^  e) {
		cheat = !(cheat);
		if (cheat == true)
			label_corner->ForeColor = System::Drawing::Color::Red;
		else
			label_corner->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
	}
};
}
