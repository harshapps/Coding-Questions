NO_OF_CHARS = 256

def ana(str1, str2):
    count = [0] * NO_OF_CHARS
    # count2[] = [0] * NO_OF_CHARS

    for i in str1:
        count[ord(i)]+=1
    for i in str2:
        count[ord(i)]-=1

    if len(str1) != len(str2):
        return 0

    for i in xrange(NO_OF_CHARS):        
        if count[i]:
            return 0
        
    return 1

str1 = "garb"
str2 = "grab"

if ana(str1, str2):
    print "Strings are Anagram"
else:
    print "Strings are not Anagram"
