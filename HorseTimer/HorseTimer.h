#ifndef HORSETIMER_H
#define HORSETIMER_H

/* Method for calcultaing horse speed in Minecraft
   distance: Distance travelled
   blocks: amount of blocks in hopper
   repeaterDelay: 0.2 for each repeater from trigger pressure plates
   out: Result in blocks/second
*/
double calcSpeed(int distance, int blocks, double repeaterDelay);

#endif /* HORSETIMER_H */
