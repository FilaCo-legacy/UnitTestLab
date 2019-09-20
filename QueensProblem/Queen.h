#pragma once
namespace queens_problem {
	class Queen {
	public:

		// ��������, ����������� ������� �� ������ �������� ������
		// ����� ������� ���� ����� ����� � ������ �����, �����:
		// 1) ���� �� �� ��������� ��������� (�4 � �8 ��� b8 � e8) ���
		// 2) ������ �������� �� ��������������� ��������� �������� (a4 � c2)
		bool Attacks(const Queen& other) const;

		// �����������, ��������� ����� ��������� ������ �������� �� ������, � ������� ��� ���������
		explicit Queen(Cell* position) :position_(position) {}

		int get_x() const { return position_->get_x(); }

		int get_y() const { return position_->get_y(); }
	private:
		// ��������� �� ������, � ������� ����� ��������
		Cell* position_;
	};
}


