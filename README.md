# project
Hongyu Chen

200362471

The topic of operating systems is deadlock with threads.

Deadlock is a situation or condition when two or more processes are holding some resources and trying to acquire some more resources, and they can not release the resources until they finish there execution. This means that when the number of available resources becomes less than the number requested by the user, the process will enter a waiting state. Sometimes, the number of waits increases, so there is no opportunity to check for insufficient resources. This situation is called a deadlock. In fact, deadlock is a major problem for us, and deadlock only occurs in multitasking operating systems. Deadlock cannot occur in a single-task operating system, because all resources exist only for the currently running task.

Thread deadlock is a hot topic in multi-threading, which makes multi-threading a complex area for beginners. Thread deadlock is a situation, where more than one threads with a shared resource are waiting for other thread(s) to release the lock on that shared resource without doing anything usefully.
