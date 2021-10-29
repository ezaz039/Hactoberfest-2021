#include <iostream>
class Olympics{

    int goldCnt;
    std::string country;

    public:

    Olympics(int goldCnt,std::string country){
        
        this->goldCnt=goldCnt;
        this->country=country;
    }
    friend std::ostream& operator<<(std::ostream& out,Olympics& obj){

        out<<obj.goldCnt<<std::endl;
        out<<obj.country<<std::endl;

        return out;
    }
};
int main(){

    Olympics obj(1,"India");
    std::cout<<obj<<std::endl;   //operator<<(ostream,Olympics)
    std::cout<<obj;
    return 0;
}