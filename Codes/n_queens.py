import time
def is_safe(board, row, col, N):
    for i in range(row):
        if board[i][col] == 1:
            return False
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    for i, j in zip(range(row, -1, -1), range(col, N)):
        if board[i][j] == 1:
            return False
    return True

def solve_nqueens(board, row, N):
    if row >= N:
        return True
    for col in range(N):
        if is_safe(board, row, col, N):
            board[row][col] = 1
    if solve_nqueens(board, row + 1, N):
        return True
    board[row][col] = 0
    return False

def print_board(board, N):
    for row in board:
        print(" ".join(['Q' if x == 1 else '.' for x in row]))
        print("\n")

def n_queens(N):
    board = [[0 for _ in range(N)] for _ in range(N)]
    start_time = time.time()
    if solve_nqueens(board, 0, N):
        end_time = time.time()
        print("Solution for {}-Queens problem:".format(N))
        print_board(board, N)
        print("Time taken: {:.6f} seconds".format(end_time - start_time))
    else:
        print("No solution exists for {}-Queens problem.".format(N))
        n=int(input("Enter value of n: "))
n_queens(4)
