#include<string>

class calc{
    private:
    calc();
    public:
    static calc createObj();
    static int add(int num1,int num2);
    int add(int num1,int num2,int num3);
    float add(float num1, float num2);
    std::string add(std::string a,std::string b);
    static int mult(int num1,int num2);
    static int sub(int num1,int num2);
};