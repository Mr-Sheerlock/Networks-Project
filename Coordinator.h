//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef __NETWORKPROJECT_COORDINATOR_H_
#define __NETWORKPROJECT_COORDINATOR_H_

#include <omnetpp.h>
#include<stdio.h>
#include <string>
#include <fstream>
using std::fstream;
using std::string;
using std::to_string;
using std::cout;
using namespace omnetpp;

/**
 * TODO - Generated class
 */
class Coordinator : public cSimpleModule
{
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

#endif
