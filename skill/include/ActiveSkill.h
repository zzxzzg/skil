#include "Skill.h"
using namespace std;
class ActiveSkill: public Skill{
    public:
     ActiveSkill();
     /*
     * 计算施法耗时
     */
     float getCastingTime();
     ~ActiveSkill();

};
