import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
def orientation(p, q, r):
    val = (q[1] - p[1]) * (r[0] - q[0]) - (q[0] - p[0]) * (r[1] - q[1])
    return 0 if val == 0 else (1 if val > 0 else 2)
def graham_scan(points):
    points = sorted(points, key=lambda x: (x[1], x[0]))
    p0 = points.pop(0)
    points = sorted(points, key=lambda p: (np.arctan2(p[1] - p0[1], p[0] - p0[0]), np.linalg.norm(np.array(p) - np.array(p0))))
    hull = [p0]
    for p in points:
        while len(hull) > 1 and orientation(hull[-2], hull[-1], p) != 2:
            hull.pop()
            hull.append(p)
    return hull

np.random.seed(0)
points = np.random.rand(10, 2)
scaler = StandardScaler()
points = scaler.fit_transform(points)
print("Random Points (after scaling):")
for point in points:
    print(f"({point[0]:.2f}, {point[1]:.2f})")
    hull = graham_scan(points.tolist())
    hull_points = np.array(hull + [hull[0]])

plt.figure(figsize=(8, 6))
plt.scatter(points[:, 0], points[:, 1], color='blue', label='Points')
plt.plot(hull_points[:, 0], hull_points[:, 1], color='red', linestyle='-', marker='o',
label='Convex Hull')
plt.title("Convex Hull using Graham Scan Algorithm")
plt.xlabel("X-coordinate")
plt.ylabel("Y-coordinate")
plt.legend()
plt.grid()
plt.show()
