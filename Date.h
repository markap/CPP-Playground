#ifndef DATE_H
#define DATE_H


class Date
{
    private:
        int month;
        int day;
        int year;

    public:
        Date() {}

        Date(int m, int d, int y);

        void setDate(int m, int d, int y);
        void print();

        int getMonth() { return this->month; }
        int getDay() { return this->day; }
        int getYear() { return this->year; }
};


#endif
