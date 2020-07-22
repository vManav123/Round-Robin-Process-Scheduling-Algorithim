# Round-Robin-Process-Scheduling-Algorithim
The name of this algorithm comes from the round-robin principle, where each person gets an equal share of something in turns. It is the oldest, simplest scheduling algorithm, which is mostly used for multitasking.  In Round-robin scheduling, each ready task runs turn by turn only in a cyclic queue for a limited time slice. This algorithm also offers starvation free execution of processes.

## Characteristics of Round-Robin Scheduling
Here are the important characteristics of Round-Robin Scheduling:

* Round robin is a pre-emptive algorithm
* The CPU is shifted to the next process after fixed interval time, which is called time quantum/time slice.
* The process that is preempted is added to the end of the queue.
* Round robin is a hybrid model which is clock-driven
* Time slice should be minimum, which is assigned for a specific task that needs to be processed. However, it may differ OS to OS.
* It is a real time algorithm which responds to the event within a specific time limit.
* Round robin is one of the oldest, fairest, and easiest algorithm.
* Widely used scheduling method in traditional OS.

## Example for Explaination of This Algorithim

Consider this following three processes
<br>
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/Screenshot%20(29).png" width="650">
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/122319_0836_RoundRobinS1.png" width="650">
<br>
### Step 1) 
The execution begins with process P1, which has burst time 4. Here, every process executes for 2 seconds. P2 and P3 are still in the waiting queue.
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/122319_0836_RoundRobinS2.png" width="650">
<br>
<br>
### Step 2) 
At time =2, P1 is added to the end of the Queue and P2 starts executing
<br>
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/122319_0836_RoundRobinS3.png" width="650">
<br>
<br>
### Step 3) 
At time=4 , P2 is preempted and add at the end of the queue. P3 starts executing.
<br>
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/122319_0836_RoundRobinS4.png" width="650">
<br>
<br>
### Step 4) 
At time=6 , P3 is preempted and add at the end of the queue. P1 starts executing.
<br>
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/122319_0836_RoundRobinS5.png" width="650">
<br>
<br>
### Step 5) 
At time=8 , P1 has a burst time of 4. It has completed execution. P2 starts execution
<br>
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/122319_0836_RoundRobinS6.png" width="650">
<br>
<br>
### Step 6) 
P2 has a burst time of 3. It has already executed for 2 interval. At time=9, P2 completes execution. Then, P3 starts execution till it completes.
<br>
<br>
<img src="https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/blob/master/Round%20Robin%20View/122319_0836_RoundRobinS6.png" width="650">
<br>
<br>
## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.
1.fork or download as zip
2.open Visual code studio -> open project -> select the RoundRobin project
or
Open Visual code studio -> Import from version Control -> github -> paste the url of project to download


### Prerequisites

What things you need to install the software
* Visual Code Studio 1.4.7 or latest
* MingW plugin 32bit/64bit

## Built With

* [Visual Code Studio](https://code.visualstudio.com/) - The Programming and Developent Platform
* [MingW](http://www.mingw.org/) - Dependency Management for C++ Code to run on VS code

## Authors

* **Manav Verma** - *Initial work* - [Manav-Verma](https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/edit/master/README.md)

## License

This project is licensed under the MIT License - see the [LICENSE.md](https://github.com/vManav123/Round-Robin-Process-Scheduling-Algorithim/edit/master/README.md) file for details



