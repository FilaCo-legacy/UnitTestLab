#pragma once


namespace quadratic_equation {
	// ������������ ��� ���������� ����������
	enum Result
	{
		kNoRoots,
		kOneRoot,
		kTwoRoots,
		kInfiniteRoots
	};

	class QuadraticEquation
	{
	public:
		// �������� ����������
		static constexpr double kEps = 1e-16;

		// ����� ������ ��������� ����������� ���������
		// � ������ ���� ������ ���������� ������� �������
		// � ������ ���������� ������ ��� �� ������������ ���-�� �� ������ �������� � ����������
		Result FindRoots(double& root1, double& root2) const;

		// �����������, ������� �������� �� ���� 3 ��������� ����������� ���������
		QuadraticEquation(const double& a, const double& b, const double& c) : a_(a), b_(b), c_(c) {}

	private:
		// ��������� ����������� ���������
		double a_, b_, c_;

		double Discriminant() const { return b_ * b_ - 4 * a_ * c_; }
	};

}
