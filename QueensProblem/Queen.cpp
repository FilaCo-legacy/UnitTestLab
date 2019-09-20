#include "pch.h"
#include "Queen.h"
#include <cmath>
#include <exception>

namespace queens_problem {
	bool Queen::Attacks(const Queen& other) const {
		if (get_x() == other.get_x() && get_y() == other.get_y())
			throw std::exception("Ферзи стоят на одной и той же клетке");
		
		return get_x() == other.get_x() || get_y() == other.get_y() ||
			abs(get_x() - other.get_x()) == abs(get_y() - other.get_y());
	}

}
