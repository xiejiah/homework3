#pragma once
#include<string>
#include<limits.h>
#include<queue>
#include <msclr\marshal_cppstd.h>   //用于托管与非托管代码间数据类型的转换
#include"graph.h"
namespace 课设项目 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;


	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(1106, 730);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"退出程序";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(754, 774);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(1062, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 35);
			this->label1->TabIndex = 2;
			this->label1->Text = L"公交出行查询程序";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(773, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"左图中序号所代表的实际地点：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(774, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 336);
			this->label3->TabIndex = 4;
			this->label3->Text = L"1.沈阳方特欢乐世界\r\n\r\n2. 沈阳航天航空大学\r\n\r\n3. 辽宁大学（蒲河校区）\r\n\r\n4. 东北大学（沈河校区）\r\n\r\n5. 北部战区总医院\r\n\r\n6. 沈"
				L"阳市第七中学\r\n\r\n7. 沈阳市第二十七中学\r\n\r\n8. 市图书馆\r\n\r\n9. 中山公园\r\n\r\n10. 太原街\r\n\r\n11. 沈阳市第五人民医院";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1046, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 336);
			this->label4->TabIndex = 5;
			this->label4->Text = L"12. 辽宁体育馆\r\n\r\n13. 世纪大厦\r\n\r\n14. 八一公园\r\n\r\n15. 沈阳故宫博物院\r\n\r\n16. 辽宁技师学院\r\n\r\n17. 北陵公园\r\n\r\n18."
				L" 丁香湖\r\n\r\n19. 皇姑英雄公园\r\n\r\n20. 青年公园\r\n\r\n21. 东北大学（浑南校区）\r\n\r\n22. 沈阳建筑大学";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(1328, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 336);
			this->label5->TabIndex = 6;
			this->label5->Text = L"23. 浑河森林公园\r\n\r\n24. 中国医科大学（沈北校区）\r\n\r\n25. 沈阳北站\r\n\r\n26. 沈阳站\r\n\r\n27. 银河广场\r\n\r\n28. 沈阳怪坡风景区\r"
				L"\n\r\n29. 沈阳国家森林公园\r\n\r\n30. 棋盘山风景区\r\n\r\n31. 沈阳桃仙国际机场\r\n\r\n32. 铁西区森林公园\r\n\r\n33. 中国工业博物馆";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1012, 37);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBox1->Location = System::Drawing::Point(977, 578);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 31);
			this->textBox1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(856, 581);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"起始地点：";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(1270, 581);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 21);
			this->label7->TabIndex = 10;
			this->label7->Text = L"目标地点：";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBox2->Location = System::Drawing::Point(1391, 578);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 31);
			this->textBox2->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(1345, 649);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 42);
			this->button2->TabIndex = 12;
			this->button2->Text = L"费用最优";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(860, 649);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 42);
			this->button3->TabIndex = 13;
			this->button3->Text = L"时间最优";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(777, 569);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1519, 746);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1568, 795);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"公交出行查询程序  V1.0（by 谢佳何）";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("是否退出公交出行查询程序？", "公交出行查询程序", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk);
		if (result == System::Windows::Forms::DialogResult::Yes)
			MyForm::Close();
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("本程序运用C++ CLR控件+托管库实现可视化\r\n"
			"为沈阳航空航天大学21级大二本科生的数据结构课设作业\r\n"
			"作者：谢佳何\r\n"
			"QQ：2640962260\r\n"
			"侵权必究！\r\n\n"
			L"Copyright © 2022 XJH Incorporated. All rights reserved.",
			"软件信息", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"点击“时间最优”按钮可计算两地公交用时最短的路线并按顺序显示途径的地点（路线可能不唯一）\r\n\n"
			"原理：Dijkstra最小生成树算法并记录所遍历的前驱节点，然后对前驱节点进行DFS（深度优先遍历）\r\n\n"
			"点击“费用最优”按钮可计算两地公交费用最少的路线（途径站点最少）并按顺序显示途径的地点（路线可能不唯一）\r\n\n"
			"原理：BFS（广度优先遍历）并记录所遍历的前驱节点，然后对前驱节点进行DFS（深度优先遍历）\r\n\n\n"
			L"※ 注：请在文本框内输入数字序号！",
			"使用说明", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "1");
		else if (textBox1->Text == "2");
		else if (textBox1->Text == "3");
		else if (textBox1->Text == "4");
		else if (textBox1->Text == "5");
		else if (textBox1->Text == "6");
		else if (textBox1->Text == "7");
		else if (textBox1->Text == "8");
		else if (textBox1->Text == "9");
		else if (textBox1->Text == "10");
		else if (textBox1->Text == "11");
		else if (textBox1->Text == "12");
		else if (textBox1->Text == "13");
		else if (textBox1->Text == "14");
		else if (textBox1->Text == "15");
		else if (textBox1->Text == "16");
		else if (textBox1->Text == "17");
		else if (textBox1->Text == "18");
		else if (textBox1->Text == "19");
		else if (textBox1->Text == "20");
		else if (textBox1->Text == "21");
		else if (textBox1->Text == "22");
		else if (textBox1->Text == "23");
		else if (textBox1->Text == "24");
		else if (textBox1->Text == "25");
		else if (textBox1->Text == "26");
		else if (textBox1->Text == "27");
		else if (textBox1->Text == "27");
		else if (textBox1->Text == "29");
		else if (textBox1->Text == "30");
		else if (textBox1->Text == "31");
		else if (textBox1->Text == "32");
		else if (textBox1->Text == "33");
		else {
			textBox1->Text = "";
			if (textBox2->Text == "1");
			else if (textBox2->Text == "2");
			else if (textBox2->Text == "3");
			else if (textBox2->Text == "4");
			else if (textBox2->Text == "5");
			else if (textBox2->Text == "6");
			else if (textBox2->Text == "7");
			else if (textBox2->Text == "8");
			else if (textBox2->Text == "9");
			else if (textBox2->Text == "10");
			else if (textBox2->Text == "11");
			else if (textBox2->Text == "12");
			else if (textBox2->Text == "13");
			else if (textBox2->Text == "14");
			else if (textBox2->Text == "15");
			else if (textBox2->Text == "16");
			else if (textBox2->Text == "17");
			else if (textBox2->Text == "18");
			else if (textBox2->Text == "19");
			else if (textBox2->Text == "20");
			else if (textBox2->Text == "21");
			else if (textBox2->Text == "22");
			else if (textBox2->Text == "23");
			else if (textBox2->Text == "24");
			else if (textBox2->Text == "25");
			else if (textBox2->Text == "26");
			else if (textBox2->Text == "27");
			else if (textBox2->Text == "27");
			else if (textBox2->Text == "29");
			else if (textBox2->Text == "30");
			else if (textBox2->Text == "31");
			else if (textBox2->Text == "32");
			else if (textBox2->Text == "33");
			else  textBox2->Text = "";
			MessageBox::Show("输入错误,请输入正确的序号！", "错误", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		if (textBox2->Text == "1");
		else if (textBox2->Text == "2");
		else if (textBox2->Text == "3");
		else if (textBox2->Text == "4");
		else if (textBox2->Text == "5");
		else if (textBox2->Text == "6");
		else if (textBox2->Text == "7");
		else if (textBox2->Text == "8");
		else if (textBox2->Text == "9");
		else if (textBox2->Text == "10");
		else if (textBox2->Text == "11");
		else if (textBox2->Text == "12");
		else if (textBox2->Text == "13");
		else if (textBox2->Text == "14");
		else if (textBox2->Text == "15");
		else if (textBox2->Text == "16");
		else if (textBox2->Text == "17");
		else if (textBox2->Text == "18");
		else if (textBox2->Text == "19");
		else if (textBox2->Text == "20");
		else if (textBox2->Text == "21");
		else if (textBox2->Text == "22");
		else if (textBox2->Text == "23");
		else if (textBox2->Text == "24");
		else if (textBox2->Text == "25");
		else if (textBox2->Text == "26");
		else if (textBox2->Text == "27");
		else if (textBox2->Text == "28");
		else if (textBox2->Text == "29");
		else if (textBox2->Text == "30");
		else if (textBox2->Text == "31");
		else if (textBox2->Text == "32");
		else if (textBox2->Text == "33");
		else {
			textBox2->Text = "";
			MessageBox::Show("输入错误,请输入正确的序号！", "错误", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		class graph g;
		int adj1 = Convert::ToInt16(textBox1->Text);   //16位字节整数数值范围：-32768 到 32767
		int adj2 = Convert::ToInt16(textBox2->Text);
		g.Dijkstra(adj1);
		std::string path=g.DFS(adj1, adj2);
		String^ Path = msclr::interop::marshal_as<String^>(path);   //marshal_as库是一个托管与非托管代码间数据类型的转换模板库
		MessageBox::Show(Path + "\n\n总路程长度为：" + Convert::ToString(g.distance[adj2]) + " Km", "时间最优", MessageBoxButtons::OK, MessageBoxIcon::Information);
		g.Clear();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "1");
		else if (textBox1->Text == "2");
		else if (textBox1->Text == "3");
		else if (textBox1->Text == "4");
		else if (textBox1->Text == "5");
		else if (textBox1->Text == "6");
		else if (textBox1->Text == "7");
		else if (textBox1->Text == "8");
		else if (textBox1->Text == "9");
		else if (textBox1->Text == "10");
		else if (textBox1->Text == "11");
		else if (textBox1->Text == "12");
		else if (textBox1->Text == "13");
		else if (textBox1->Text == "14");
		else if (textBox1->Text == "15");
		else if (textBox1->Text == "16");
		else if (textBox1->Text == "17");
		else if (textBox1->Text == "18");
		else if (textBox1->Text == "19");
		else if (textBox1->Text == "20");
		else if (textBox1->Text == "21");
		else if (textBox1->Text == "22");
		else if (textBox1->Text == "23");
		else if (textBox1->Text == "24");
		else if (textBox1->Text == "25");
		else if (textBox1->Text == "26");
		else if (textBox1->Text == "27");
		else if (textBox1->Text == "28");
		else if (textBox1->Text == "29");
		else if (textBox1->Text == "30");
		else if (textBox1->Text == "31");
		else if (textBox1->Text == "32");
		else if (textBox1->Text == "33");
		else {
			textBox1->Text = "";
			if (textBox2->Text == "1");
			else if (textBox2->Text == "2");
			else if (textBox2->Text == "3");
			else if (textBox2->Text == "4");
			else if (textBox2->Text == "5");
			else if (textBox2->Text == "6");
			else if (textBox2->Text == "7");
			else if (textBox2->Text == "8");
			else if (textBox2->Text == "9");
			else if (textBox2->Text == "10");
			else if (textBox2->Text == "11");
			else if (textBox2->Text == "12");
			else if (textBox2->Text == "13");
			else if (textBox2->Text == "14");
			else if (textBox2->Text == "15");
			else if (textBox2->Text == "16");
			else if (textBox2->Text == "17");
			else if (textBox2->Text == "18");
			else if (textBox2->Text == "19");
			else if (textBox2->Text == "20");
			else if (textBox2->Text == "21");
			else if (textBox2->Text == "22");
			else if (textBox2->Text == "23");
			else if (textBox2->Text == "24");
			else if (textBox2->Text == "25");
			else if (textBox2->Text == "26");
			else if (textBox2->Text == "27");
			else if (textBox2->Text == "28");
			else if (textBox2->Text == "29");
			else if (textBox2->Text == "30");
			else if (textBox2->Text == "31");
			else if (textBox2->Text == "32");
			else if (textBox2->Text == "33");
			else  textBox2->Text = "";
			MessageBox::Show("输入错误,请输入正确的序号！", "错误", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		if (textBox2->Text == "1");
		else if (textBox2->Text == "2");
		else if (textBox2->Text == "3");
		else if (textBox2->Text == "4");
		else if (textBox2->Text == "5");
		else if (textBox2->Text == "6");
		else if (textBox2->Text == "7");
		else if (textBox2->Text == "8");
		else if (textBox2->Text == "9");
		else if (textBox2->Text == "10");
		else if (textBox2->Text == "11");
		else if (textBox2->Text == "12");
		else if (textBox2->Text == "13");
		else if (textBox2->Text == "14");
		else if (textBox2->Text == "15");
		else if (textBox2->Text == "16");
		else if (textBox2->Text == "17");
		else if (textBox2->Text == "18");
		else if (textBox2->Text == "19");
		else if (textBox2->Text == "20");
		else if (textBox2->Text == "21");
		else if (textBox2->Text == "22");
		else if (textBox2->Text == "23");
		else if (textBox2->Text == "24");
		else if (textBox2->Text == "25");
		else if (textBox2->Text == "26");
		else if (textBox2->Text == "27");
		else if (textBox2->Text == "28");
		else if (textBox2->Text == "29");
		else if (textBox2->Text == "30");
		else if (textBox2->Text == "31");
		else if (textBox2->Text == "32");
		else if (textBox2->Text == "33");
		else {
			textBox2->Text = "";
			MessageBox::Show("输入错误,请输入正确的序号！", "错误", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		class graph g;
		int adj1 = Convert::ToInt16(textBox1->Text);   //16位字节整数数值范围：-32768 到 32767
		int adj2 = Convert::ToInt16(textBox2->Text);
		g.BFS(adj1, adj2);
		std::string path = g.DFS(adj1, adj2);
		String^ Path = msclr::interop::marshal_as<String^>(path);   //marshal_as库是一个托管与非托管代码间数据类型的转换模板库
		MessageBox::Show(Path, "费用最优", MessageBoxButtons::OK, MessageBoxIcon::Information);
		g.Clear();
	}
};
}