/*******************************************************************************
* @author  Joseph Kamel 
* @email   joseph.kamel@gmail.com
* @date    11/04/2018
* @version 1.0
*
* SCA (Secure Cooperative Autonomous systems)
* Copyright (c) 2013, 2018 Institut de Recherche Technologique SystemX
* All rights reserved.
*******************************************************************************/

#ifndef __VEINS_MDMHistory_H_
#define __VEINS_MDMHistory_H_

#include <omnetpp.h>
#include "BsmCheck.h"
#include "veins/modules/application/ieee80211p/BaseWaveApplLayer.h"

using namespace omnetpp;
#include "../supportClasses/MDMLib.h"

class MDMHistory {
    private:
        int nodeId;
        int BSMNum;
        BsmCheck bsmCheckListV1[MAXMDMLENGTH];
        BsmCheck bsmCheckListV2[MAXMDMLENGTH];

    public:
        MDMHistory();
        MDMHistory(int);
        int getMDMNum();

        BsmCheck getBsmCheck(int index, int version);

        void addBsmCheck(BsmCheck bsmCheckV1, BsmCheck bsmCheckV2);
        void setBsmCheck(int index, BsmCheck bsmCheckV1,BsmCheck bsmCheckV2);
    };

#endif
