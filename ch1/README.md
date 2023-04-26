
# the first porogram

Type in the example program (Figure 1.2) and run
it on your system. If your system has a
system call tracing capability, such as trace
(SunOS 4.x), truss (SVR4), or ktrace
(4.4BSD), use it to determine the system
calls invoked by this example.


# the secound porogram

In our example that calls IF_DEQUEUE in Section 1.12,
we noted that the call to splimp
blocks network device drivers from interrupting.
While Ethernet drivers execute at this
level, what happens to SLIP drivers?
