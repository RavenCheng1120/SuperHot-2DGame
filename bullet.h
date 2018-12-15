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
	/// bullet 的摘要
	/// </summary>
	public ref class bullet :  public System::ComponentModel::Component
	{

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
			System::Windows::Forms::Timer^ bullet_timer = gcnew System::Windows::Forms::Timer;

	public:
		bullet(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}
		bullet(System::ComponentModel::IContainer ^container)
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
		~bullet()
		{
			if (components)
			{
				delete components;
			}
		}

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
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion
	//設定好子彈的pictureBox跟timer
	public: System::Void make_bullet(Form^ form) {
		Bullet->BackColor = System::Drawing::Color::White;
		Bullet->Name = L"picture_bullet";
		Bullet->Size = System::Drawing::Size(10, 10);
		Bullet->TabStop = false;
		Bullet->Location = Point(bullet_left, bullet_top);
		Bullet->BringToFront();
		Bullet->Tag = "Bullet";
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

		bullet_timer->Enabled = true;
		bullet_timer->Interval = 16;
		bullet_timer->Tick += gcnew System::EventHandler(this, &bullet::tm_tick);
		bullet_timer->Start();
	}

	//每顆子彈都會產生一個timer，讓子彈隨著時間移動
	public: System::Void tm_tick(System::Object^  sender, System::EventArgs^  e) {
		bullet_left += dx;
		bullet_top += dy;
		Bullet->Location = Point(bullet_left, bullet_top);	//更新子彈位置
		//碰到邊界就消失
		if (bullet_left < 5 || bullet_left > 1025 || bullet_top < 5 || bullet_top > 640) {
			bullet_timer->Stop();
			delete bullet_timer;
			delete Bullet;
		}
	}
};
}
