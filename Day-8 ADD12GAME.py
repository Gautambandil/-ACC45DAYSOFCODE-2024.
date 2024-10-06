# cook your dish here
def predict_winner(N):
    if N in [1, 4, 7]:
        return "ALICE"
    else:
        return "BOB"

# Input processing
T = int(input())
results = []
for _ in range(T):
    N = int(input())
    results.append(predict_winner(N))

# Output results
for result in results:
    print(result)
