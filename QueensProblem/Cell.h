#pragma once

namespace queen_problem {
	enum Verticals {
		A = 1,
		B,
		C,
		D,
		E,
		F,
		G,
		H
	};

	enum Horizontals {
		ONE = 1,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT
	};

	struct Cell {
		Verticals x;
		Horizontals y;

		Cell(const Verticals x, const Horizontals y) : x(x), y(y) {}
	};
}


