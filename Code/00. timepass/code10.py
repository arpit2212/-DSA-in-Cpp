# Use **TAB** spaces only for indentation (do not use spaces)

def helper():
	# Uncomment and convert input type if needed
	# For integer input: value = int(input())
	# For list input: values = list(map(int, input().split()))

	N, M = map(int, input().split())
	H = [0] + list(map(int, input().split()))  # 1-indexed

	successfulBalls = []

	for i in range(1, M + 1):
		A, B = map(int, input().split())

		if A > B:
			A, B = B, A

		maxHill = 0
		for j in range(A + 1, B):
			maxHill = max(maxHill, H[j])

		if H[A] >= maxHill and H[A] >= H[B]:
			successfulBalls.append(i)

	print(len(successfulBalls))
	print("Bob can catapult ball number ", end="")
	for idx in range(len(successfulBalls)):
		print(successfulBalls[idx], end="")
		if idx != len(successfulBalls) - 1:
			print(" and ", end="")
	print()


if __name__ == "__main__":
	helper()
