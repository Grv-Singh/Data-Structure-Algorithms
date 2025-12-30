def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

def lattice_paths(grid_size):
    n = grid_size * 2
    k = grid_size
    return factorial(n) // (factorial(k) * factorial(n - k))

result = lattice_paths(20)
print(f"Number of lattice paths in a 20x20 grid: {result}")