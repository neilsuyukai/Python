import csv

# Read the CSV file
data = []
with open('data.csv', 'r') as file:
    reader = csv.reader(file)
    for row in reader:
        data.append([int(num) for num in row])

# Calculate the sum of each column
column_sums = [sum(col) for col in zip(*data)]

# Prompt for the column number
# n = int(input("Enter the column number (0-9): "))
n = int(input())
# Print the sum of the specified column
print(column_sums[n])
