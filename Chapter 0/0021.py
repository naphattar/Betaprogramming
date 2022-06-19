word = input()
tar = {"apa":"a","epe":"e","ipi":"i","opo":"o","upu":"u"}
for key in tar:
    if key in word:
        word = word.replace(key,tar[key])
print(word)