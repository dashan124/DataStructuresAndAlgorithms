n = int(raw_input().strip())
candles = map(int,raw_input().strip().split(' '))

print candles.count(max(candles))