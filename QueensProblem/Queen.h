#pragma once
namespace queens_problem {
	class Queen {
	public:

		// ѕредикат, провер€ющий атакует ли данна€ королеву другую
		// ‘ерзи атакуют друг друга тогда и только тогда, когда:
		// 1) одна из их координат совпадает (а4 и а8 или b8 и e8) или
		// 2) модуль разности их соответствующих координат одинаков (a4 и c2)
		bool Attacks(const Queen& other) const;

		//  онструктор, создающий новый экземпл€р класса королева из €чейки, в которой она находитс€
		explicit Queen(Cell* position) :position_(position) {}

		int get_x() const { return position_->get_x(); }

		int get_y() const { return position_->get_y(); }
	private:
		// ”казатель на €чейку, в которой стоит королева
		Cell* position_;
	};
}


