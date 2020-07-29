using namespace std;
class Calculator {
    public:
        Calculator(float initial_K, float initial_Ra, float initial_Rb);
        void setStart(float data_K, float data_Ra, float data_Rb);
        float get_new_Ra(float Sa);
        float get_new_Rb(float Sa);
        void setAgain();
    private:
        float K;
        float Ra;
        float Rb;
        float new_Ra;
        float new_Rb;
};
