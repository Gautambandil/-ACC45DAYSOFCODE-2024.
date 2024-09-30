# Read number of test cases
T = int(input())

# Iterate through each test case
for _ in range(T):
    X, Y = map(int, input().split())
    # Calculate total working hours in the week
    total_hours = (4 * X) + Y
    # Output the result
    print(total_hours)
