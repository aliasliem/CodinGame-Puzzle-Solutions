import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

# nb_floors(nf): number of floors
# width: width of the area
# nb_rounds(nr): maximum number of rounds
# exit_floor(exf): floor on which the exit is found
# exit_pos(exp): position of the exit on its floor
# nb_total_clones(ntc): number of generated clones
# nb_additional_elevators (nae): ignore (always zero)
# nb_elevators (ne): number of elevators
nf, width, nr, exf, exp, ntc, nae, ne = [int(i) for i in input().split()]
# elevators (e): elevators array
e = {}
for i in range(ne):
    # elevator_floor(ef): floor on which this elevator is found
    # elevator_pos(ep): position of the elevator on its floor
    ef, ep = [int(j) for j in input().split()]
    e[ef] = ep    
#e = sorted(e)

init_pos = 0

# game loop
while True:
    inputs = input().split()
    cf = int(inputs[0])  # floor of the leading clone
    cp = int(inputs[1])  # position of the leading clone on its floor
    direction = inputs[2]  # direction of the leading clone: LEFT or RIGHT

    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr, flush=True)

    # action: WAIT or BLOCK
    if cf==exf:
        target = exp 
    elif cf in e:  
        target = e[cf]

    if direction == 'RIGHT' and cp > target:
        print("BLOCK")
    elif direction == 'LEFT' and cp < target:
        print("BLOCK")
    else:
        print("WAIT")
