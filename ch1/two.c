#include <stdio.h>       // for printf
#include <stdlib.h>      // for exit
#include <net/if.h>      // for IF_DEQUEUE
#include <sys/queue.h>   // for LIST_EMPTY

int main() {
    struct mbuf *m = NULL;
    struct mbuf *ipintrq; // Declaration of ipintrq

    int s;
    s = splimp();
    IF_DEQUEUE(&ipintrq, m);
    splx(s);
    if (m == NULL) {
        printf("Failed to dequeue an mbuf.\n");
        exit(1);
    }
    printf("Successfully dequeued an mbuf.\n");
    return 0;
}


/*
  splimp raises the CPU priority to
  the level used by the network device drivers
  macro IF_DEQUEUE  remove the
  next packet at the head of the IP input queue (ipintrq),
  placing the pointer to this mbuf chain
*/
