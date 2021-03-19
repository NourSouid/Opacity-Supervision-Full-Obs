#ifndef OS_SUPERVISOR_FULLOBS_H
#define OS_SUPERVISOR_FULLOBS_H

#include <OS_Supervisor.h>


class OS_Supervisor_FullObs : public OS_Supervisor
{
    public:
        std::map<string, list<pair<bdd, int>> > control;//to be set to empty at first//where????


        OS_Supervisor_FullObs();
        virtual ~OS_Supervisor_FullObs();
        OS_Supervisor_FullObs(const OS_Supervisor_FullObs& other);

        void addControlAction(string trace, bdd state, int transToDesactivate);
        void printControl();

    protected:

    private:
};

#endif // OS_SUPERVISOR_FULLOBS_H
