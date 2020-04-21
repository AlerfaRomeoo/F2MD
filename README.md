
# Framework For Misbehavior Detection (F2MD)

This project aims to recreate within a simulation all the elements that form the chain of misbehavior detection. 

The scientific publication is available on [ResearchGate](https://www.researchgate.net/publication/340350056_Simulation_Framework_for_Misbehavior_Detection_in_Vehicular_Networks). If you find this code useful in your research, please consider citing :

    @ARTICLE{9056489,
        author={J. {Kamel} and M. R. {Ansari} and J. {Petit} and A. {Kaiser} and I. {Ben Jemaa} and P. {Urien}},
        title={Simulation Framework for Misbehavior Detection in Vehicular Networks},
        journal={IEEE Transactions on Vehicular Technology},
        year={2020}
    }
    
## Supported network technologies:
* ITS-G5 (IEEE 802.11p)
* C-V2X (3GPP PC5 Mode 4)

## Features
* Basic Plausibility Checks on Received Beacons (mdChecks)
* Node Level Plausibility Investigation (mdApplications)
* Real Time Machine Learning for Plausibility Investigation (HTTP to the Python Server: machine-learning-server)
* Real Time Detection Status Output (mdStats, see README in f2md-results)
* Support for Multiple Reporting Mechanisms (mdReport)
* Support for Global Reports Collection and Investigation (HTTP to the Python Server: misbehavior-authority-server)
* Basic Psudonym Change Policies (mdPCPolicies)
* Local and Global Misbehavior Attacks Implementation (mdAttacks)
* Launch Attacks in Real Time (HTTP to the Python server: attack-server)

## Installation
1. Install Sumo 1.5.0
2. Install OMNeT++ 5.6.1
3. Clone this repository along with all the submodules to your local machine
```
$ git clone --recurse-submodules https://github.com/josephkamel/F2MD.git
```
4. Build all f2md modules (inet, veins, veins_inet3 and simulte)
```
$ ./buildF2MD.sh
```
5. Launch the SUMO TraCI daemon
```
$ ./launchSumoTraciDaemon.sh
```
6. Run a simulation scenario
```
$ ./runScenario.sh 
```

For more information check the [Veins Tutorial](https://veins.car2x.org/tutorial/) or the [OpenCV2X Tutorial](http://www.cs.ucc.ie/cv2x/pages/documentation/documentation.html)).

Alternatively, contact the author for a preinstalled **Instant F2MD** virtual machine.

## Project Diagram

 ![alt text](https://github.com/josephkamel/F2MD/blob/master/F2MD-Diagram-V2.jpg)


