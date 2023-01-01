n, k, l, c, d, p, nl, np = map(int, input().split())
tot_drink = k*l
tot_lime = c*d
drink_needs = int(tot_drink/nl)
salt_needs = int(p/np)
print(int(min(tot_lime, drink_needs, salt_needs)/n))
