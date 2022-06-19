n = int(input())
mook = set()
for i in range(n):
    mook.add(input())
mooklist = list(mook)
mooklist.sort()
for i in mooklist:
    print(i)