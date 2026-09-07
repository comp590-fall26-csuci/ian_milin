def recurse(out, count=0, prev=1, val=0):
    if count < 25:
        print(str(val), file=out)
        recurse(out, count + 1, val, val + prev)

def fibonacci():
    with open('output/out.txt', 'w') as output:
        recurse(output)

fibonacci()
