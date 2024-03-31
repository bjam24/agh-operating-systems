# Bisection method - numerical method
def polynomial(num):
    y = 0
    for j in range(0, degree + 1):
        y += coefficients[j] * num ** (degree - j)
    return y


def bisection():
    a, b, tolerance, iterations = 1, 2, 0.001, 15
    x_old = a
    solution = False
    for i in range(0, iterations):
        x = (a + b) / 2
        if abs(x - x_old) < tolerance:
            solution = True
            break
        y_a = polynomial(a)
        y_b = polynomial(b)
        if y_a * y_b < 0:
            a, b = a, x
        else:
            a, b = x, b
        x_old = x

    if solution is True:
        return x
    else:
        return "Required accuracy is not reached in {}".format(iterations)


if __name__ == '__main__':
    degree = int(input("Enter a degree of polynomial: "))
    coefficients = list(map(int, input("Enter coefficients of polynomial: ").split()))
    result = bisection()
    print(result)

