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
		void setFlightNumber(int flightNumber);

		const std::string& getFlightName() const;
		void setFlightName(const std::string& flightName);

		const std::string& getDepartureCity() const;
		void setDepartureCity(const std::string& departureCity);

		const std::string& getArrivalCity() const;
		void setArrivalCity(const std::string& arrivalCity);

		int getTotalSeats() const;
		void setTotalSeats(int totalSeats);

		void display() const;

	private:
		std::string mFlightName;
		std::string mDepartureCity;
		std::string mArrivalCity;
		int mFlightNumber = -1;
		int mTotalSeats = 0;
	};
}