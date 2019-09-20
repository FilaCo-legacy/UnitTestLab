#include "pch.h"
#include "Cell.h"
#include <exception>

namespace queens_problem {
	Cell::Cell(const char& x, const int& y) {
		set_x(x);
		set_y(y);
	}

	int Cell::get_x() const {
		return x_;
	}

	int Cell::get_y() const {
		return y_;
	}

	void Cell::set_x(const char& x) {
		if (x < 'a' || x > 'h')
			throw std::exception("Невозможная абсцисса ячейки");

		x_ = x - 'a' + 1;
	}

	void Cell::set_y(const int& y) {
		if (y < 1 || y > 8)
			throw std::exception("Невозможная ордината ячейки");

		y_ = y;
	}
}
