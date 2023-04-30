#include <stdio.h>

#endif /* class_time_hpp */

class Medication {
    std::string name;
    int strength;
    std::string directions;
    int quantity;
public:
    Medication(std::string newName, int streng, std::string sig, int quant);
    std::string get_name();
    int get_strength();
    std::string get_sig();
    int get_quantity();
};
