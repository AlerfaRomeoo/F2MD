//
// Copyright (C) 2016 David Eckhoff <david.eckhoff@fau.de>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include "MBReport.h"

MBReport::MBReport() {
    generationTime=0;
    senderId=0;
    reportedId=0;
    mbType = 0;
//    failedCheckListNum=0;
//    bsmListNum=0;
}

double MBReport::getGenerationTime(){
    return generationTime;
}

int MBReport::getSenderId(){
    return senderId;
}
int MBReport::getReportedId(){
    return reportedId ;
}

double MBReport::getMbType(){
    return mbType;
}

void MBReport::setGenerationTime(double time){
    generationTime = time;
}

void MBReport::setSenderId(int id){
    senderId = id;
}
void MBReport::setReportedId(int id){
    reportedId = id;
}
void MBReport::setMbType(double type){
    mbType = type;
}

//void MBReport::addFailedCheck(std::string check){
//    failedCheckList[failedCheckListNum] = check;
//    failedCheckListNum++;
//}
//
//void MBReport::addBsmCheck(BsmCheck bsmCheck){
//    reportedBsmList[bsmListNum] = bsmCheck;
//    bsmListNum++;
//}





