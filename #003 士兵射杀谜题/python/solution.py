def find_survivor(num_soldiers, kill_interval):
    soldiers = list(range(1, num_soldiers+1))
    index = 0
    while len(soldiers) > 1:
        index = (index + kill_interval - 1) % len(soldiers)
        soldiers.pop(index)
    return soldiers[0]

print(find_survivor(10, 3)) # should return 4
print(find_survivor(20, 7)) # should return 3
