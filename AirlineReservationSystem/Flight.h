#pragma once
#include <string>

namespace AirlineReservationSystem
{
	class Flight
	{
	public:
		Flight() = default;
		Flight(const std::string& flightName, const std::string& departureCity,
			const std::string& arrivalCity, int flightNumber, int totalSeats);

		int getFlightNumber() const;
		void getFlightNumber(int passengerNumber);

		const std::string& getFlightName() const;
		void setFlightName(const std::string& firstName);

		const std::string& getDepartureCity() const;
		void setDepartureCity(const std::string& lastName);

		const std::string& getArrivalCity() const;
		void setArrivalCity(const std::string& lastName);

		void display() const;

	private:
		std::string mFlightName;
		std::string mDepartureCity;
		std::string mArrivalCity;
		int mFlightNumber = -1;
	};
}