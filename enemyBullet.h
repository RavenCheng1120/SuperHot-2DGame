#pragma once
#include <math.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms;

namespace SuperHot {

	/// <summary>
	/// enemyBullet ���K�n
	/// </summary>
	public ref class enemyBullet :  public System::ComponentModel::Component
	{
	public:
		enemyBullet(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}
		enemyBullet(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Windows.Forms ���O�զX�]�p�u��䴩�һݪ��{���X
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~enemyBullet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer_shoot;
	public: int directionX;		//�l�u�e�i��V
			int directionY;		//�l�u�e�i��V
			float vectorLength;	//�l�u����normalize��
			float dx;			//�l�u���ʼƭ�
			float dy;			//�l�u���ʼƭ�
			int slowSpeedX;
			int slowSpeedY;
			int normalSpeedX;
			int normalSpeedY;
			int bullet_left;	//�l�ux�b��m
			int bullet_top;		//�l�uy�b��m
			System::Windows::Forms::PictureBox^ Bullet = gcnew System::Windows::Forms::PictureBox;
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
			this->timer_shoot = (gcnew System::Windows::Forms::Timer(this->components));
			// 
			// timer_shoot
			// 
			this->timer_shoot->Enabled = true;
			this->timer_shoot->Interval = 16;
			this->timer_shoot->Tick += gcnew System::EventHandler(this, &enemyBullet::timer_shoot_Tick);

		}
#pragma endregion
	public: System::Void make_bullet(Form^ form) {
		Bullet->BackColor = System::Drawing::Color::Red;
		Bullet->Name = L"picture_bullet";
		Bullet->Size = System::Drawing::Size(10, 10);
		Bullet->TabStop = false;
		Bullet->Location = Point(bullet_left, bullet_top);
		Bullet->BringToFront();
		Bullet->Tag = "EnemyBullet";
		form->Controls->Add(Bullet);

		directionX = directionX - bullet_left;
		directionY = directionY - bullet_top;
		vectorLength = sqrt(directionX* directionX + directionY* directionY);
		dx = directionX / vectorLength;
		dy = directionY / vectorLength;
		slowSpeedX = dx * 5;
		slowSpeedY = dy * 5;
		dx = dx * 20;
		dy = dy * 20;
		normalSpeedX = dx;
		normalSpeedY = dy;

		timer_shoot->Start();
	}
	private: System::Void timer_shoot_Tick(System::Object^  sender, System::EventArgs^  e) {
		bullet_left += dx;
		bullet_top += dy;
		Bullet->Location = Point(bullet_left, bullet_top);	//��s�l�u��m
															//�I����ɴN����
		if (bullet_left < 5 || bullet_left > 1025 || bullet_top < 5 || bullet_top > 640) {
			timer_shoot->Stop();
			delete timer_shoot;
			delete Bullet;
		}
	}
	};
}
