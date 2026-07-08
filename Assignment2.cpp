// CS2Assignments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Address {
    string line1;
    string line2;
    string city;
    string state;
    string postalCode;
};

struct Account {
    string firstName;
    string lastName;
    string acctNum;
    Address address;
    string phoneNumber;
    string email;
};

struct Date {
    string year;
    string month;
    string day;
};

struct Time {
    string hour;
    string minute;
    string timeZone;
};

struct Reservation {
    Account account;
    Date date;
    Time time;
    string departureAirport;
    string arrivalAirport;
    string flightNumber;
};

Address createAddress() {
    Address address;

    cout << "Input line 1: " << endl;
    cin >> address.line1;
    cout << "Input line 2: " << endl;
    cin >> address.line2;
    cout << "Input city: " << endl;
    cin >> address.city;
    cout << "Input state: " << endl;
    cin >> address.state;
    cout << "Input postal code: " << endl;
    cin >> address.postalCode;

    return address;
}

Account createAccount() {
    Account account;

    cout << "Input first name: " << endl;
    cin >> account.firstName;
    cout << "Input last name: " << endl;
    cin >> account.lastName;
    cout << "Input account number: " << endl;
    cin >> account.acctNum;
    createAddress();
    cout << "Input phone number (int): " << endl;
    cin >> account.phoneNumber;
    cout << "Input email: " << endl;
    cin >> account.email;

    return account;
}

Date createDate() {
    Date date;
    cout << "Input month (int): " << endl;
    cin >> date.month;
    cout << "Input day (int): " << endl;
    cin >> date.day;
    cout << "Input year (int): " << endl;
    cin >> date.year;

    return date;
}

Time createTime() {
    Time time;

    cout << "Input hour (int): " << endl;
    cin >> time.hour;
    cout << "Input minute (int): " << endl;
    cin >> time.minute;
    cout << "Input timezone: " << endl;
    cin >> time.timeZone;

    return time;
}

Reservation createReservation() {
    Reservation reservation;

    createAccount();
    createDate();
    createTime();
    cout << "Input departure airport: " << endl;
    cin >> reservation.departureAirport;
    cout << "Input arrival airport: " << endl;
    cin >> reservation.arrivalAirport;
    cout << "Input flight number (int): " << endl;
    cin >> reservation.flightNumber;

    return reservation;
}

void displayAddress(Address address) {
    cout << address.line1 << " " << address.line2 << " " << address.city << ", " << address.state << " " << address.postalCode << endl;
}

void displayAccount(Account account) {
    cout << account.firstName << " " << account.lastName << endl << account.acctNum << endl;
    displayAddress(account.address);
    cout << account.phoneNumber << endl << account.email;
}

void displayDate(Date date) {
    cout << date.month << "/" << date.day << "/" << date.year << endl;
}

void displayTime(Time time) {
    cout << time.hour << ":" << time.minute << " " << time.timeZone << endl;
}

void displayReservation(Reservation reservation) {
    displayAccount(reservation.account);
    displayDate(reservation.date);
    displayTime(reservation.time);
    cout << reservation.departureAirport << endl << reservation.arrivalAirport << endl << reservation.flightNumber;

}

int main()
{
    Reservation reservation = createReservation();
    displayReservation(reservation);
}
