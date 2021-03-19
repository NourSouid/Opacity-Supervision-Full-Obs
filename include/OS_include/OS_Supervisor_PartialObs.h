#ifndef OS_SUPERVISOR_PARTIALOBS_H
#define OS_SUPERVISOR_PARTIALOBS_H

#include <OS_Supervisor.h>


class OS_Supervisor_PartialObs : public OS_Supervisor
{
    public:
        OS_Supervisor_PartialObs();
        virtual ~OS_Supervisor_PartialObs();
        OS_Supervisor_PartialObs(const OS_Supervisor_PartialObs& other);
        OS_Supervisor_PartialObs& operator=(const OS_Supervisor_PartialObs& other);



    protected:

    private:
};

#endif // OS_SUPERVISOR_PARTIALOBS_H
