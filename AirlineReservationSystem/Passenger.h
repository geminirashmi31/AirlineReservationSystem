#pragma once
#include <string>

namespace AirlineReservationSystem
{
	class Passenger
	{
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName);

		int getPassengerNumber() const;
		void setPassengerNumber(int passengerNumber);

		const std::string& getFirstName() const;
		void setFirstName(const std::string& firstName);

		const std::string& getLastName() const;
		void setLastName(const std::string& lastName);

		void display() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		int mPassengerNumber = -1;
	};
}
