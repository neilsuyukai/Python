import turtle

# 設置畫布和海龜
canvas = turtle.Screen()
t = turtle.Turtle()

# 設置等邊三角形邊長
side_length = 100

# 繪製五層等邊上三角形
for i in range(5):
    for j in range(i + 1):
        # 畫等邊三角形
        for k in range(3):
            t.forward(side_length)
            t.left(120)
        t.forward(side_length)
        t.right(60)
    # 移動到下一層的起始位置
    t.penup()
    t.right(120)
    t.forward(side_length)
    t.left(60)
    t.pendown()

# 關閉畫布
canvas.exitonclick()
