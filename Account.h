// Authors: Royce Nguyen, Jayro Alvarez, Brian Trinh, Danny Pham
// Course: CPSC 362
// Filename: Account.h
// Purpose: Holds user account information
// Last updated: 7/31/2018

/**
	<EC>Account
	Account entity class to hold account information
	vector<Booking> bookingslist	<- Holds all bookings related to the account
	static int id					<- Static variable used in account creation to generate a unique ID
*/
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <vector>
#include "Booking.h"
#include "Flight.h"
using namespace std;

class Account
{
	public:
		Account();
		Account(string, string, string, string, string, string, string, string, string, string, string);
		~Account();

		// Setters
		void setAccountHolderName(string);
		void setPassword(string);
		void setCreditCardNum(string);
		void setCreditCardExpiration(string);
		void setBillingAddress(string);
		void setEmail(string);
		void setDateOfBirth(string);
		void setHomePhone(string);
		void setCellPhone(string);
	
		// Getters
		int getID() const;
		string getName() const;
		string getUsername() const;
		string getCreditCardNum();

		// Functions
		bool validatePassword(string) const;
		void print() const;
		void addBooking(string, int, int);	
		void reviewBookings();
		void printBooking(string flightNum, vector<Flight>);
		void modifyBooking(string flightNum, vector<Flight>&);
		void cancelBooking(string flightNum, vector<Flight>&);
		bool checkCC();
		string seatIntToStr(int);
		bool isBookingsEmpty();
	
		vector<Booking> bookingslist;
	private:
		int accountID;
		string userName;
		string password;
		string accountHolderName;
		string creditCardNum;
		string creditCardExpiration;
		string billingAddress;
		string email;
		string dateOfBirth;
		string homePhone;
		string cellPhone;
		string sex;

		static int id;
};

#endif
