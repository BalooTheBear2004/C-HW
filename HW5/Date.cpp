#include "Date.h"
using namespace std;

bool Date::ValidMonth(int m)
{
    return m > 0 && m <= 12;
}

bool Date::ValidDay(int d)
{
    return d > 0 && d <= 31;
}

Date::Date()
{
    day = 1;
    month = 1;
    year = 2024;
}

Date::Date(int d, int m, int y)
{
    if (ValidDay(d) && ValidMonth(m) && y > 0)
    {
        day = d;
        month = m;
        year = y;
    }
    else
    {
        day = 0;
        month = 0;
        year = 0;
    }
}

int Date::getDay() { return day; }

int Date::getMonth() { return month; }

int Date::getYear() { return year; }


void Date::setDay(int d) throw(char*)
{
    if (!(ValidDay(d))) throw "day must be between 1 and 31";

    if (ValidDay(d))
    {
        day = d;
    }
}

void Date::setMonth(int m) throw( char*)
{
    if (ValidMonth(m))
    {
        month = m;
    }
    else
    {
        throw"month must be between 1 and 12";
    }
}

void Date::setYear(int y) throw(char*)
{
    if (y > 0)
    {
        year = y;
    }
    else
    {
        throw"year must be 0 or above";
    }
}

bool Date::operator < (Date& other)
{
    if (year < other.year)
    {
        return true;
    }
    if (year > other.year)
    {
        return false;
    }
    if (month < other.month)
    {
        return true;
    }
    if (month > other.month)
    {
        return false;
    }
    return (day < other.day);
}

bool Date::operator > (Date& other)
{
    return other < *this;
}

bool Date::operator == (Date& other)
{
    return (day == other.day) && (month == other.month) && (year == other.year);
}

ostream& operator << (ostream& os, Date& date)
{
    os << date.day << "/" << date.month << "/" << date.year;
    return os;
}
