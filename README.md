# Elevator_System_Design

Elevator Scheduling Algorithms
In elevator systems, different scheduling algorithms are used to efficiently serve passengers' requests. Four common algorithms are discussed here: First Come First Serve (FCFS), Shortest Seek Time First (SSTF), Scan, and Look.

First Come First Serve (FCFS)
Overview:
The FCFS algorithm is a straightforward method for an elevator to serve passenger requests based on a first-come-first-serve basis. When a passenger makes a request, it is added to a queue. In our example, let's consider a building with 11 floors and a single elevator to serve requests.

How It Works:

When a passenger on floor 2 requests the elevator to go down, their request is added to the queue.
Subsequently, a passenger on floor 4 requests the elevator to go up, and this request is also added to the queue.
Requests continue to be added to the queue as they come in.
The elevator serves these requests in the order they were added to the queue. In other words, it first goes to floor 2 to drop off the passenger, then to floor 4 to fulfill that request, and so on.
Limitations:
While FCFS is easy to implement and ensures all requests are considered, it has its drawbacks:

Passengers might experience long wait times, especially in high-traffic scenarios.
It may result in unnecessary elevator movement, leading to resource wastage. For instance, if the elevator is moving up and a passenger on floor 3 requests to go down, the elevator will descend to floor 3, serve that passenger, and then proceed to floor 6 to serve a later request. Ideally, the elevator should have picked up the passenger on floor 6 first, optimizing the journey.
Additional Algorithms
This readme file provides an overview of the FCFS algorithm. To explore other elevator scheduling algorithms like SSTF, Scan, and Look, check out the respective sections and examples in the accompanying documentation.

Feel free to use this content in your GitHub repository, ensuring that it aligns with your project's goals and objectives. Modify it further to meet your specific needs and style preferences while adhering to best practices for documentation.
