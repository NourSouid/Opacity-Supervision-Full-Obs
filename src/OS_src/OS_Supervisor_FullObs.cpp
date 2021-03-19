#include "OS_Supervisor_FullObs.h"

OS_Supervisor_FullObs::OS_Supervisor_FullObs()
{
    //ctor
}

OS_Supervisor_FullObs::~OS_Supervisor_FullObs()
{
    //dtor
}

OS_Supervisor_FullObs::OS_Supervisor_FullObs(const OS_Supervisor_FullObs& other)
{
    //copy ctor
}

void OS_Supervisor_FullObs::addControlAction(string trace, bdd state, int transToDesactivate){
    std::pair<bdd,int>couple;
    couple=std::make_pair(state,transToDesactivate);
    if (this->control.find(trace) != this->control.end())
    {
        this->control[trace].push_back(couple);
        cout<<"trace found and added "<<endl;
        return;
    }

    /*
    if (this->control.size()==1 && trace==tr)
    {
        //it is the first trace
        trace = "epsilon";
    }*/
    cout<<"add control action "<<endl;
    list<pair<bdd, int>> first;
    first.push_back(couple);
    this->control.insert( pair<string,list<pair<bdd, int>>>(trace,first) );
    cout<<"inserted for the first time in the control map "<<endl;
    cout<<"control size: "<<control.size()<<endl;


}
