
Circle {
    public:
    float r;
    void setRadius(float r){this->r = r;}
    void calculate(){
        cout << fixed << setprecision(2);
        cout << "Area: " << 3.14* r *r << endl;
        cout << "Perimerter :" << 2 * 3.14 * r << endl;
    }
}
