#pragma once
#include "Flight.h"
#include <vector>
#include <iostream>

namespace AirlineReservationSystem {

	class Database {
	public:
		Flight& addFlight(Flight& flight);
		Flight& getFlight(int flightNumber);


	private:
		std::vector<Flight> mFlights;
	};
}

