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
	/// enemyBullet 的摘要
	/// </summary>
	public ref class enemyBullet :  public System::ComponentModel::Component
	{
	public:
		enemyBullet(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}
		enemyBullet(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Windows.Forms 類別組合設計工具支援所需的程式碼
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~enemyBullet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer_shoot;
	public: int directionX;		//子彈前進方向
			int directionY;		//子彈前進方向
			float vectorLength;	//子彈移動normalize值
			float dx;			//子彈移動數值
			float dy;			//子彈移動數值
			int slowSpeedX;
			int slowSpeedY;
			int normalSpeedX;
			int normalSpeedY;
			int bullet_left;	//子彈x軸位置
			int bullet_top;		//子彈y軸位置
			System::Windows::Forms::PictureBox^ Bullet = gcnew System::Windows::Forms::PictureBox;
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
		Bullet->Location = Point(bullet_left, bullet_top);	//更新子彈位置
															//碰到邊界就消失
		if (bullet_left < 5 || bullet_left > 1025 || bullet_top < 5 || bullet_top > 640) {
			timer_shoot->Stop();
			delete timer_shoot;
			delete Bullet;
		}
	}
	};
}
