#include "pch.h"
#include "Flight.h"

using namespace std;

namespace AirlineReservationSystem {
	Flight::Flight(const std::string& flightName, const std::string& departureCity,
		const std::string& arrivalCity, int flightNumber, int totalSeats) : mFlightName(flightName),
		mDepartureCity(departureCity), mArrivalCity(arrivalCity), mFlightNumber(flightNumber),
		mTotalSeats(totalSeats)
	{

	}
}
