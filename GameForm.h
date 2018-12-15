#pragma once
#include "bullet.h"
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
			playerHeight = Player_image->Height;
			playerWidth = Player_image->Width;
			srand(time(NULL));
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
	private: System::Windows::Forms::Label^  label_corner;
	private: System::Windows::Forms::Timer^  timer_movement;
	private: System::Windows::Forms::Label^  Score;
	private: System::Windows::Forms::Label^  Amo_count;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Timer^  timer_enemy;

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
			this->label_corner = (gcnew System::Windows::Forms::Label());
			this->timer_movement = (gcnew System::Windows::Forms::Timer(this->components));
			this->Score = (gcnew System::Windows::Forms::Label());
			this->Amo_count = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer_enemy = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_image))->BeginInit();
			this->SuspendLayout();
			// 
			// Player_image
			// 
			this->Player_image->BackColor = System::Drawing::Color::White;
			this->Player_image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Player_image.BackgroundImage")));
			this->Player_image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Player_image->Location = System::Drawing::Point(1056, 544);
			this->Player_image->Name = L"Player_image";
			this->Player_image->Size = System::Drawing::Size(100, 100);
			this->Player_image->TabIndex = 0;
			this->Player_image->TabStop = false;
			// 
			// label_corner
			// 
			this->label_corner->AutoSize = true;
			this->label_corner->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_corner->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_corner->Location = System::Drawing::Point(2114, 1289);
			this->label_corner->Name = L"label_corner";
			this->label_corner->Size = System::Drawing::Size(154, 33);
			this->label_corner->TabIndex = 3;
			this->label_corner->Text = L"@SuperHot";
			// 
			// timer_movement
			// 
			this->timer_movement->Enabled = true;
			this->timer_movement->Interval = 20;
			this->timer_movement->Tick += gcnew System::EventHandler(this, &GameForm::timer_movement_Tick);
			// 
			// Score
			// 
			this->Score->AutoSize = true;
			this->Score->BackColor = System::Drawing::Color::White;
			this->Score->Font = (gcnew System::Drawing::Font(L"新細明體", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Score->Location = System::Drawing::Point(50, 39);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(138, 37);
			this->Score->TabIndex = 4;
			this->Score->Text = L"得分:  0";
			// 
			// Amo_count
			// 
			this->Amo_count->AutoSize = true;
			this->Amo_count->BackColor = System::Drawing::Color::White;
			this->Amo_count->Font = (gcnew System::Drawing::Font(L"新細明體", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Amo_count->Location = System::Drawing::Point(50, 108);
			this->Amo_count->Name = L"Amo_count";
			this->Amo_count->Size = System::Drawing::Size(246, 37);
			this->Amo_count->TabIndex = 5;
			this->Amo_count->Text = L"子彈數量:  100";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"up.png");
			this->imageList1->Images->SetKeyName(1, L"up_right.png");
			this->imageList1->Images->SetKeyName(2, L"right.png");
			this->imageList1->Images->SetKeyName(3, L"down_right.png");
			this->imageList1->Images->SetKeyName(4, L"down.png");
			this->imageList1->Images->SetKeyName(5, L"down_left.png");
			this->imageList1->Images->SetKeyName(6, L"left.png");
			this->imageList1->Images->SetKeyName(7, L"up_left.png");
			// 
			// timer_enemy
			// 
			this->timer_enemy->Enabled = true;
			this->timer_enemy->Interval = 20;
			this->timer_enemy->Tick += gcnew System::EventHandler(this, &GameForm::timer_enemy_Tick);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(2274, 1329);
			this->Controls->Add(this->Player_image);
			this->Controls->Add(this->Amo_count);
			this->Controls->Add(this->Score);
			this->Controls->Add(this->label_corner);
			this->DoubleBuffered = true;
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"熱浪 : Super Hot";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Player_image))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Boolean goleft;
		Boolean goright;
		Boolean goup;
		Boolean godown;
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
		int amo = 100;			//子彈數
		int score = 0;			//得分
		int enemy_count = 0;	//敵人數量
		List<bullet^>^ bulletList = gcnew List<bullet^>;

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
		if (e->KeyCode == Keys::Space && amo > 0) {
			amo--;
			shoot(playerFacing, this);
		}
		Amo_count->Text = "子彈數量:" + amo;
	}

	//角色移動的timer
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
		}
		else {
			enemySpeed = 5;
			for each (bullet^ each_bullet in bulletList) {
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
			shoot(playerFacing, this);
		}
		Amo_count->Text = "子彈數量: " + amo;
	}
	//發射子彈
	private: System::Void shoot(int facing, Form^ form) {
		bullet^ one_bullet = gcnew bullet;
		one_bullet->bullet_left = playerX + 0.5*playerWidth;
		one_bullet->bullet_top = playerY + 0.5*playerHeight;
		one_bullet->directionX = mouseX;
		one_bullet->directionY = mouseY;
		one_bullet->make_bullet(form);
		bulletList->Add(one_bullet);
	}
	//敵人移動
	private: System::Void timer_enemy_Tick(System::Object^  sender, System::EventArgs^  e) {
		for each (Control^ x in this->Controls) {
			//如果敵人和子彈接觸
			for each (Control^ y in this->Controls) {
				if (y->Tag == "Bullet" && x->Tag == "Enemy") {
					if (x->Bounds.IntersectsWith(y->Bounds)) {
						delete y;	//子彈消失
						delete x;	//敵人消失
						score += 10;
						Score->Text = "得分: " + score;
						enemy_count--;
					}
				}
			}
			//敵人移動
			if (x->Tag == "Enemy") {
				if (x->Bounds.IntersectsWith(Player_image->Bounds)) {	//撞上玩家
					score -= 5;
					Score->Text = "得分: " + score;
				}
				//朝向角色移動
				if (x->Left > playerX) {
					x->Location = Point(x->Left - enemySpeed, x->Top);
				}
				if (x->Left < playerX ) {
					x->Location = Point(x->Left + enemySpeed, x->Top);
				}
				if (x->Top > playerY) {
					x->Location = Point(x->Left, x->Top - enemySpeed);
				}
				if (x->Top < playerY) {
					x->Location = Point(x->Left, x->Top + enemySpeed);
				}
			}
		}
		//敵人隨機產生
		if((rand() % 400) % 40 == 0) {
			if(enemy_count < 5)
				make_enemy();
		}
		
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
};
}
