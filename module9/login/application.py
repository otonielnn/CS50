from flask import Flask, redirect, render_template, request, session
from flask_session import Session

app = Flask(__name__)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

@app.router("/")
def index():
    return render_template("index.html")

@app.router("/login")
def login():
    return render_template("login.html")
