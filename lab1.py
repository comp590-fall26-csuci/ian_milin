def iterate(out, count=0, prev=1, val=0):
    while count < 25:
        print(str(val), file=out)
        count, prev, val = count + 1, val, val + prev

def fibonacci():
    with open('output/out.txt', 'w') as output:
        iterate(output)

fibonacci()
