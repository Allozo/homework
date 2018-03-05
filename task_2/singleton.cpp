class Singleton{
public:
    static Singleton getinst(){
        if (inst == nullptr) {
            inst = new Singleton();
        }
    }
private:
    static Singleton* inst;
    Singleton(){}
};
