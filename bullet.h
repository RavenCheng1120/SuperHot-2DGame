#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms;

namespace SuperHot {

	/// <summary>
	/// bullet ���K�n
	/// </summary>
	public ref class bullet :  public System::ComponentModel::Component
	{

	public: int direction;		//�l�u�e�i��V
			int speed = 20;		//�l�u�t��
			int speedSlow = 18;	//�צV�l�u�t��
			int bullet_left;	//�l�ux�b��m
			int bullet_top;		//�l�uy�b��m
			System::Windows::Forms::PictureBox^ Bullet = gcnew System::Windows::Forms::PictureBox;
			System::Windows::Forms::Timer^ bullet_timer = gcnew System::Windows::Forms::Timer;

	public:
		bullet(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}
		bullet(System::ComponentModel::IContainer ^container)
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
		~bullet()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion
	//�]�w�n�l�u��pictureBox��timer
	public: System::Void make_bullet(Form^ form) {
		Bullet->BackColor = System::Drawing::Color::White;
		Bullet->Name = L"picture_bullet";
		Bullet->Size = System::Drawing::Size(10, 10);
		Bullet->TabStop = false;
		Bullet->Location = Point(bullet_left, bullet_top);
		Bullet->BringToFront();
		Bullet->Tag = "Bullet";
		form->Controls->Add(Bullet);
		
		bullet_timer->Enabled = true;
		bullet_timer->Interval = speed*0.8;
		bullet_timer->Tick += gcnew System::EventHandler(this, &bullet::tm_tick);
		bullet_timer->Start();
	}

	//�C���l�u���|���ͤ@��timer�A���l�u�H�ۮɶ�����
	public: System::Void tm_tick(System::Object^  sender, System::EventArgs^  e) {
		if (direction == 0) {
			bullet_top -= speed;
		}
		if (direction == 1) {
			bullet_top -= speedSlow;
			bullet_left += speedSlow;
		}
		if (direction == 2) {
			bullet_left += speed;
		}
		if (direction == 3) {
			bullet_top += speedSlow;
			bullet_left += speedSlow;
		}
		if (direction == 4) {
			bullet_top += speed;
		}
		if (direction == 5) {
			bullet_top += speedSlow;
			bullet_left -= speedSlow;
		}
		if (direction == 6) {
			bullet_left -= speed;
		}
		if (direction == 7) {
			bullet_top -= speedSlow;
			bullet_left -= speedSlow;
		}
		Bullet->Location = Point(bullet_left, bullet_top);	//��s�l�u��m
		//�I����ɴN����
		if (bullet_left < 5 || bullet_left > 1025 || bullet_top < 5 || bullet_top > 640) {
			bullet_timer->Stop();
			delete bullet_timer;
			delete Bullet;
		}
	}
};
}
