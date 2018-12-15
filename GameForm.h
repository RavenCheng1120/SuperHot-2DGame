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
	/// GameForm ���K�n
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
			playerHeight = Player_image->Height;
			playerWidth = Player_image->Width;
			srand(time(NULL));
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
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
		/// �]�p�u��һݪ��ܼơC
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
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
			this->Score->Font = (gcnew System::Drawing::Font(L"�s�ө���", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Score->Location = System::Drawing::Point(50, 39);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(138, 37);
			this->Score->TabIndex = 4;
			this->Score->Text = L"�o��:  0";
			// 
			// Amo_count
			// 
			this->Amo_count->AutoSize = true;
			this->Amo_count->BackColor = System::Drawing::Color::White;
			this->Amo_count->Font = (gcnew System::Drawing::Font(L"�s�ө���", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Amo_count->Location = System::Drawing::Point(50, 108);
			this->Amo_count->Name = L"Amo_count";
			this->Amo_count->Size = System::Drawing::Size(246, 37);
			this->Amo_count->TabIndex = 5;
			this->Amo_count->Text = L"�l�u�ƶq:  100";
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
			this->Text = L"���� : Super Hot";
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
		int playerSpeed = 13;	//�������ʳt��
		int playerSpeedSlow = 10;//�צV���ʳt��
		int enemySpeed = 5;		//�ĤH���ʳt��
		int mouseX;				//�ƹ�x�y�Ц�m
		int mouseY;				//�ƹ�y�y�Ц�m
		int playerFacing = 0;	//���V�_��(0)
		int playerX;			//���a�bx�y�Ц�m
		int playerY;			//���a�by�y�Ц�m
		int playerHeight;		//���a�Ϲ�����
		int playerWidth;		//���a�Ϲ��e��
		int amo = 100;			//�l�u��
		int score = 0;			//�o��
		int enemy_count = 0;	//�ĤH�ƶq
		List<bullet^>^ bulletList = gcnew List<bullet^>;

	//����:�W�U���k
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
	//��}����:�W�U���k�A�ť���g��
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
		Amo_count->Text = "�l�u�ƶq:" + amo;
	}

	//���Ⲿ�ʪ�timer
	private: System::Void timer_movement_Tick(System::Object^  sender, System::EventArgs^  e) {
		playerX = Player_image->Location.X;
		playerY = Player_image->Location.Y;
		//���ʮɡASLOW MOTION�C�ʧ@�Ҧ�
		if (goleft == false && goright == false && goup == false && godown == false) {
			enemySpeed = 1;
			for each (bullet^ each_bullet in bulletList){
				each_bullet->speed = 3;
				each_bullet->speedSlow = 1;
			}
		}
		else {
			enemySpeed = 5;
			for each (bullet^ each_bullet in bulletList) {
				each_bullet->speed = 20;
				each_bullet->speedSlow = 18;
			}
		}

		//�W�U���k
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

		//�פ�V����
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

		//���ܨ���Ϲ��A�@�K�Ӥ��A��imageList�x�s8�i�Ϥ�
		float slope = 100.0;
		if (mouseX != playerX)
			slope = (float)(mouseY - playerY - 0.5* playerHeight) / (float)(mouseX - playerX - 0.5* playerWidth);
		
		if (slope < -2.5 && mouseY < playerY + 0.5* playerHeight) {
			Player_image->BackgroundImage = imageList1->Images[0];	//���W��
			playerFacing = 0;
		}
		else if (slope < -0.3 && slope > -2.5 && mouseX > playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[1];	//�k�W��
			playerFacing = 1;
		}
		else if (slope < 0.3 && slope > -0.3 && mouseX > playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[2];	//���k��
			playerFacing = 2;
		}
		else if (slope < 2.5 && slope > 0.3 && mouseX > playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[3];	//�k�U��
			playerFacing = 3;
		}
		else if (slope > 2.5 &&  mouseY > playerY + 0.5* playerHeight) {
			Player_image->BackgroundImage = imageList1->Images[4];	//���U��
			playerFacing = 4;
		}
		else if (slope < -0.3 && slope > -2.5 &&  mouseY > playerY + 0.5* playerHeight) {
			Player_image->BackgroundImage = imageList1->Images[5];	//���U��
			playerFacing = 5;
		}
		else if (slope < 0.3 && slope > -0.3 && mouseX < playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[6];	//������
			playerFacing = 6;
		}
		else if (slope < 2.5 && slope > 0.3 && mouseX < playerX + 0.5* playerWidth) {
			Player_image->BackgroundImage = imageList1->Images[7];	//���W��
			playerFacing = 7;
		}
	}

	//�����ƹ�����m
	private: System::Void GameForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseX = e->Location.X;
		mouseY = e->Location.Y;
	}

	//���U�ƹ�����A�o�g�l�u
	private: System::Void GameForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (amo > 0) {
			amo--;
			shoot(playerFacing, this);
		}
		Amo_count->Text = "�l�u�ƶq: " + amo;
	}
	//�o�g�l�u
	private: System::Void shoot(int facing, Form^ form) {
		bullet^ one_bullet = gcnew bullet;
		one_bullet->direction = facing;
		one_bullet->bullet_left = playerX + 0.5*playerWidth;
		one_bullet->bullet_top = playerY + 0.5*playerHeight;
		one_bullet->make_bullet(form);
		bulletList->Add(one_bullet);
	}
	//�ĤH����
	private: System::Void timer_enemy_Tick(System::Object^  sender, System::EventArgs^  e) {
		for each (Control^ x in this->Controls) {
			//�p�G�ĤH�M�l�u��Ĳ
			for each (Control^ y in this->Controls) {
				if (y->Tag == "Bullet" && x->Tag == "Enemy") {
					if (x->Bounds.IntersectsWith(y->Bounds)) {
						delete y;	//�l�u����
						delete x;	//�ĤH����
						score += 10;
						Score->Text = "�o��: " + score;
						enemy_count--;
					}
				}
			}
			//�ĤH����
			if (x->Tag == "Enemy") {
				if (x->Bounds.IntersectsWith(Player_image->Bounds)) {	//���W���a
					score -= 5;
					Score->Text = "�o��: " + score;
				}
				//�¦V���Ⲿ��
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
		//�ĤH�H������
		if((rand() % 400) % 40 == 0) {
			if(enemy_count < 5)
				make_enemy();
		}
	}
	//�ĤH����
	private: System::Void make_enemy() {
		enemy_count++;
		System::Windows::Forms::PictureBox^ enemies = gcnew  System::Windows::Forms::PictureBox;
		enemies->Tag = "Enemy";
		enemies->Size = System::Drawing::Size(50, 50);
		enemies->BackColor = System::Drawing::Color::Firebrick;
		enemies->TabStop = false;
		//�H�������I�A�b�����~��
		switch (rand()%4)
		{
		case 0:
			enemies->Location = System::Drawing::Point(rand() % 1000, 0);	//�W��
			break;
		case 1:
			enemies->Location = System::Drawing::Point(rand() % 1000, 600);	//�U��
			break;
		case 2:
			enemies->Location = System::Drawing::Point(0, rand() % 600);	//����
			break;
		case 3:
			enemies->Location = System::Drawing::Point(1000, rand() % 600);	//�k��
			break;
		default:
			break;
		}
		this->Controls->Add(enemies);
	}
};
}
