#!/usr/bin/python
# -*- coding: UTF-8 -*-
"""
@author:zhengyc
@file:test.py
@time:2021/09/07
"""

import turtle
test1 = turtle.Turtle()
test1.pencolor("red")

for i in range(20):
    test1.forward(i*10)
    test1.right(144)
turtle.done()