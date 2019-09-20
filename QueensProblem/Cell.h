#pragma once

namespace queens_problem {
	class Cell {
	public:
		Cell(const char& x, const int& y);

		void set_x(const char& x);
		void set_y(const int& y);

		int get_x() const;
		int get_y() const;
	private:
		int x_{};
		int y_{};

	};
}


