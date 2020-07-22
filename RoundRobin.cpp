#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int id;
    int arrival;
    int burst;

    
};
struct CompareArrival { 
    bool operator()(Process const& p1, Process const& p2) 
    { 
        // return "true" if "p1" is ordered  
        // before "p2", for example: 
        return p1.arrival < p2.arrival; 
    } 
};
bool compare(Process p , Process q)
{
    return p.arrival<q.arrival;
}
int main()
{
    // Process Array
    vector<Process> process;
    
    
    int n;
    cout<<"enter number of process : ";
    cin>>n;


    queue<Process> process_queue;
    
    
    // Filling Process Arrival time and Burst time
    cout<<endl<<" Enter Process arrival and Burst time : "<<endl;
    for(int i=1;i<=n;i++)
    {
        Process p;
        p.id=i;
        cin>>p.arrival>>p.burst;
        process.push_back(p);
    }
    
    // sort according to the arrival time
    sort(process.begin(),process.end(),compare);

    for(auto x : process)
    {
        Process s;
        s.id=x.id;
        s.arrival=x.arrival;
        s.burst=x.burst;
        process_queue.push(s);
    }

    // set Quantum time 
    int Quantum_time;
    cout<<endl<<"Enter Quantum_time : ";
    cin>>Quantum_time;

    //create CPU array like Gantt chart
    vector<Process> cpu;

    // create ready queue for maintaining the processes
    queue<Process> ready_queue;
    
    //insert first process in ready_queue from process_queue (Sorted order of Arrival time)
    ready_queue.push(process_queue.front());

    // total time 
    int total_time=0;
    bool first_time = true;
    // if any process is not started yet then we will reach to  the first arrival time
    if(total_time<process_queue.front().arrival)
    {
        total_time+=process_queue.front().arrival;
    }
    
    // Pop first process from process_queue
    process_queue.pop();
    
    
    while(!ready_queue.empty() || !process_queue.empty())
    {
        Process x = ready_queue.front();
        
        if(!process_queue.empty() && total_time>=process_queue.front().arrival && !first_time)
        {
            x=process_queue.front();
            cpu.push_back(x);
            x.burst-=Quantum_time;
            process_queue.pop();
        }
        else
        {
            cpu.push_back(x);
            x.burst-=Quantum_time;
            ready_queue.pop();
        }
        if(first_time)
            first_time=!first_time;
        total_time+=Quantum_time;
        if(x.burst<=0)
            continue;
        ready_queue.push(x);
    }
    

    cout<<endl<<endl<<"Gantt Chart "<<endl;
    cout<<" Start - > ";
    cout<<endl<<" ------------------------------------------"<<endl;
    cout<<" | ";
    for(auto x : cpu)
    {
        cout<<x.id<<"  |  ";
    }
    cout<<endl<<" ------------------------------------------";
    return 0;
}