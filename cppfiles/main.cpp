//
// Created by nikita on 28.11.2023.
//
#include "../headers/Map.h"
#include "../headers/agencies/Seal.h"
#include "../headers/agencies/Television.h"
#include <thread>


int main() {
    App app;
    Map<NewsAgency*> map;
    Seal *tel = new Seal();
    tel->setProfile("lal");
    tel->setAddr("str");
    Seal *arg1 = new Seal;
    Seal *arg2 = new Seal;
    arg1->setProfile("arg1");
    arg1->setAddr("str");
    arg2->setProfile("arg2");
    arg2->setAddr("str");
    app.reg("key", tel);
    app.reg("key2", arg1);
    app.reg("key3", arg2);
    Television *exec = new Television();
    exec->setProfile("television");
    exec->setAddr("string");
    app.reg("key4", exec);
    //app.printTyped(AgencyType::SEAL);
    app.regionCount();
}
