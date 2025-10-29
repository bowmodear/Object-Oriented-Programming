#include<string>
class Distance{
    private:
    int feet;
    float inches;
    public:
    Distance();
    Distance(int f,float in);
    Distance(const Distance& obj);//Copy constructor
    Distance addDistance(Distance d2);
    std::string print();
};