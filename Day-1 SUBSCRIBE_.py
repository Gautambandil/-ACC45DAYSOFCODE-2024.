def calculate_cost(test_cases):
    results = []
    for N, X in test_cases:
        subscriptions_needed = (N + 5) // 6  # This is equivalent to ceil(N / 6)
        total_cost = subscriptions_needed * X
        results.append(total_cost)
    return results

# Read input
T = int(input())
test_cases = []

for _ in range(T):
    N, X = map(int, input().split())
    test_cases.append((N, X))

# Calculate costs
results = calculate_cost(test_cases)

# Print results
for result in results:
    print(result)