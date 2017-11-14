//
// Created by Mariana on 10/11/2017.
//

#ifndef AEDA_FEUP_PROJECT_EXCEPTIONS_H
#define AEDA_FEUP_PROJECT_EXCEPTIONS_H

#include <string>
using namespace std;

class InvalidFormat {
public:
    InvalidFormat();
};

class InvalidFilePath {
private:
    std::string type;

public:
    InvalidFilePath();
    InvalidFilePath(std::string type);
    void print();
};

class InvalidPassenger {

private:
    unsigned int id;

public:
    InvalidPassenger(unsigned int id);
    void print() const;
    void printDuplicate() const;

};

class InvalidAirplane {

private:
    unsigned int id;

public:
    InvalidAirplane(unsigned int id);
    void print() const;
    void printDuplicate() const;

};

class InvalidFlight {

private:
    unsigned int id;

public:
    InvalidFlight(unsigned int id);
    void print() const;
    void printDuplicate() const;

};

class InvalidSeat {

private:
	string seat;

public:
	InvalidSeat(string seat);
	void print() const;
};

class OverlapingFlight {

public:
    OverlapingFlight();
    void print() const;
};

class ConnectionFlight {

public:
    ConnectionFlight();
    void print() const ;
};

#endif //AEDA_FEUP_PROJECT_EXCEPTIONS_H
