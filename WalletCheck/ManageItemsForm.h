/*----------ManageItemsForm.h----------*/

#pragma once

namespace WalletCheck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// アイテム管理のフォーム
	/// </summary>
	public ref class ManageItemsForm : public System::Windows::Forms::Form
	{
		private:
			String^ _itemname;
			String^ _keyname;




		public:
			ManageItemsForm(String^ itemname,String^ keyname)
			{
				InitializeComponent();
				_itemname = itemname;
				_keyname = keyname;
			}

		protected:
			~ManageItemsForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private:
			System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
			System::Windows::Forms::DataGridView^ data_grid;
			System::Windows::Forms::Button^ ok_button;
			System::Windows::Forms::Button^ cancel_button;

			System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			void InitializeComponent(void)
			{
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				this->data_grid = (gcnew System::Windows::Forms::DataGridView());
				this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ok_button = (gcnew System::Windows::Forms::Button());
				this->cancel_button = (gcnew System::Windows::Forms::Button());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
				this->SuspendLayout();
				// 
				// data_grid
				// 
				this->data_grid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->data_grid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
				this->data_grid->Location = System::Drawing::Point(0, 0);
				this->data_grid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->data_grid->Name = L"data_grid";
				this->data_grid->RowHeadersWidth = 51;
				this->data_grid->RowTemplate->Height = 24;
				this->data_grid->Size = System::Drawing::Size(174, 253);
				this->data_grid->TabIndex = 0;
				// 
				// Column1
				// 
				this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(128)));
				this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
				this->Column1->HeaderText = L"1";
				this->Column1->MinimumWidth = 6;
				this->Column1->Name = L"Column1";
				this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
				this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				// 
				// ok_button
				// 
				this->ok_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
				this->ok_button->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
				this->ok_button->Location = System::Drawing::Point(109, 258);
				this->ok_button->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->ok_button->Name = L"ok_button";
				this->ok_button->Size = System::Drawing::Size(56, 23);
				this->ok_button->TabIndex = 1;
				this->ok_button->Text = L"OK";
				this->ok_button->UseVisualStyleBackColor = true;
				this->ok_button->Click += gcnew System::EventHandler(this, &ManageItemsForm::ok_button_Click);
				// 
				// cancel_button
				// 
				this->cancel_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
				this->cancel_button->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
				this->cancel_button->Location = System::Drawing::Point(26, 258);
				this->cancel_button->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->cancel_button->Name = L"cancel_button";
				this->cancel_button->Size = System::Drawing::Size(78, 23);
				this->cancel_button->TabIndex = 2;
				this->cancel_button->Text = L"キャンセル";
				this->cancel_button->UseVisualStyleBackColor = true;
				this->cancel_button->Click += gcnew System::EventHandler(this, &ManageItemsForm::cancel_button_Click);
				// 
				// ManageItemsForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
				this->ClientSize = System::Drawing::Size(174, 285);
				this->Controls->Add(this->cancel_button);
				this->Controls->Add(this->ok_button);
				this->Controls->Add(this->data_grid);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
				this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Name = L"ManageItemsForm";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
				this->Text = L"ManageItemsForm";
				this->Load += gcnew System::EventHandler(this, &ManageItemsForm::ManageItemsForm_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
				this->ResumeLayout(false);

			}
#pragma endregion

#pragma region イベントハンドラ等
	private:
		Void ManageItemsForm_Load(System::Object^ sender, System::EventArgs^ e);
		Void ok_button_Click(System::Object^ sender, System::EventArgs^ e);
		Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
	};
}
