#pragma once
#include "Cell.h"
namespace queen_problem {
	class Queen {
	public:
		bool Attacks(const Queen& other);

		explicit Queen(Cell* position) :position_(position) {}
	private:
		Cell* position_;
	};
}


