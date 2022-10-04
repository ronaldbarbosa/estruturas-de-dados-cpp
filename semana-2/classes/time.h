#ifndef TIME_H // Inclui apenas se TIME_H não está definido
#define TIME_H // Na primeira inclusão, define TIME_H para que este bloco não seja incluído mais de uma vez

class Time {
    private:
        int hour;
        int minute;
        int second;
    
    public:
        Time(int hour = 0, int minute = 0, int second = 0);
        int getHour() const;
        void setHour(int hour);
        int getMinute() const;
        void setMinute(int minute);
        int getSecond() const;
        void setSecond(int second);
        void print() const;
        void nextSecond();
};

#endif